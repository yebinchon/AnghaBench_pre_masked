
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nft_regs {int dummy; } ;
struct nft_pktinfo {int skb; } ;
struct TYPE_4__ {scalar_t__ level; } ;
struct TYPE_5__ {TYPE_1__ log; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_2__ u; } ;
struct nft_log {int prefix; TYPE_3__ loginfo; } ;
struct nft_expr {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,TYPE_3__*,char*,int ) ;
 struct nft_log* FUNC_1 (struct nft_expr const*) ;
 int FUNC_2 (struct nft_pktinfo const*) ;
 int FUNC_3 (struct nft_pktinfo const*) ;
 int FUNC_4 (struct nft_pktinfo const*) ;
 int FUNC_5 (struct nft_pktinfo const*) ;
 int FUNC_6 (struct nft_pktinfo const*) ;
 int FUNC_7 (struct nft_pktinfo const*) ;

__attribute__((used)) static void FUNC_8(const struct nft_expr *VAR_2,
    struct nft_regs *VAR_3,
    const struct nft_pktinfo *VAR_4)
{
 const struct nft_log *VAR_5 = FUNC_1(VAR_2);

 if (VAR_5->loginfo.type == VAR_1 &&
     VAR_5->loginfo.u.log.level == VAR_0) {
  FUNC_4(VAR_4);
  return;
 }

 FUNC_0(FUNC_5(VAR_4), FUNC_7(VAR_4), FUNC_2(VAR_4), VAR_4->skb,
        FUNC_3(VAR_4), FUNC_6(VAR_4), &VAR_5->loginfo, "%s",
        VAR_5->prefix);
}
