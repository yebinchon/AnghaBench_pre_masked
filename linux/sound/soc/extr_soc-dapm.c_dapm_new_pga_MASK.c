
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int num_kcontrols; } ;


 int FUNC_0 (struct snd_soc_dapm_widget*,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dapm_widget *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_kcontrols; VAR_1++) {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  if (VAR_2 < 0)
   return VAR_2;
 }

 return 0;
}
