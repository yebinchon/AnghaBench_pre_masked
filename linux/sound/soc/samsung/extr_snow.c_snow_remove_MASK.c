
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai_link {TYPE_2__* codecs; TYPE_1__* cpus; } ;
struct snow_priv {int clk_i2s_bus; struct snd_soc_dai_link dai_link; } ;
struct platform_device {int dummy; } ;
struct TYPE_4__ {int of_node; } ;
struct TYPE_3__ {int of_node; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct snow_priv* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct snd_soc_dai_link*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct snow_priv *VAR_1 = FUNC_2(VAR_0);
 struct snd_soc_dai_link *VAR_2 = &VAR_1->dai_link;

 FUNC_1(VAR_2->cpus->of_node);
 FUNC_1(VAR_2->codecs->of_node);
 FUNC_3(VAR_2);

 FUNC_0(VAR_1->clk_i2s_bus);

 return 0;
}
