
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct s5p_nand_host {scalar_t__ ecc_base; scalar_t__ nf_base; } ;
struct TYPE_2__ {int size; } ;
struct nand_chip {TYPE_1__ ecc; struct s5p_nand_host* priv; } ;
struct mtd_info {struct nand_chip* priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_8, int VAR_9)
{
 struct nand_chip *VAR_10 = VAR_8->priv;
 struct s5p_nand_host *VAR_11 = VAR_10->priv;

 uint32_t VAR_12;


 VAR_12 = 3;
 VAR_12 |= (VAR_10->ecc.size - 1) << 16;
 FUNC_1(VAR_12, VAR_11->ecc_base + VAR_3);


 FUNC_0(VAR_11->ecc_base + VAR_4, VAR_5,
     (VAR_9 == VAR_0) ? VAR_5 : 0);


 FUNC_0(VAR_11->ecc_base + VAR_7, 0, (1 << 24) | (1 << 25));


 FUNC_0(VAR_11->nf_base + VAR_1, VAR_2, 0);


 FUNC_0(VAR_11->ecc_base +VAR_4, 0, VAR_6);
}
