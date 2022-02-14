
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_i2s_out {int clk_sys; int clk_ref; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct img_i2s_out* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct img_i2s_out *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->clk_sys);
 if (VAR_2) {
  FUNC_2(VAR_0, "clk_enable failed: %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_1->clk_ref);
 if (VAR_2) {
  FUNC_2(VAR_0, "clk_enable failed: %d\n", VAR_2);
  FUNC_0(VAR_1->clk_sys);
  return VAR_2;
 }

 return 0;
}
