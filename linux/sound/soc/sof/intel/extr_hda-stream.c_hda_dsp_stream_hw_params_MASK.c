
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_sof_dev {int dev; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_dma_buffer {int dummy; } ;
struct TYPE_3__ {scalar_t__ addr; } ;
struct hdac_stream {int index; int frags; int stream_tag; int bufsize; int format_val; scalar_t__ direction; int fifo_size; TYPE_1__ bdl; scalar_t__* posbuf; } ;
struct hdac_ext_stream {struct hdac_stream hstream; } ;
struct TYPE_4__ {scalar_t__ addr; } ;
struct hdac_bus {TYPE_2__ posbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (struct hdac_stream*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct snd_sof_dev*,struct snd_dma_buffer*,struct hdac_stream*) ;
 int FUNC_3 (struct snd_sof_dev*,int ,int) ;
 int FUNC_4 (struct snd_sof_dev*,int ,int,int,int,int ,int ) ;
 int FUNC_5 (struct snd_sof_dev*,int ,int,int,int) ;
 int FUNC_6 (struct snd_sof_dev*,int ,int,int) ;
 struct hdac_bus* FUNC_7 (struct snd_sof_dev*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (scalar_t__) ;

int FUNC_10(struct snd_sof_dev *VAR_23,
        struct hdac_ext_stream *VAR_24,
        struct snd_dma_buffer *VAR_25,
        struct snd_pcm_hw_params *VAR_26)
{
 struct hdac_bus *VAR_27 = FUNC_7(VAR_23);
 struct hdac_stream *VAR_28 = &VAR_24->hstream;
 int VAR_29 = FUNC_0(VAR_28);
 int VAR_30, VAR_31 = VAR_5;
 u32 VAR_32 = VAR_22;
 u32 VAR_33, VAR_34;
 u32 VAR_35;

 if (!VAR_24) {
  FUNC_1(VAR_23->dev, "error: no stream available\n");
  return -VAR_0;
 }


 VAR_34 = 0x1 << VAR_28->index;
 FUNC_5(VAR_23, VAR_3, VAR_21,
    VAR_34, VAR_34);

 if (!VAR_25) {
  FUNC_1(VAR_23->dev, "error: no dma buffer allocated!\n");
  return -VAR_0;
 }


 FUNC_5(VAR_23, VAR_2, VAR_29,
    VAR_18 |
    VAR_22, 0);

 VAR_30 = FUNC_4(VAR_23, VAR_2,
         VAR_29, VAR_35,
         !(VAR_35 & VAR_32),
         VAR_4,
         VAR_6);

 if (VAR_30)
  return VAR_30;

 FUNC_5(VAR_23, VAR_2,
    VAR_29 + VAR_17,
    VAR_18,
    VAR_18);


 FUNC_5(VAR_23, VAR_2, VAR_29, 0x1,
    0x1);
 FUNC_8(3);
 do {
  VAR_33 = FUNC_3(VAR_23, VAR_2,
           VAR_29);
  if (VAR_33 & 0x1)
   break;
 } while (--VAR_31);
 if (VAR_31 == 0) {
  FUNC_1(VAR_23->dev, "error: stream reset failed\n");
  return -VAR_1;
 }

 VAR_31 = VAR_5;
 FUNC_5(VAR_23, VAR_2, VAR_29, 0x1,
    0x0);


 FUNC_8(3);
 do {
  VAR_33 = FUNC_3(VAR_23, VAR_2,
           VAR_29);
  if ((VAR_33 & 0x1) == 0)
   break;
 } while (--VAR_31);
 if (VAR_31 == 0) {
  FUNC_1(VAR_23->dev, "error: timeout waiting for stream reset\n");
  return -VAR_1;
 }

 if (VAR_28->posbuf)
  *VAR_28->posbuf = 0;


 FUNC_6(VAR_23, VAR_2,
     VAR_29 + VAR_11,
     0x0);
 FUNC_6(VAR_23, VAR_2,
     VAR_29 + VAR_12,
     0x0);


 FUNC_5(VAR_23, VAR_2, VAR_29,
    VAR_18 |
    VAR_22, 0);

 VAR_30 = FUNC_4(VAR_23, VAR_2,
         VAR_29, VAR_35,
         !(VAR_35 & VAR_32),
         VAR_4,
         VAR_6);

 if (VAR_30)
  return VAR_30;

 FUNC_5(VAR_23, VAR_2,
    VAR_29 + VAR_17,
    VAR_18,
    VAR_18);

 VAR_28->frags = 0;

 VAR_30 = FUNC_2(VAR_23, VAR_25, VAR_28);
 if (VAR_30 < 0) {
  FUNC_1(VAR_23->dev, "error: set up of BDL failed\n");
  return VAR_30;
 }


 FUNC_5(VAR_23, VAR_2, VAR_29,
    VAR_19,
    VAR_28->stream_tag <<
    VAR_20);


 FUNC_6(VAR_23, VAR_2,
     VAR_29 + VAR_13,
     VAR_28->bufsize);
 FUNC_5(VAR_23, VAR_3, VAR_21,
    VAR_34, 0);


 FUNC_5(VAR_23, VAR_2,
    VAR_29 +
    VAR_15,
    0xffff, VAR_28->format_val);


 FUNC_5(VAR_23, VAR_3, VAR_21,
    VAR_34, VAR_34);


 FUNC_5(VAR_23, VAR_2,
    VAR_29 + VAR_16,
    0xffff, (VAR_28->frags - 1));


 FUNC_6(VAR_23, VAR_2,
     VAR_29 + VAR_11,
     (u32)VAR_28->bdl.addr);
 FUNC_6(VAR_23, VAR_2,
     VAR_29 + VAR_12,
     FUNC_9(VAR_28->bdl.addr));


 if (!(FUNC_3(VAR_23, VAR_2, VAR_8)
    & VAR_9)) {
  FUNC_6(VAR_23, VAR_2, VAR_10,
      FUNC_9(VAR_27->posbuf.addr));
  FUNC_6(VAR_23, VAR_2, VAR_8,
      (u32)VAR_27->posbuf.addr |
      VAR_9);
 }


 FUNC_5(VAR_23, VAR_2, VAR_29,
    VAR_18,
    VAR_18);


 if (VAR_28->direction == VAR_7) {
  VAR_28->fifo_size =
   FUNC_3(VAR_23, VAR_2,
      VAR_29 +
      VAR_14);
  VAR_28->fifo_size &= 0xffff;
  VAR_28->fifo_size += 1;
 } else {
  VAR_28->fifo_size = 0;
 }

 return VAR_30;
}
