
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tegra_sgtl5000 {int util_data; } ;
struct snd_soc_card {int dummy; } ;
struct platform_device {int dummy; } ;
struct TYPE_8__ {TYPE_2__* codecs; TYPE_1__* platforms; TYPE_3__* cpus; } ;
struct TYPE_7__ {int * of_node; } ;
struct TYPE_6__ {int * of_node; } ;
struct TYPE_5__ {int * of_node; } ;


 int FUNC_0 (int *) ;
 struct snd_soc_card* FUNC_1 (struct platform_device*) ;
 struct tegra_sgtl5000* FUNC_2 (struct snd_soc_card*) ;
 int FUNC_3 (struct snd_soc_card*) ;
 int FUNC_4 (int *) ;
 TYPE_4__ VAR_0 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct snd_soc_card *VAR_2 = FUNC_1(VAR_1);
 struct tegra_sgtl5000 *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_3(VAR_2);

 FUNC_4(&VAR_3->util_data);

 FUNC_0(VAR_0.cpus->of_node);
 VAR_0.cpus->of_node = ((void*)0);
 VAR_0.platforms->of_node = ((void*)0);
 FUNC_0(VAR_0.codecs->of_node);
 VAR_0.codecs->of_node = ((void*)0);

 return VAR_4;
}
