
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;
 struct snd_soc_component* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_2,
         struct snd_kcontrol *VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_5(VAR_2->dapm);

 if (FUNC_2(VAR_4)) {
  FUNC_4(VAR_5, VAR_0,
           FUNC_0(VAR_1),
           FUNC_0(VAR_1));





  FUNC_3(700);
 } else if (FUNC_1(VAR_4)) {
  FUNC_4(VAR_5, VAR_0,
           FUNC_0(VAR_1),
           0x0);
 }

 return 0;
}
