
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_context {int dummy; } ;
struct TYPE_2__ {scalar_t__ cbj_en; } ;
struct rt298_priv {int is_hp_in; int regmap; TYPE_1__ pdata; int component; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int ,int ,int) ;
 struct snd_soc_dapm_context* FUNC_5 (int ) ;
 int FUNC_6 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_7 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_8 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static int FUNC_9(struct rt298_priv *VAR_9, bool *VAR_10, bool *VAR_11)
{
 struct snd_soc_dapm_context *VAR_12;
 unsigned int VAR_13, VAR_14;

 *VAR_10 = 0;
 *VAR_11 = 0;

 if (!VAR_9->component)
  return -VAR_0;

 VAR_12 = FUNC_5(VAR_9->component);

 if (VAR_9->pdata.cbj_en) {
  FUNC_2(VAR_9->regmap, VAR_4, &VAR_14);
  *VAR_10 = VAR_14 & 0x80000000;
  if (*VAR_10 == VAR_9->is_hp_in)
   return -1;
  VAR_9->is_hp_in = *VAR_10;
  if (*VAR_10) {

   FUNC_3(VAR_9->regmap,
    VAR_3, 0x200, 0x200);

   FUNC_7(VAR_12, "HV");
   FUNC_7(VAR_12, "VREF");

   FUNC_7(VAR_12, "LDO1");
   FUNC_8(VAR_12);

   FUNC_3(VAR_9->regmap,
    VAR_6, 0x1001, 0);
   FUNC_3(VAR_9->regmap,
    VAR_7, 0x4, 0x4);

   FUNC_4(VAR_9->regmap, VAR_8, 0x24);
   FUNC_0(50);

   FUNC_3(VAR_9->regmap,
    VAR_1, 0xfcc0, 0xd400);
   FUNC_0(300);
   FUNC_2(VAR_9->regmap, VAR_2, &VAR_13);

   if (0x0070 == (VAR_13 & 0x0070)) {
    *VAR_11 = 1;
   } else {
    FUNC_3(VAR_9->regmap,
     VAR_1, 0xfcc0, 0xe400);
    FUNC_0(300);
    FUNC_2(VAR_9->regmap,
     VAR_2, &VAR_13);
    if (0x0070 == (VAR_13 & 0x0070))
     *VAR_11 = 1;
    else
     *VAR_11 = 0;
   }
   FUNC_3(VAR_9->regmap,
    VAR_3, 0x200, 0x0);

  } else {
   *VAR_11 = 0;
   FUNC_4(VAR_9->regmap, VAR_8, 0x20);
   FUNC_3(VAR_9->regmap,
    VAR_1, 0x0400, 0x0000);
  }
 } else {
  FUNC_2(VAR_9->regmap, VAR_4, &VAR_14);
  *VAR_10 = VAR_14 & 0x80000000;
  FUNC_2(VAR_9->regmap, VAR_5, &VAR_14);
  *VAR_11 = VAR_14 & 0x80000000;
 }
 if (!*VAR_11) {
  FUNC_6(VAR_12, "HV");
  FUNC_6(VAR_12, "VREF");
 }
 if (!*VAR_10)
  FUNC_6(VAR_12, "LDO1");
 FUNC_8(VAR_12);

 FUNC_1("*hp = %d *mic = %d\n", *VAR_10, *VAR_11);

 return 0;
}
