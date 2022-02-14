
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_sof_widget {TYPE_2__* widget; struct snd_sof_dev* sdev; } ;
struct snd_sof_dev {int dev; } ;
struct TYPE_3__ {struct snd_sof_widget* private; } ;
struct snd_soc_dapm_widget {int name; TYPE_1__ dobj; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int name; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct snd_sof_widget*,int ) ;
 int FUNC_3 (struct snd_sof_widget*,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_4,
      struct snd_kcontrol *VAR_5, int VAR_6)
{
 struct snd_sof_widget *VAR_7 = VAR_4->dobj.private;
 struct snd_sof_dev *VAR_8;
 int VAR_9 = 0;

 if (!VAR_7)
  return 0;

 VAR_8 = VAR_7->sdev;

 FUNC_0(VAR_8->dev, "received event %d for widget %s\n",
  VAR_6, VAR_4->name);


 switch (VAR_6) {
 case 128:

  VAR_9 = FUNC_2(VAR_7, VAR_0);
  if (VAR_9 < 0) {
   FUNC_1(VAR_8->dev,
    "error: failed to set pcm params for widget %s\n",
    VAR_7->widget->name);
   break;
  }


  VAR_9 = FUNC_3(VAR_7, VAR_2);
  if (VAR_9 < 0)
   FUNC_1(VAR_8->dev,
    "error: failed to trigger widget %s\n",
    VAR_7->widget->name);
  break;
 case 129:

  VAR_9 = FUNC_3(VAR_7, VAR_3);
  if (VAR_9 < 0)
   FUNC_1(VAR_8->dev,
    "error: failed to trigger widget %s\n",
    VAR_7->widget->name);


  VAR_9 = FUNC_3(VAR_7, VAR_1);
  if (VAR_9 < 0)
   FUNC_1(VAR_8->dev,
    "error: failed to trigger widget %s\n",
    VAR_7->widget->name);
  break;
 default:
  break;
 }

 return VAR_9;
}
