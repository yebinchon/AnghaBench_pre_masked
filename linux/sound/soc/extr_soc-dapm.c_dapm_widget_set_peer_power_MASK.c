
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int power; } ;


 int FUNC_0 (struct snd_soc_dapm_widget*,char*) ;

__attribute__((used)) static void FUNC_1(struct snd_soc_dapm_widget *VAR_0,
           bool VAR_1, bool VAR_2)
{



 if (!VAR_2)
  return;



 if (VAR_1 != VAR_0->power)
  FUNC_0(VAR_0, "peer state change");
}
