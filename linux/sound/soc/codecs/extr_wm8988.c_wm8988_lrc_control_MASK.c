
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_2,
         struct snd_kcontrol *VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_2(VAR_2->dapm);
 u16 VAR_6 = FUNC_0(VAR_5, VAR_0);


 if (FUNC_0(VAR_5, VAR_1) & 0x180)
  VAR_6 &= ~0x4;
 else
  VAR_6 |= 0x4;

 return FUNC_1(VAR_5, VAR_0, VAR_6);
}
