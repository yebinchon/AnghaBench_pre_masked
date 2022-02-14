
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sof_intel_dsp_bdl {void* ioc; void* size; void* addr_h; void* addr_l; } ;
struct snd_sof_dev {int dev; } ;
struct snd_dma_buffer {int dummy; } ;
struct hdac_stream {scalar_t__ frags; } ;
struct hdac_bus {scalar_t__ align_bdle_4k; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,scalar_t__,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct snd_dma_buffer*,int) ;
 int FUNC_5 (struct snd_dma_buffer*,int,int) ;
 struct hdac_bus* FUNC_6 (struct snd_sof_dev*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct snd_sof_dev *VAR_2,
     struct snd_dma_buffer *VAR_3,
     struct hdac_stream *VAR_4,
     struct sof_intel_dsp_bdl **VAR_5,
     int VAR_6, int VAR_7, int VAR_8)
{
 struct hdac_bus *VAR_9 = FUNC_6(VAR_2);
 struct sof_intel_dsp_bdl *VAR_10 = *VAR_5;

 while (VAR_7 > 0) {
  dma_addr_t VAR_11;
  int VAR_12;

  if (VAR_4->frags >= VAR_1) {
   FUNC_1(VAR_2->dev, "error: stream frags exceeded\n");
   return -VAR_0;
  }

  VAR_11 = FUNC_4(VAR_3, VAR_6);

  VAR_10->addr_l = FUNC_0(FUNC_3(VAR_11));
  VAR_10->addr_h = FUNC_0(FUNC_7(VAR_11));

  VAR_12 = FUNC_5(VAR_3, VAR_6, VAR_7);

  if (VAR_9->align_bdle_4k) {
   u32 VAR_13 = 0x1000 - (VAR_6 & 0xfff);

   if (VAR_12 > VAR_13)
    VAR_12 = VAR_13;
  }
  VAR_10->size = FUNC_0(VAR_12);

  VAR_7 -= VAR_12;
  VAR_10->ioc = (VAR_7 || !VAR_8) ? 0 : FUNC_0(0x01);
  VAR_10++;
  VAR_4->frags++;
  VAR_6 += VAR_12;

  FUNC_2(VAR_2->dev, "bdl, frags:%d, chunk size:0x%x;\n",
    VAR_4->frags, VAR_12);
 }

 *VAR_5 = VAR_10;
 return VAR_6;
}
