
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_nand_host {int * clk; int nand_chip; } ;
struct platform_device {int dummy; } ;
struct mtd_info {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mtd_info*) ;
 struct mtd_info* FUNC_2 (int *) ;
 struct s5p_nand_host* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct s5p_nand_host *VAR_1 = FUNC_3(VAR_0);
 struct mtd_info *VAR_2 = FUNC_2(&VAR_1->nand_chip);

 FUNC_1(VAR_2);
 FUNC_0(VAR_1->clk[0]);
 FUNC_0(VAR_1->clk[1]);

 return 0;
}
