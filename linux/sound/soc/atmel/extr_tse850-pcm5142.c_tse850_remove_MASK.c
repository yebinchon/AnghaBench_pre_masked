
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tse850_priv {int ana; } ;
struct snd_soc_card {int dummy; } ;
struct platform_device {int dummy; } ;


 struct snd_soc_card* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ) ;
 struct tse850_priv* FUNC_2 (struct snd_soc_card*) ;
 int FUNC_3 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct snd_soc_card *VAR_1 = FUNC_0(VAR_0);
 struct tse850_priv *VAR_2 = FUNC_2(VAR_1);

 FUNC_3(VAR_1);
 FUNC_1(VAR_2->ana);

 return 0;
}
