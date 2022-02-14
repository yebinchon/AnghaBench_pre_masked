
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 struct snd_soc_component* FUNC_2 (int ) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_3,
   struct snd_kcontrol *VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = FUNC_2(VAR_3->dapm);
 u8 VAR_7, VAR_8;






 VAR_7 = FUNC_3(VAR_6, VAR_1);
 VAR_8 = FUNC_3(VAR_6, VAR_2);
 if (FUNC_0(VAR_5)) {
  VAR_7 |= VAR_0;
  VAR_8 |= VAR_0;
 } else {
  VAR_7 &= ~VAR_0;
  VAR_8 &= ~VAR_0;
 }
 FUNC_4(VAR_6, VAR_1, VAR_7);
 FUNC_4(VAR_6, VAR_2, VAR_8);

 FUNC_1(1);
 return 0;
}
