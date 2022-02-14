
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_ct_params {int zone; int ct_action; int mark; int* labels; struct nf_conn* tmpl; int * labels_mask; int mark_mask; } ;
struct tc_ct_action_net {int labels; } ;
struct tc_ct {int dummy; } ;
struct nlattr {int dummy; } ;
struct nf_conntrack_zone {int dummy; } ;
struct nf_conn {int ct_general; int status; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 int FUNC_2 (int ,int *) ;
 int VAR_17 ;
 struct tc_ct_action_net* FUNC_3 (struct net*,int ) ;
 int FUNC_4 (int *) ;
 struct nf_conn* FUNC_5 (struct net*,struct nf_conntrack_zone*,int ) ;
 int FUNC_6 (struct nf_conntrack_zone*,int,int ,int ) ;
 int FUNC_7 (struct tcf_ct_params*,struct tc_ct*,struct nlattr**,struct netlink_ext_ack*) ;
 int FUNC_8 (struct nlattr**,int*,size_t,int *,int ,int) ;

__attribute__((used)) static int FUNC_9(struct net *VAR_18,
         struct tcf_ct_params *VAR_19,
         struct tc_ct *VAR_20,
         struct nlattr **VAR_21,
         struct netlink_ext_ack *VAR_22)
{
 struct tc_ct_action_net *VAR_23 = FUNC_3(VAR_18, VAR_17);
 struct nf_conntrack_zone VAR_24;
 struct nf_conn *VAR_25;
 int VAR_26;

 VAR_19->zone = VAR_8;

 FUNC_8(VAR_21,
      &VAR_19->ct_action, VAR_9,
      ((void*)0), VAR_15,
      sizeof(VAR_19->ct_action));

 if (VAR_19->ct_action & VAR_10)
  return 0;

 VAR_26 = FUNC_7(VAR_19, VAR_20, VAR_21, VAR_22);
 if (VAR_26)
  return VAR_26;

 if (VAR_21[VAR_13]) {
  if (!FUNC_0(VAR_1)) {
   FUNC_1(VAR_22, "Conntrack mark isn't enabled.");
   return -VAR_4;
  }
  FUNC_8(VAR_21,
       &VAR_19->mark, VAR_13,
       &VAR_19->mark_mask, VAR_14,
       sizeof(VAR_19->mark));
 }

 if (VAR_21[VAR_11]) {
  if (!FUNC_0(VAR_0)) {
   FUNC_1(VAR_22, "Conntrack labels isn't enabled.");
   return -VAR_4;
  }

  if (!VAR_23->labels) {
   FUNC_1(VAR_22, "Failed to set connlabel length");
   return -VAR_4;
  }
  FUNC_8(VAR_21,
       VAR_19->labels, VAR_11,
       VAR_19->labels_mask, VAR_12,
       sizeof(VAR_19->labels));
 }

 if (VAR_21[VAR_16]) {
  if (!FUNC_0(VAR_2)) {
   FUNC_1(VAR_22, "Conntrack zones isn't enabled.");
   return -VAR_4;
  }

  FUNC_8(VAR_21,
       &VAR_19->zone, VAR_16,
       ((void*)0), VAR_15,
       sizeof(VAR_19->zone));
 }

 if (VAR_19->zone == VAR_8)
  return 0;

 FUNC_6(&VAR_24, VAR_19->zone, VAR_7, 0);
 VAR_25 = FUNC_5(VAR_18, &VAR_24, VAR_5);
 if (!VAR_25) {
  FUNC_1(VAR_22, "Failed to allocate conntrack template");
  return -VAR_3;
 }
 FUNC_2(VAR_6, &VAR_25->status);
 FUNC_4(&VAR_25->ct_general);
 VAR_19->tmpl = VAR_25;

 return 0;
}
