
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_key {int ct_state; } ;
struct sk_buff {int dummy; } ;
struct ovs_conntrack_info {int commit; int family; scalar_t__ nat; struct nf_conn* ct; scalar_t__ helper; } ;
struct nf_hook_state {struct net* net; int pf; int hook; } ;
struct nf_conn {int ct_general; } ;
struct net {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct nf_conn*,struct nf_conn*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*,struct nf_hook_state*) ;
 int FUNC_3 (scalar_t__) ;
 struct nf_conn* FUNC_4 (struct sk_buff*,int*) ;
 scalar_t__ FUNC_5 (struct nf_conn*) ;
 int FUNC_6 (struct sk_buff*,struct nf_conn*,int ) ;
 int FUNC_7 (struct nf_conn*) ;
 int FUNC_8 (struct nf_conn*) ;
 int FUNC_9 (struct nf_conn*) ;
 int FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct net*,struct sw_flow_key*,struct ovs_conntrack_info const*,struct sk_buff*,struct nf_conn*,int) ;
 int FUNC_12 (struct sk_buff*,struct ovs_conntrack_info const*,struct sw_flow_key*,int,int) ;
 scalar_t__ FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct net*,struct sw_flow_key*,struct ovs_conntrack_info const*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_15(struct net *VAR_7, struct sw_flow_key *VAR_8,
      const struct ovs_conntrack_info *VAR_9,
      struct sk_buff *VAR_10)
{





 bool VAR_11 = FUNC_14(VAR_7, VAR_8, VAR_9, VAR_10);
 enum ip_conntrack_info VAR_12;
 struct nf_conn *VAR_13;

 if (!VAR_11) {
  struct nf_hook_state VAR_14 = {
   .hook = VAR_5,
   .pf = VAR_9->family,
   .net = VAR_7,
  };
  struct nf_conn *VAR_15 = VAR_9->ct;
  int VAR_16;


  if (VAR_15) {
   if (FUNC_13(VAR_10))
    FUNC_3(FUNC_13(VAR_10));
   FUNC_1(&VAR_15->ct_general);
   FUNC_6(VAR_10, VAR_15, VAR_3);
  }

  VAR_16 = FUNC_2(VAR_10, &VAR_14);
  if (VAR_16 != VAR_4)
   return -VAR_1;





  VAR_8->ct_state = 0;


  FUNC_12(VAR_10, VAR_9, VAR_8, 1, 1);
 }

 VAR_13 = FUNC_4(VAR_10, &VAR_12);
 if (VAR_13) {
  if (VAR_9->nat && !(VAR_8->ct_state & VAR_6) &&
      (FUNC_5(VAR_13) || VAR_9->commit) &&
      FUNC_11(VAR_7, VAR_8, VAR_9, VAR_10, VAR_13, VAR_12) != VAR_4) {
   return -VAR_0;
  }






  if (!FUNC_5(VAR_13) && VAR_9->commit &&
      VAR_9->helper && !FUNC_7(VAR_13)) {
   int VAR_17 = FUNC_0(VAR_13, VAR_9->ct,
           VAR_2);
   if (VAR_17)
    return VAR_17;


   if (VAR_9->nat && !FUNC_8(VAR_13)) {
    if (!FUNC_9(VAR_13))
     return -VAR_0;
   }
  }






  if ((FUNC_5(VAR_13) ? !VAR_11 : VAR_9->commit) &&
      FUNC_10(VAR_10, VAR_9->family) != VAR_4) {
   return -VAR_0;
  }
 }

 return 0;
}
