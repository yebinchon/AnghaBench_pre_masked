
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sof_intel_hda_dev {scalar_t__ no_ipc_position; } ;
struct sof_intel_dsp_bdl {int dummy; } ;
struct snd_sof_dev {int dev; TYPE_1__* pdata; } ;
struct snd_dma_buffer {int dummy; } ;
struct TYPE_4__ {scalar_t__ area; } ;
struct hdac_stream {int period_bytes; int bufsize; int no_period_wakeup; scalar_t__ frags; TYPE_2__ bdl; } ;
struct TYPE_3__ {struct sof_intel_hda_dev* hw_pdata; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_sof_dev*,struct snd_dma_buffer*,struct hdac_stream*,struct sof_intel_dsp_bdl**,int,int,int) ;

int FUNC_2(struct snd_sof_dev *VAR_0,
        struct snd_dma_buffer *VAR_1,
        struct hdac_stream *VAR_2)
{
 struct sof_intel_hda_dev *VAR_3 = VAR_0->pdata->hw_pdata;
 struct sof_intel_dsp_bdl *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10;

 VAR_7 = VAR_2->period_bytes;
 FUNC_0(VAR_0->dev, "period_bytes:0x%x\n", VAR_7);
 if (!VAR_7)
  VAR_7 = VAR_2->bufsize;

 VAR_8 = VAR_2->bufsize / VAR_7;

 FUNC_0(VAR_0->dev, "periods:%d\n", VAR_8);

 VAR_9 = VAR_2->bufsize % VAR_7;
 if (VAR_9)
  VAR_8++;


 VAR_4 = (struct sof_intel_dsp_bdl *)VAR_2->bdl.area;
 VAR_6 = 0;
 VAR_2->frags = 0;





 VAR_10 = VAR_3->no_ipc_position ?
       !VAR_2->no_period_wakeup : 0;

 for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
  if (VAR_5 == (VAR_8 - 1) && VAR_9)

   VAR_6 = FUNC_1(VAR_0, VAR_1,
      VAR_2, &VAR_4, VAR_6,
      VAR_9, 0);
  else
   VAR_6 = FUNC_1(VAR_0, VAR_1,
      VAR_2, &VAR_4, VAR_6,
      VAR_7, VAR_10);
 }

 return VAR_6;
}
