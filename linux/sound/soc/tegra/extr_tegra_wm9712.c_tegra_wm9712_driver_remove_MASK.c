
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_wm9712 {int codec; int util_data; } ;
struct snd_soc_card {int dummy; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct snd_soc_card* FUNC_1 (struct platform_device*) ;
 struct tegra_wm9712* FUNC_2 (struct snd_soc_card*) ;
 int FUNC_3 (struct snd_soc_card*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct snd_soc_card *VAR_1 = FUNC_1(VAR_0);
 struct tegra_wm9712 *VAR_2 = FUNC_2(VAR_1);

 FUNC_3(VAR_1);

 FUNC_4(&VAR_2->util_data);

 FUNC_0(VAR_2->codec);

 return 0;
}
