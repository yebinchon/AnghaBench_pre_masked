
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirf_usp {int clk; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct sirf_usp* FUNC_2 (struct device*) ;
 int FUNC_3 (struct sirf_usp*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct sirf_usp *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->clk);
 if (VAR_2) {
  FUNC_1(VAR_0, "clk_enable failed: %d\n", VAR_2);
  return VAR_2;
 }
 FUNC_3(VAR_1);
 return 0;
}
