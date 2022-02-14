
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nft_set_ext {int dummy; } ;
struct nft_set {int flags; int dlen; TYPE_1__* ops; } ;
struct TYPE_4__ {int code; } ;
struct nft_regs {int * data; TYPE_2__ verdict; } ;
struct nft_pktinfo {int dummy; } ;
struct nft_lookup {size_t sreg; int invert; size_t dreg; struct nft_set* set; } ;
struct nft_expr {int dummy; } ;
struct TYPE_3__ {int (* lookup ) (int ,struct nft_set const*,int *,struct nft_set_ext const**) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 struct nft_lookup* FUNC_1 (struct nft_expr const*) ;
 int FUNC_2 (struct nft_pktinfo const*) ;
 int FUNC_3 (struct nft_set_ext const*) ;
 int FUNC_4 (int ,struct nft_set const*,int *,struct nft_set_ext const**) ;

void FUNC_5(const struct nft_expr *VAR_2,
       struct nft_regs *VAR_3,
       const struct nft_pktinfo *VAR_4)
{
 const struct nft_lookup *VAR_5 = FUNC_1(VAR_2);
 const struct nft_set *VAR_6 = VAR_5->set;
 const struct nft_set_ext *VAR_7;
 bool VAR_8;

 VAR_8 = VAR_6->ops->lookup(FUNC_2(VAR_4), VAR_6, &VAR_3->data[VAR_5->sreg],
     &VAR_7) ^ VAR_5->invert;
 if (!VAR_8) {
  VAR_3->verdict.code = VAR_0;
  return;
 }

 if (VAR_6->flags & VAR_1)
  FUNC_0(&VAR_3->data[VAR_5->dreg],
         FUNC_3(VAR_7), VAR_6->dlen);

}
