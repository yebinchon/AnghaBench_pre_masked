
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_regs {int dummy; } ;
struct nft_pktinfo {int dummy; } ;
struct nft_expr {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* eval ) (struct nft_expr const*,struct nft_regs*,struct nft_pktinfo*) ;} ;


 int FUNC_0 (unsigned long,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct nft_expr const*,struct nft_regs*,struct nft_pktinfo*) ;

__attribute__((used)) static void FUNC_2(const struct nft_expr *VAR_10,
          struct nft_regs *VAR_11,
          struct nft_pktinfo *VAR_12)
{
 VAR_10->ops->eval(VAR_10, VAR_11, VAR_12);
}
