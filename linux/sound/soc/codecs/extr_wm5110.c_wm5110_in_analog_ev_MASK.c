
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm5110_priv {int in_value; int* in_pga_cache; int in_post_pending; int in_pre_pending; } ;
struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct reg_sequence {int member_0; int member_1; int def; } ;
struct arizona_priv {struct arizona* arizona; } ;
struct arizona {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct reg_sequence*) ;



 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct reg_sequence*,int ) ;
 void* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,unsigned int) ;
 int FUNC_5 (struct snd_soc_component*,unsigned int,unsigned int,int) ;
 struct snd_soc_component* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dapm_widget *VAR_3,
          struct snd_kcontrol *VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = FUNC_6(VAR_3->dapm);
 struct arizona_priv *VAR_7 = FUNC_3(VAR_6);
 struct wm5110_priv *VAR_8 = FUNC_3(VAR_6);
 struct arizona *VAR_9 = VAR_7->arizona;
 unsigned int VAR_10, VAR_11;
 struct reg_sequence VAR_12[] = {
  { 0x80, 0x3 },
  { 0x35d, 0 },
  { 0x80, 0x0 },
 };

 VAR_10 = VAR_0 + ((VAR_3->shift ^ 0x1) * 4);
 VAR_11 = VAR_1;

 switch (VAR_5) {
 case 128:
  VAR_8->in_value |= 0x3 << ((VAR_3->shift ^ 0x1) * 2);
  VAR_8->in_pre_pending++;
  VAR_8->in_post_pending++;
  return 0;
 case 129:
  VAR_8->in_pga_cache[VAR_3->shift] = FUNC_4(VAR_6, VAR_10);

  FUNC_5(VAR_6, VAR_10, VAR_11,
        0x40 << VAR_2);

  VAR_8->in_pre_pending--;
  if (VAR_8->in_pre_pending == 0) {
   VAR_12[1].def = VAR_8->in_value;
   FUNC_2(VAR_9->regmap,
       VAR_12,
       FUNC_0(VAR_12));

   FUNC_1(55);

   VAR_8->in_value = 0;
  }

  break;
 case 130:
  FUNC_5(VAR_6, VAR_10, VAR_11,
           VAR_8->in_pga_cache[VAR_3->shift]);

  VAR_8->in_post_pending--;
  if (VAR_8->in_post_pending == 0)
   FUNC_2(VAR_9->regmap,
       VAR_12,
       FUNC_0(VAR_12));
  break;
 default:
  break;
 }

 return 0;
}
