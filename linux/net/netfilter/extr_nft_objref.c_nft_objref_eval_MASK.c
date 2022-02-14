
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_regs {int dummy; } ;
struct nft_pktinfo {int dummy; } ;
struct nft_object {TYPE_1__* ops; } ;
struct nft_expr {int dummy; } ;
struct TYPE_2__ {int (* eval ) (struct nft_object*,struct nft_regs*,struct nft_pktinfo const*) ;} ;


 struct nft_object* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (struct nft_object*,struct nft_regs*,struct nft_pktinfo const*) ;

__attribute__((used)) static void FUNC_2(const struct nft_expr *VAR_0,
       struct nft_regs *VAR_1,
       const struct nft_pktinfo *VAR_2)
{
 struct nft_object *VAR_3 = FUNC_0(VAR_0);

 VAR_3->ops->eval(VAR_3, VAR_1, VAR_2);
}
