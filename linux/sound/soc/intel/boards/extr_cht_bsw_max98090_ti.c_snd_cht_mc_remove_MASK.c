
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int dummy; } ;
struct platform_device {int dummy; } ;
struct cht_mc_private {int quirks; int mclk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct snd_soc_card* FUNC_1 (struct platform_device*) ;
 struct cht_mc_private* FUNC_2 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct snd_soc_card *VAR_2 = FUNC_1(VAR_1);
 struct cht_mc_private *VAR_3 = FUNC_2(VAR_2);

 if (VAR_3->quirks & VAR_0)
  FUNC_0(VAR_3->mclk);

 return 0;
}
