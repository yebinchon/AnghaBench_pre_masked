
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_key {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ovs_conntrack_info {scalar_t__ helper; scalar_t__ nf_ct_timeout; scalar_t__ force; int ct; } ;
struct nf_conn_timeout {int timeout; } ;
struct nf_conn_help {int helper; } ;
struct nf_conn {int ct_general; int ct_net; } ;
struct net {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct net*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nf_conn*,int ,int ) ;
 struct nf_conn_help* FUNC_4 (struct nf_conn*,int ) ;
 struct nf_conn* FUNC_5 (struct sk_buff*,int*) ;
 scalar_t__ FUNC_6 (struct nf_conn*) ;
 int FUNC_7 (struct sk_buff*,int *,int ) ;
 struct nf_conn_timeout* FUNC_8 (struct nf_conn*) ;
 int FUNC_9 (struct nf_conn*) ;
 int FUNC_10 (int ,int ) ;
 struct nf_conn* FUNC_11 (struct net*,struct sw_flow_key const*,struct ovs_conntrack_info const*,struct sk_buff*,int*) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static bool FUNC_15(struct net *VAR_2,
       const struct sw_flow_key *VAR_3,
       const struct ovs_conntrack_info *VAR_4,
       struct sk_buff *VAR_5)
{
 enum ip_conntrack_info VAR_6;
 struct nf_conn *VAR_7;
 bool VAR_8 = 1;

 VAR_7 = FUNC_5(VAR_5, &VAR_6);
 if (!VAR_7)
  VAR_7 = FUNC_11(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_8);

 if (VAR_7)
  FUNC_5(VAR_5, &VAR_6);
 else
  return 0;

 if (!FUNC_1(VAR_2, FUNC_14(&VAR_7->ct_net)))
  return 0;
 if (!FUNC_10(VAR_4->ct, FUNC_9(VAR_7)))
  return 0;
 if (VAR_4->helper) {
  struct nf_conn_help *VAR_9;

  VAR_9 = FUNC_4(VAR_7, VAR_1);
  if (VAR_9 && FUNC_12(VAR_9->helper) != VAR_4->helper)
   return 0;
 }
 if (VAR_4->nf_ct_timeout) {
  struct nf_conn_timeout *VAR_10;

  VAR_10 = FUNC_8(VAR_7);
  if (!VAR_10 || VAR_4->nf_ct_timeout !=
      FUNC_13(VAR_10->timeout))
   return 0;
 }

 if (VAR_4->force && FUNC_0(VAR_6) != VAR_0) {



  if (FUNC_6(VAR_7))
   FUNC_3(VAR_7, 0, 0);

  FUNC_2(&VAR_7->ct_general);
  FUNC_7(VAR_5, ((void*)0), 0);
  return 0;
 }

 return VAR_8;
}
