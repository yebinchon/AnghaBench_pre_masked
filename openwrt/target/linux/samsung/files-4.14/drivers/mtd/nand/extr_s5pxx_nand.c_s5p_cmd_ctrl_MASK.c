
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_nand_host {scalar_t__ nf_base; } ;
struct nand_chip {struct s5p_nand_host* priv; } ;
struct mtd_info {struct nand_chip* priv; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mtd_info *VAR_4, int VAR_5, unsigned int VAR_6)
{
 struct nand_chip *VAR_7 = VAR_4->priv;
 struct s5p_nand_host *VAR_8 = VAR_7->priv;

 if (VAR_5 == VAR_1)
  return;

 if (VAR_6 & VAR_0)
  FUNC_0(VAR_5, VAR_8->nf_base + VAR_3);
 else
  FUNC_0(VAR_5, VAR_8->nf_base + VAR_2);
}
