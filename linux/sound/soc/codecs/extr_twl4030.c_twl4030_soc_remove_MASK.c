
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_priv {struct twl4030_codec_data* pdata; } ;
struct twl4030_codec_data {int hs_extmute_gpio; scalar_t__ hs_extmute; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct twl4030_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_0)
{
 struct twl4030_priv *VAR_1 = FUNC_2(VAR_0);
 struct twl4030_codec_data *VAR_2 = VAR_1->pdata;

 if (VAR_2 && VAR_2->hs_extmute && FUNC_1(VAR_2->hs_extmute_gpio))
  FUNC_0(VAR_2->hs_extmute_gpio);
}
