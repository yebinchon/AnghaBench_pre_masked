
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai_link {TYPE_1__* cpus; } ;
struct snd_soc_card {int dummy; } ;
struct platform_device {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {scalar_t__ of_node; } ;


 struct snd_soc_dai_link VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device_node*,char*) ;
 struct snd_soc_card* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct snd_soc_card *VAR_2 = FUNC_2(VAR_1);
 struct snd_soc_dai_link *VAR_3 = &VAR_0;
 int VAR_4;

 VAR_4 = FUNC_1((struct device_node *)VAR_3->cpus->of_node, "ssc");

 FUNC_3(VAR_2);
 FUNC_0(VAR_4);

 return 0;
}
