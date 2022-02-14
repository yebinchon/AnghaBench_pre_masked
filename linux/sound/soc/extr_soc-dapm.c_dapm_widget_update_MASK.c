
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_widget_list {unsigned int num_widgets; struct snd_soc_dapm_widget** widgets; } ;
struct snd_soc_dapm_widget {int (* event ) (struct snd_soc_dapm_widget*,int ,int) ;int event_flags; int name; TYPE_1__* dapm; } ;
struct snd_soc_dapm_update {int kcontrol; int val2; int mask2; int reg2; scalar_t__ has_second_set; int val; int mask; int reg; } ;
struct snd_soc_card {struct snd_soc_dapm_update* update; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_soc_dapm_widget_list* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_4 (struct snd_soc_dapm_widget*,int ,int) ;
 int FUNC_5 (struct snd_soc_dapm_widget*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct snd_soc_card *VAR_2)
{
 struct snd_soc_dapm_update *VAR_3 = VAR_2->update;
 struct snd_soc_dapm_widget_list *VAR_4;
 struct snd_soc_dapm_widget *VAR_5 = ((void*)0);
 unsigned int VAR_6;
 int VAR_7;

 if (!VAR_3 || !FUNC_1(VAR_3->kcontrol))
  return;

 VAR_4 = FUNC_0(VAR_3->kcontrol);

 for (VAR_6 = 0; VAR_6 < VAR_4->num_widgets; VAR_6++) {
  VAR_5 = VAR_4->widgets[VAR_6];

  if (VAR_5->event && (VAR_5->event_flags & VAR_1)) {
   VAR_7 = VAR_5->event(VAR_5, VAR_3->kcontrol, VAR_1);
   if (VAR_7 != 0)
    FUNC_2(VAR_5->dapm->dev, "ASoC: %s DAPM pre-event failed: %d\n",
        VAR_5->name, VAR_7);
  }
 }

 if (!VAR_5)
  return;

 VAR_7 = FUNC_3(VAR_5->dapm, VAR_3->reg, VAR_3->mask,
  VAR_3->val);
 if (VAR_7 < 0)
  FUNC_2(VAR_5->dapm->dev, "ASoC: %s DAPM update failed: %d\n",
   VAR_5->name, VAR_7);

 if (VAR_3->has_second_set) {
  VAR_7 = FUNC_3(VAR_5->dapm, VAR_3->reg2,
        VAR_3->mask2, VAR_3->val2);
  if (VAR_7 < 0)
   FUNC_2(VAR_5->dapm->dev,
    "ASoC: %s DAPM update failed: %d\n",
    VAR_5->name, VAR_7);
 }

 for (VAR_6 = 0; VAR_6 < VAR_4->num_widgets; VAR_6++) {
  VAR_5 = VAR_4->widgets[VAR_6];

  if (VAR_5->event && (VAR_5->event_flags & VAR_0)) {
   VAR_7 = VAR_5->event(VAR_5, VAR_3->kcontrol, VAR_0);
   if (VAR_7 != 0)
    FUNC_2(VAR_5->dapm->dev, "ASoC: %s DAPM post-event failed: %d\n",
        VAR_5->name, VAR_7);
  }
 }
}
