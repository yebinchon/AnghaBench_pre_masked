
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dev; } ;
struct max98095_priv {TYPE_1__* pdata; } ;
struct TYPE_2__ {int jack_detect_delay; scalar_t__ jack_detect_pin5en; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 struct max98095_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_5)
{
 struct max98095_priv *VAR_6 = FUNC_1(VAR_5);
 int VAR_7 = 0;
 int VAR_8 = VAR_3;
 unsigned int VAR_9 = VAR_2;

 if (VAR_6->pdata->jack_detect_pin5en)
  VAR_8 |= VAR_4;

 if (VAR_6->pdata->jack_detect_delay)
  VAR_9 = VAR_6->pdata->jack_detect_delay;

 VAR_7 = FUNC_2(VAR_5, VAR_1, VAR_9);
 if (VAR_7 < 0) {
  FUNC_0(VAR_5->dev, "Failed to cfg auto detect %d\n", VAR_7);
  return VAR_7;
 }


 VAR_7 = FUNC_2(VAR_5, VAR_0, VAR_8);
 if (VAR_7 < 0) {
  FUNC_0(VAR_5->dev, "Failed to cfg auto detect %d\n", VAR_7);
  return VAR_7;
 }

 return VAR_7;
}
