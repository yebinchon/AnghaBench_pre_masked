
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb91x_nand_info {int gpio_rdy; } ;
struct mtd_info {int dummy; } ;


 int FUNC_0 (int ) ;
 struct rb91x_nand_info* FUNC_1 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0)
{
 struct rb91x_nand_info *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1->gpio_rdy);
}
