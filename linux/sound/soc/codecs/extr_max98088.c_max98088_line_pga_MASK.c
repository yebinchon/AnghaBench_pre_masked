
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dapm_widget {int shift; int reg; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct max98088_priv {int ina_state; int inb_state; } ;


 int VAR_0 ;




 scalar_t__ FUNC_0 (int) ;
 struct max98088_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;
 struct snd_soc_component* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_1,
                            int VAR_2, int VAR_3, u8 VAR_4)
{
       struct snd_soc_component *VAR_5 = FUNC_3(VAR_1->dapm);
       struct max98088_priv *VAR_6 = FUNC_1(VAR_5);
       u8 *VAR_7;

 if (FUNC_0(!(VAR_4 == 1 || VAR_4 == 2)))
  return -VAR_0;

       switch (VAR_3) {
       case 131:
               VAR_7 = &VAR_6->ina_state;
               break;
       case 130:
               VAR_7 = &VAR_6->inb_state;
               break;
       default:
               return -VAR_0;
       }

       switch (VAR_2) {
       case 128:
               *VAR_7 |= VAR_4;
               FUNC_2(VAR_5, VAR_1->reg,
                       (1 << VAR_1->shift), (1 << VAR_1->shift));
               break;
       case 129:
               *VAR_7 &= ~VAR_4;
               if (*VAR_7 == 0) {
                       FUNC_2(VAR_5, VAR_1->reg,
                               (1 << VAR_1->shift), 0);
               }
               break;
       default:
               return -VAR_0;
       }

       return 0;
}
