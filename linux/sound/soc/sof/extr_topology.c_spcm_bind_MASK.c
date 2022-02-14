
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_sof_widget {int comp_id; } ;
struct TYPE_5__ {TYPE_1__* caps; } ;
struct snd_sof_pcm {TYPE_3__* stream; TYPE_2__ pcm; } ;
struct snd_sof_dev {int dev; } ;
struct TYPE_6__ {int comp_id; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct snd_sof_widget* FUNC_1 (struct snd_sof_dev*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_sof_dev *VAR_1, struct snd_sof_pcm *VAR_2,
       int VAR_3)
{
 struct snd_sof_widget *VAR_4;

 VAR_4 = FUNC_1(VAR_1,
       VAR_2->pcm.caps[VAR_3].name,
       VAR_3);
 if (!VAR_4) {
  FUNC_0(VAR_1->dev, "can't find host comp to bind pcm\n");
  return -VAR_0;
 }

 VAR_2->stream[VAR_3].comp_id = VAR_4->comp_id;

 return 0;
}
