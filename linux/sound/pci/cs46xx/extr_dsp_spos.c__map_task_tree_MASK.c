
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct snd_cs46xx {TYPE_1__* card; struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_task_descriptor {size_t index; void* size; void* address; int task_name; } ;
struct dsp_spos_instance {int ntask; struct dsp_task_descriptor* tasks; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_cs46xx*,char*,void*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static struct dsp_task_descriptor *
FUNC_3 (struct snd_cs46xx *VAR_2, char * VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct dsp_spos_instance * VAR_6 = VAR_2->dsp_spos_instance;
 struct dsp_task_descriptor * VAR_7 = ((void*)0);

 if (VAR_6->ntask == VAR_0 - 1) {
  FUNC_1(VAR_2->card->dev,
   "dsp_spos: got no place for other TASK\n");
  return ((void*)0);
 }

 if (VAR_3)
  FUNC_2(VAR_6->tasks[VAR_6->ntask].task_name, VAR_3);
 else
  FUNC_2(VAR_6->tasks[VAR_6->ntask].task_name, "(NULL)");
 VAR_6->tasks[VAR_6->ntask].address = VAR_4;
 VAR_6->tasks[VAR_6->ntask].size = VAR_5;


 VAR_6->tasks[VAR_6->ntask].index = VAR_6->ntask;
 VAR_7 = (VAR_6->tasks + VAR_6->ntask);
 VAR_6->ntask++;

 if (VAR_3)
  FUNC_0 (VAR_2,VAR_3,VAR_4,VAR_1);
 return VAR_7;
}
