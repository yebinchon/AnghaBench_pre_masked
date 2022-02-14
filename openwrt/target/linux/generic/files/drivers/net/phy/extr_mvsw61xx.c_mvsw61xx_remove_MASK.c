
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mvsw61xx_state {int dev; scalar_t__ registered; } ;


 int FUNC_0 (struct mvsw61xx_state*) ;
 struct mvsw61xx_state* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct platform_device *VAR_0)
{
 struct mvsw61xx_state *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->registered)
  FUNC_2(&VAR_1->dev);

 FUNC_0(VAR_1);

 return 0;
}
