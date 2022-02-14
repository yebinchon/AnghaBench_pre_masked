
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sof_intel_hda_dev {TYPE_2__* dtrace_stream; } ;
struct snd_sof_dev {int dev; TYPE_1__* pdata; } ;
struct hdac_stream {int stream_tag; } ;
struct TYPE_4__ {struct hdac_stream hstream; } ;
struct TYPE_3__ {struct sof_intel_hda_dev* hw_pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_sof_dev*,int ,int ) ;

int FUNC_2(struct snd_sof_dev *VAR_2)
{
 struct sof_intel_hda_dev *VAR_3 = VAR_2->pdata->hw_pdata;
 struct hdac_stream *VAR_4;

 if (VAR_3->dtrace_stream) {
  VAR_4 = &VAR_3->dtrace_stream->hstream;
  FUNC_1(VAR_2,
       VAR_1,
       VAR_4->stream_tag);
  VAR_3->dtrace_stream = ((void*)0);
  return 0;
 }

 FUNC_0(VAR_2->dev, "DMA trace stream is not opened!\n");
 return -VAR_0;
}
