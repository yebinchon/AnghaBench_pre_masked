
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb4xx_spi {int master; int ahb_clk; int base; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct rb4xx_spi* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct rb4xx_spi *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(VAR_1->base);
 FUNC_0(VAR_1->ahb_clk);
 FUNC_1(VAR_1->ahb_clk);
 FUNC_4(VAR_0, ((void*)0));
 FUNC_5(VAR_1->master);

 return 0;
}
