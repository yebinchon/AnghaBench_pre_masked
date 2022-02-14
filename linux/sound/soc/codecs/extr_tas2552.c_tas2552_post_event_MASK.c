
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_5,
         struct snd_kcontrol *VAR_6, int VAR_7)
{
 struct snd_soc_component *VAR_8 = FUNC_2(VAR_5->dapm);

 switch (VAR_7) {
 case 128:
  FUNC_1(VAR_8, VAR_3, 0xc0);
  FUNC_0(VAR_8, VAR_2, (1 << 5),
        (1 << 5));
  FUNC_0(VAR_8, VAR_1, 1, 0);
  FUNC_0(VAR_8, VAR_0, VAR_4, 0);
  break;
 case 129:
  FUNC_0(VAR_8, VAR_0, VAR_4,
        VAR_4);
  FUNC_0(VAR_8, VAR_1, 1, 1);
  FUNC_0(VAR_8, VAR_2, (1 << 5), 0);
  FUNC_1(VAR_8, VAR_3, 0xbe);
  break;
 }
 return 0;
}
