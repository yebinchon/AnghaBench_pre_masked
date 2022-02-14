
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int * dai_link; } ;
struct odroid_priv {int clk_i2s_bus; int sclk_i2s; TYPE_1__ card; } ;


 int FUNC_0 (int ) ;
 struct odroid_priv* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct odroid_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->card.dai_link[1]);
 FUNC_0(VAR_1->sclk_i2s);
 FUNC_0(VAR_1->clk_i2s_bus);

 return 0;
}
