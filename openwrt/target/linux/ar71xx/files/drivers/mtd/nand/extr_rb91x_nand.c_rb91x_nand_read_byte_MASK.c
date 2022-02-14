
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rb91x_nand_info {int dummy; } ;
struct mtd_info {int dummy; } ;


 struct rb91x_nand_info* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (struct rb91x_nand_info*,int*,int) ;

__attribute__((used)) static u8 FUNC_2(struct mtd_info *VAR_0)
{
 struct rb91x_nand_info *VAR_1 = FUNC_0(VAR_0);
 u8 VAR_2 = 0xff;

 FUNC_1(VAR_1, &VAR_2, 1);

 return VAR_2;
}
