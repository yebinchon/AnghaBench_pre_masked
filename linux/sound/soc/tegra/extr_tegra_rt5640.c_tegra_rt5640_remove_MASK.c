
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_rt5640 {int util_data; } ;
struct snd_soc_card {int dummy; } ;
struct platform_device {int dummy; } ;


 struct snd_soc_card* FUNC_0 (struct platform_device*) ;
 struct tegra_rt5640* FUNC_1 (struct snd_soc_card*) ;
 int FUNC_2 (struct snd_soc_card*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct snd_soc_card *VAR_1 = FUNC_0(VAR_0);
 struct tegra_rt5640 *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(VAR_1);

 FUNC_3(&VAR_2->util_data);

 return 0;
}
