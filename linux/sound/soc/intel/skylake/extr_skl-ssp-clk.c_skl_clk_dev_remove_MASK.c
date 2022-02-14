
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_clk_data {int parent; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 struct skl_clk_data* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct skl_clk_data*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct skl_clk_data *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 FUNC_2(VAR_2);
 FUNC_1(VAR_2->parent, VAR_0);

 return 0;
}
