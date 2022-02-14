
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_codec {int clk_apb; scalar_t__ rst; } ;
struct snd_soc_card {int dummy; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct snd_soc_card* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (scalar_t__) ;
 struct sun4i_codec* FUNC_3 (struct snd_soc_card*) ;
 int FUNC_4 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct snd_soc_card *VAR_1 = FUNC_1(VAR_0);
 struct sun4i_codec *VAR_2 = FUNC_3(VAR_1);

 FUNC_4(VAR_1);
 if (VAR_2->rst)
  FUNC_2(VAR_2->rst);
 FUNC_0(VAR_2->clk_apb);

 return 0;
}
