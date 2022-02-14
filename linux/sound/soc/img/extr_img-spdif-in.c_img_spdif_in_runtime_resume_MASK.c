
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_spdif_in {int clk_sys; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*) ;
 struct img_spdif_in* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct img_spdif_in *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->clk_sys);
 if (VAR_2) {
  FUNC_1(VAR_0, "Unable to enable sys clock\n");
  return VAR_2;
 }

 return 0;
}
