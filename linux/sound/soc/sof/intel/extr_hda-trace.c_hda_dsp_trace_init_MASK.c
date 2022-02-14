
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sof_intel_hda_dev {TYPE_3__* dtrace_stream; } ;
struct snd_sof_dev {int dev; TYPE_2__* pdata; } ;
struct TYPE_4__ {int stream_tag; } ;
struct TYPE_6__ {TYPE_1__ hstream; } ;
struct TYPE_5__ {struct sof_intel_hda_dev* hw_pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 TYPE_3__* FUNC_1 (struct snd_sof_dev*,int ) ;
 int FUNC_2 (struct snd_sof_dev*,int ,int ) ;
 int FUNC_3 (struct snd_sof_dev*) ;

int FUNC_4(struct snd_sof_dev *VAR_2, u32 *VAR_3)
{
 struct sof_intel_hda_dev *VAR_4 = VAR_2->pdata->hw_pdata;
 int VAR_5;

 VAR_4->dtrace_stream = FUNC_1(VAR_2,
      VAR_1);

 if (!VAR_4->dtrace_stream) {
  FUNC_0(VAR_2->dev,
   "error: no available capture stream for DMA trace\n");
  return -VAR_0;
 }

 *VAR_3 = VAR_4->dtrace_stream->hstream.stream_tag;





 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5 < 0) {
  FUNC_0(VAR_2->dev, "error: hdac trace init failed: %x\n", VAR_5);
  FUNC_2(VAR_2, VAR_1, *VAR_3);
  VAR_4->dtrace_stream = ((void*)0);
  *VAR_3 = 0;
 }

 return VAR_5;
}
