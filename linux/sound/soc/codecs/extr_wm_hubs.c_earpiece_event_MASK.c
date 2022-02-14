
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;




 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;
 struct snd_soc_component* FUNC_3 (int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_2,
     struct snd_kcontrol *VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_3(VAR_2->dapm);
 u16 VAR_6 = FUNC_1(VAR_5, VAR_0) & ~VAR_1;

 switch (VAR_4) {
 case 128:
  VAR_6 |= VAR_1;
  FUNC_2(VAR_5, VAR_0, VAR_6);
  FUNC_4(50);
  break;

 case 129:
  FUNC_2(VAR_5, VAR_0, VAR_6);
  break;

 default:
  FUNC_0(1, "Invalid event %d\n", VAR_4);
  break;
 }

 return 0;
}
