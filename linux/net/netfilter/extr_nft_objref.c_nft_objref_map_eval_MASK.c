
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nft_set_ext {int dummy; } ;
struct nft_set {TYPE_1__* ops; } ;
struct TYPE_5__ {int code; } ;
struct nft_regs {TYPE_2__ verdict; int * data; } ;
struct nft_pktinfo {int dummy; } ;
struct nft_objref_map {size_t sreg; struct nft_set* set; } ;
struct nft_object {TYPE_3__* ops; } ;
struct nft_expr {int dummy; } ;
struct TYPE_6__ {int (* eval ) (struct nft_object*,struct nft_regs*,struct nft_pktinfo const*) ;} ;
struct TYPE_4__ {int (* lookup ) (int ,struct nft_set const*,int *,struct nft_set_ext const**) ;} ;


 int VAR_0 ;
 struct nft_objref_map* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (struct nft_pktinfo const*) ;
 struct nft_object** FUNC_2 (struct nft_set_ext const*) ;
 int FUNC_3 (int ,struct nft_set const*,int *,struct nft_set_ext const**) ;
 int FUNC_4 (struct nft_object*,struct nft_regs*,struct nft_pktinfo const*) ;

__attribute__((used)) static void FUNC_5(const struct nft_expr *VAR_1,
    struct nft_regs *VAR_2,
    const struct nft_pktinfo *VAR_3)
{
 struct nft_objref_map *VAR_4 = FUNC_0(VAR_1);
 const struct nft_set *VAR_5 = VAR_4->set;
 const struct nft_set_ext *VAR_6;
 struct nft_object *VAR_7;
 bool VAR_8;

 VAR_8 = VAR_5->ops->lookup(FUNC_1(VAR_3), VAR_5, &VAR_2->data[VAR_4->sreg],
     &VAR_6);
 if (!VAR_8) {
  VAR_2->verdict.code = VAR_0;
  return;
 }
 VAR_7 = *FUNC_2(VAR_6);
 VAR_7->ops->eval(VAR_7, VAR_2, VAR_3);
}
