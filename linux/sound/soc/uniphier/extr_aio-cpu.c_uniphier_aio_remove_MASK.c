
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_aio_chip {int clk; int rst; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct uniphier_aio_chip* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct platform_device *VAR_0)
{
 struct uniphier_aio_chip *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->rst);
 FUNC_0(VAR_1->clk);

 return 0;
}
