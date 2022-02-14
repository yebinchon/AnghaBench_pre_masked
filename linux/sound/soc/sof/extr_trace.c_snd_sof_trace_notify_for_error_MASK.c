
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_dev {int dtrace_error; int trace_sleep; int dev; scalar_t__ dtrace_is_enabled; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct snd_sof_dev *VAR_0)
{
 if (VAR_0->dtrace_is_enabled) {
  FUNC_0(VAR_0->dev, "error: waking up any trace sleepers\n");
  VAR_0->dtrace_error = 1;
  FUNC_1(&VAR_0->trace_sleep);
 }
}
