
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct imx_ssi {int flags; int clk; int fiq_init; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct platform_device*) ;
 struct imx_ssi* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct imx_ssi *VAR_3 = FUNC_2(VAR_2);

 if (!VAR_3->fiq_init)
  FUNC_1(VAR_2);

 FUNC_4(&VAR_2->dev);

 if (VAR_3->flags & VAR_0)
  VAR_1 = ((void*)0);

 FUNC_0(VAR_3->clk);
 FUNC_3(((void*)0));

 return 0;
}
