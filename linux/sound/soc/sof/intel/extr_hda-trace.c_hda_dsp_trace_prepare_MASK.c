
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sof_intel_hda_dev {struct hdac_ext_stream* dtrace_stream; } ;
struct snd_dma_buffer {int bytes; } ;
struct snd_sof_dev {int dev; struct snd_dma_buffer dmatb; TYPE_1__* pdata; } ;
struct hdac_stream {int bufsize; scalar_t__ period_bytes; } ;
struct hdac_ext_stream {struct hdac_stream hstream; } ;
struct TYPE_2__ {struct sof_intel_hda_dev* hw_pdata; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_sof_dev*,struct hdac_ext_stream*,struct snd_dma_buffer*,int *) ;

__attribute__((used)) static int FUNC_2(struct snd_sof_dev *VAR_0)
{
 struct sof_intel_hda_dev *VAR_1 = VAR_0->pdata->hw_pdata;
 struct hdac_ext_stream *VAR_2 = VAR_1->dtrace_stream;
 struct hdac_stream *VAR_3 = &VAR_2->hstream;
 struct snd_dma_buffer *VAR_4 = &VAR_0->dmatb;
 int VAR_5;

 VAR_3->period_bytes = 0;
 VAR_3->bufsize = VAR_0->dmatb.bytes;

 VAR_5 = FUNC_1(VAR_0, VAR_2, VAR_4, ((void*)0));
 if (VAR_5 < 0)
  FUNC_0(VAR_0->dev, "error: hdac prepare failed: %x\n", VAR_5);

 return VAR_5;
}
