
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_cluster_match_info {int node_mask; int flags; } ;
struct xt_action_param {struct xt_cluster_match_info* matchinfo; } ;
struct sk_buff {scalar_t__ pkt_type; } ;
struct nf_conn {struct nf_conn const* master; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct nf_conn* FUNC_0 (struct sk_buff const*,int*) ;
 unsigned long FUNC_1 (struct nf_conn const*,struct xt_cluster_match_info const*) ;
 int FUNC_2 (struct sk_buff const*,int ) ;
 int FUNC_3 (struct xt_action_param*) ;

__attribute__((used)) static bool
FUNC_4(const struct sk_buff *VAR_3, struct xt_action_param *VAR_4)
{
 struct sk_buff *VAR_5 = (struct sk_buff *)VAR_3;
 const struct xt_cluster_match_info *VAR_6 = VAR_4->matchinfo;
 const struct nf_conn *VAR_7;
 enum ip_conntrack_info VAR_8;
 unsigned long VAR_9;
 if (!FUNC_2(VAR_3, FUNC_3(VAR_4)) &&
     VAR_3->pkt_type == VAR_1) {
      VAR_5->pkt_type = VAR_0;
 }

 VAR_7 = FUNC_0(VAR_3, &VAR_8);
 if (VAR_7 == ((void*)0))
  return 0;

 if (VAR_7->master)
  VAR_9 = FUNC_1(VAR_7->master, VAR_6);
 else
  VAR_9 = FUNC_1(VAR_7, VAR_6);

 return !!((1 << VAR_9) & VAR_6->node_mask) ^
        !!(VAR_6->flags & VAR_2);
}
