
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_dev {int dtrace_is_enabled; int dtrace_draining; int trace_sleep; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_sof_dev*) ;
 int FUNC_2 (struct snd_sof_dev*,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct snd_sof_dev *VAR_1)
{
 int VAR_2;

 if (!VAR_1->dtrace_is_enabled)
  return;

 VAR_2 = FUNC_2(VAR_1, VAR_0);
 if (VAR_2 < 0)
  FUNC_0(VAR_1->dev,
   "error: snd_sof_dma_trace_trigger: stop: %d\n", VAR_2);

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 < 0)
  FUNC_0(VAR_1->dev,
   "error: fail in snd_sof_dma_trace_release %d\n", VAR_2);

 VAR_1->dtrace_is_enabled = 0;
 VAR_1->dtrace_draining = 1;
 FUNC_3(&VAR_1->trace_sleep);
}
