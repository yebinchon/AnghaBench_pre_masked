
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_spdif_dev {int apb_clk; int spdif_clk; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct sun4i_spdif_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0)
{
 struct sun4i_spdif_dev *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->spdif_clk);
 FUNC_0(VAR_1->apb_clk);

 return 0;
}
