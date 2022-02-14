
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct s5p_nand_host {scalar_t__ ecc_base; scalar_t__ nf_base; } ;
struct TYPE_2__ {int bytes; } ;
struct nand_chip {TYPE_1__ ecc; struct s5p_nand_host* priv; } ;
struct mtd_info {struct nand_chip* priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,int *,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_4, const uint8_t *VAR_5, uint8_t *VAR_6)
{
 struct nand_chip *VAR_7 = VAR_4->priv;
 struct s5p_nand_host *VAR_8 = VAR_7->priv;


 FUNC_2(VAR_8->nf_base + VAR_0, 0, VAR_1);

 if (VAR_6) {

  while (!(FUNC_1(VAR_8->ecc_base + VAR_3) & (1 << 25)));
  FUNC_0(VAR_8->ecc_base + VAR_2, VAR_6, VAR_7->ecc.bytes);
 } else {

        while (!(FUNC_1(VAR_8->ecc_base + VAR_3) & (1 << 24)));
 }

 return 0;
}
