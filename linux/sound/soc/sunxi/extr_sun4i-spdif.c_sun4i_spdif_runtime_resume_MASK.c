
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_spdif_dev {int spdif_clk; int apb_clk; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct sun4i_spdif_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct sun4i_spdif_dev *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->spdif_clk);
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_1(VAR_1->apb_clk);
 if (VAR_2)
  FUNC_0(VAR_1->spdif_clk);

 return VAR_2;
}
