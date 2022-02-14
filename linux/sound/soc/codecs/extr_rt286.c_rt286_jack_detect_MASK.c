
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_context {int dummy; } ;
struct TYPE_2__ {scalar_t__ cbj_en; } ;
struct rt286_priv {int regmap; TYPE_1__ pdata; int component; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,int ,int) ;
 struct snd_soc_dapm_context* FUNC_4 (int ) ;
 int FUNC_5 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_6 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_7 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static int FUNC_8(struct rt286_priv *VAR_7, bool *VAR_8, bool *VAR_9)
{
 struct snd_soc_dapm_context *VAR_10;
 unsigned int VAR_11, VAR_12;

 *VAR_8 = 0;
 *VAR_9 = 0;

 if (!VAR_7->component)
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_7->component);

 if (VAR_7->pdata.cbj_en) {
  FUNC_1(VAR_7->regmap, VAR_4, &VAR_12);
  *VAR_8 = VAR_12 & 0x80000000;
  if (*VAR_8) {

   FUNC_2(VAR_7->regmap,
    VAR_3, 0x200, 0x200);

   FUNC_6(VAR_10, "HV");
   FUNC_6(VAR_10, "VREF");

   FUNC_6(VAR_10, "LDO1");
   FUNC_7(VAR_10);

   FUNC_3(VAR_7->regmap, VAR_6, 0x24);
   FUNC_0(50);

   FUNC_2(VAR_7->regmap,
    VAR_1, 0xfcc0, 0xd400);
   FUNC_0(300);
   FUNC_1(VAR_7->regmap, VAR_2, &VAR_11);

   if (0x0070 == (VAR_11 & 0x0070)) {
    *VAR_9 = 1;
   } else {
    FUNC_2(VAR_7->regmap,
     VAR_1, 0xfcc0, 0xe400);
    FUNC_0(300);
    FUNC_1(VAR_7->regmap,
     VAR_2, &VAR_11);
    if (0x0070 == (VAR_11 & 0x0070))
     *VAR_9 = 1;
    else
     *VAR_9 = 0;
   }
   FUNC_2(VAR_7->regmap,
    VAR_3, 0x200, 0x0);

  } else {
   *VAR_9 = 0;
   FUNC_3(VAR_7->regmap, VAR_6, 0x20);
   FUNC_2(VAR_7->regmap,
    VAR_1, 0x0400, 0x0000);
  }
 } else {
  FUNC_1(VAR_7->regmap, VAR_4, &VAR_12);
  *VAR_8 = VAR_12 & 0x80000000;
  FUNC_1(VAR_7->regmap, VAR_5, &VAR_12);
  *VAR_9 = VAR_12 & 0x80000000;
 }
 if (!*VAR_9) {
  FUNC_5(VAR_10, "HV");
  FUNC_5(VAR_10, "VREF");
 }
 if (!*VAR_8)
  FUNC_5(VAR_10, "LDO1");
 FUNC_7(VAR_10);

 return 0;
}
