
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int reg; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ,unsigned int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;
 struct snd_soc_component* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_3,
        struct snd_kcontrol *VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = FUNC_5(VAR_3->dapm);
 unsigned int VAR_7;

 VAR_7 = (VAR_3->reg >> 20) & 0xff;

 switch (VAR_5) {
 case 129:
  FUNC_4(VAR_6,
   FUNC_0(VAR_0, VAR_7, 0),
   0x7080, 0x7000);

  if (!(FUNC_3(VAR_6, VAR_2) & 0x200)) {
   FUNC_2("NO MCLK\n");
   switch (VAR_7) {
   case 131:
    FUNC_4(VAR_6,
     VAR_1, 0x2, 0x2);
    FUNC_1(10);
    FUNC_4(VAR_6,
     VAR_1, 0x2, 0x0);
    break;
   case 130:
    FUNC_4(VAR_6,
     VAR_1, 0x4, 0x4);
    FUNC_1(10);
    FUNC_4(VAR_6,
     VAR_1, 0x4, 0x0);
    break;
   }
  }
  break;
 case 128:
  FUNC_4(VAR_6,
   FUNC_0(VAR_0, VAR_7, 0),
   0x7080, 0x7080);
  break;
 default:
  return 0;
 }

 return 0;
}
