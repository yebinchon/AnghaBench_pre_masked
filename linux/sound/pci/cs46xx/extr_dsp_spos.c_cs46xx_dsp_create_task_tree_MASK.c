
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_cs46xx {TYPE_1__* card; } ;
struct dsp_task_descriptor {int * data; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct snd_cs46xx*,int *,int ,int) ;
 struct dsp_task_descriptor* FUNC_1 (struct snd_cs46xx*,char*,int ,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static struct dsp_task_descriptor *
FUNC_3 (struct snd_cs46xx *VAR_0, char * VAR_1, u32 * VAR_2,
        u32 VAR_3, int VAR_4)
{
 struct dsp_task_descriptor * VAR_5;

 VAR_5 = FUNC_1 (VAR_0,VAR_1,VAR_3,VAR_4);
 if (VAR_5) {
  VAR_5->data = VAR_2;
  FUNC_0(VAR_0,VAR_2,VAR_3,VAR_4);
 } else {
  FUNC_2(VAR_0->card->dev, "dsp_spos: failed to map TASK\n");
 }

 return VAR_5;
}
