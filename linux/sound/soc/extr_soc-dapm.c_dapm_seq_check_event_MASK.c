
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_widget {int new_power; int (* event ) (struct snd_soc_dapm_widget*,int *,int) ;int event_flags; int name; TYPE_1__* dapm; } ;
struct snd_soc_card {int pop_time; } ;
struct TYPE_2__ {int dev; } ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ,char*,char const*,int ,int) ;
 int FUNC_2 (int ,int ,char*,int ,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct snd_soc_dapm_widget*,int *,int) ;
 int FUNC_5 (struct snd_soc_dapm_widget*,int) ;
 int FUNC_6 (struct snd_soc_dapm_widget*,int) ;

__attribute__((used)) static void FUNC_7(struct snd_soc_card *VAR_0,
     struct snd_soc_dapm_widget *VAR_1, int VAR_2)
{
 const char *VAR_3;
 int VAR_4, VAR_5;

 switch (VAR_2) {
 case 130:
  VAR_3 = "PRE_PMU";
  VAR_4 = 1;
  break;
 case 132:
  VAR_3 = "POST_PMU";
  VAR_4 = 1;
  break;
 case 131:
  VAR_3 = "PRE_PMD";
  VAR_4 = 0;
  break;
 case 133:
  VAR_3 = "POST_PMD";
  VAR_4 = 0;
  break;
 case 128:
  VAR_3 = "WILL_PMU";
  VAR_4 = 1;
  break;
 case 129:
  VAR_3 = "WILL_PMD";
  VAR_4 = 0;
  break;
 default:
  FUNC_0(1, "Unknown event %d\n", VAR_2);
  return;
 }

 if (VAR_1->new_power != VAR_4)
  return;

 if (VAR_1->event && (VAR_1->event_flags & VAR_2)) {
  FUNC_2(VAR_1->dapm->dev, VAR_0->pop_time, "pop test : %s %s\n",
   VAR_1->name, VAR_3);
  FUNC_3(VAR_1->dapm);
  FUNC_6(VAR_1, VAR_2);
  VAR_5 = VAR_1->event(VAR_1, ((void*)0), VAR_2);
  FUNC_5(VAR_1, VAR_2);
  if (VAR_5 < 0)
   FUNC_1(VAR_1->dapm->dev, "ASoC: %s: %s event failed: %d\n",
          VAR_3, VAR_1->name, VAR_5);
 }
}
