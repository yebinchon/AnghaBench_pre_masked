
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;
struct ar934x_nfc {int nand_chip; } ;


 struct mtd_info* FUNC_0 (int *) ;

__attribute__((used)) static struct mtd_info *FUNC_1(struct ar934x_nfc *VAR_0)
{
 return FUNC_0(&VAR_0->nand_chip);
}
