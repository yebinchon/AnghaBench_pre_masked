
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_i2s_in {int clk_sys; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct img_i2s_in* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0)
{
 struct img_i2s_in *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->clk_sys);

 return 0;
}
