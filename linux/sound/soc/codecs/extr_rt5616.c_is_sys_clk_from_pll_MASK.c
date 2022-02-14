
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_3,
          struct snd_soc_dapm_widget *VAR_4)
{
 unsigned int VAR_5;

 VAR_5 = FUNC_0(FUNC_1(VAR_3->dapm), VAR_0);
 VAR_5 &= VAR_1;
 if (VAR_5 == VAR_2)
  return 1;
 else
  return 0;
}
