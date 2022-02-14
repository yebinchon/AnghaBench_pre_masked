
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dctcp_enabled; int dctcp_ab_ecn; int dctcp_ab_tot; int dctcp_alpha; scalar_t__ dctcp_ce_state; } ;
union tcp_cc_info {TYPE_1__ dctcp; } ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct tcp_sock {int mss_cache; int delivered_ce; int delivered; } ;
struct sock {int dummy; } ;
struct dctcp {int old_delivered_ce; int old_delivered; int dctcp_alpha; scalar_t__ ce_state; } ;
struct TYPE_4__ {int * icsk_ca_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct sock*) ;
 struct dctcp* FUNC_1 (struct sock*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static size_t FUNC_4(struct sock *VAR_3, u32 VAR_4, int *VAR_5,
        union tcp_cc_info *VAR_6)
{
 const struct dctcp *VAR_7 = FUNC_1(VAR_3);
 const struct tcp_sock *VAR_8 = FUNC_3(VAR_3);




 if (VAR_4 & (1 << (VAR_0 - 1)) ||
     VAR_4 & (1 << (VAR_1 - 1))) {
  FUNC_2(&VAR_6->dctcp, 0, sizeof(VAR_6->dctcp));
  if (FUNC_0(VAR_3)->icsk_ca_ops != &VAR_2) {
   VAR_6->dctcp.dctcp_enabled = 1;
   VAR_6->dctcp.dctcp_ce_state = (u16) VAR_7->ce_state;
   VAR_6->dctcp.dctcp_alpha = VAR_7->dctcp_alpha;
   VAR_6->dctcp.dctcp_ab_ecn = VAR_8->mss_cache *
         (VAR_8->delivered_ce - VAR_7->old_delivered_ce);
   VAR_6->dctcp.dctcp_ab_tot = VAR_8->mss_cache *
         (VAR_8->delivered - VAR_7->old_delivered);
  }

  *VAR_5 = VAR_0;
  return sizeof(VAR_6->dctcp);
 }
 return 0;
}
