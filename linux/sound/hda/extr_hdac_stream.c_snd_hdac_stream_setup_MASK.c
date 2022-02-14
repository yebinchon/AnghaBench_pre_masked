
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
struct snd_pcm_runtime {int period_size; int rate; } ;
struct TYPE_5__ {scalar_t__ addr; } ;
struct hdac_stream {unsigned int stream_tag; unsigned int bufsize; int period_wallclk; int delay_negative_threshold; scalar_t__ fifo_size; TYPE_2__ bdl; scalar_t__ frags; scalar_t__ format_val; TYPE_1__* substream; struct hdac_bus* bus; } ;
struct TYPE_6__ {scalar_t__ addr; } ;
struct hdac_bus {TYPE_3__ posbuf; scalar_t__ use_posbuf; int snoop; } ;
struct TYPE_4__ {struct snd_pcm_runtime* runtime; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct snd_pcm_runtime*,int) ;
 unsigned int FUNC_1 (struct hdac_bus*,int ) ;
 int FUNC_2 (struct hdac_bus*,int ,unsigned int) ;
 int FUNC_3 (struct hdac_stream*) ;
 unsigned int FUNC_4 (struct hdac_stream*,int ) ;
 scalar_t__ FUNC_5 (struct hdac_stream*,int ) ;
 int FUNC_6 (struct hdac_stream*,int ,int ,int ) ;
 int FUNC_7 (struct hdac_stream*,int ,unsigned int) ;
 int FUNC_8 (struct hdac_stream*,int ,scalar_t__) ;
 unsigned int FUNC_9 (scalar_t__) ;

int FUNC_10(struct hdac_stream *VAR_13)
{
 struct hdac_bus *VAR_14 = VAR_13->bus;
 struct snd_pcm_runtime *VAR_15;
 unsigned int VAR_16;

 if (VAR_13->substream)
  VAR_15 = VAR_13->substream->runtime;
 else
  VAR_15 = ((void*)0);

 FUNC_3(VAR_13);

 VAR_16 = FUNC_4(VAR_13, VAR_5);
 VAR_16 = (VAR_16 & ~VAR_6) |
  (VAR_13->stream_tag << VAR_7);
 if (!VAR_14->snoop)
  VAR_16 |= VAR_8;
 FUNC_7(VAR_13, VAR_5, VAR_16);


 FUNC_7(VAR_13, VAR_4, VAR_13->bufsize);



 FUNC_8(VAR_13, VAR_10, VAR_13->format_val);


 FUNC_8(VAR_13, VAR_12, VAR_13->frags - 1);



 FUNC_7(VAR_13, VAR_2, (u32)VAR_13->bdl.addr);

 FUNC_7(VAR_13, VAR_3,
          FUNC_9(VAR_13->bdl.addr));


 if (VAR_14->use_posbuf && VAR_14->posbuf.addr) {
  if (!(FUNC_1(VAR_14, VAR_1) & VAR_0))
   FUNC_2(VAR_14, VAR_1,
    (u32)VAR_14->posbuf.addr | VAR_0);
 }


 FUNC_6(VAR_13, VAR_5, 0, VAR_11);

 VAR_13->fifo_size = FUNC_5(VAR_13, VAR_9) + 1;





 if (VAR_15 && VAR_15->period_size > 64)
  VAR_13->delay_negative_threshold =
   -FUNC_0(VAR_15, 64);
 else
  VAR_13->delay_negative_threshold = 0;


 if (VAR_15)
  VAR_13->period_wallclk = (((VAR_15->period_size * 24000) /
        VAR_15->rate) * 1000);

 return 0;
}
