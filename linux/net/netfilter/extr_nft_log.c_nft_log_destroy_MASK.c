
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ level; } ;
struct TYPE_4__ {TYPE_1__ log; } ;
struct nf_loginfo {int type; TYPE_2__ u; } ;
struct nft_log {scalar_t__ prefix; struct nf_loginfo loginfo; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int family; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 struct nft_log* FUNC_2 (struct nft_expr const*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_3(const struct nft_ctx *VAR_2,
       const struct nft_expr *VAR_3)
{
 struct nft_log *VAR_4 = FUNC_2(VAR_3);
 struct nf_loginfo *VAR_5 = &VAR_4->loginfo;

 if (VAR_4->prefix != VAR_1)
  FUNC_0(VAR_4->prefix);

 if (VAR_5->u.log.level == VAR_0)
  return;

 FUNC_1(VAR_2->family, VAR_5->type);
}
