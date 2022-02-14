
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct tcf_proto {int dummy; } ;
struct tcf_ife_params {int flags; int eth_type; int eth_src; int eth_dst; } ;
struct tcf_ife_info {int tcf_lock; int params; int metalist; } ;
struct tcf_chain {int dummy; } ;
struct tc_ife {int flags; int action; int index; } ;
struct tc_action_net {int dummy; } ;
struct tc_action {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_15 ;
 int * VAR_16 ;
 int FUNC_4 (struct tcf_ife_params*) ;
 int FUNC_5 (struct tcf_ife_params*,int ) ;
 struct tcf_ife_params* FUNC_6 (int,int ) ;
 struct tc_action_net* FUNC_7 (struct net*,int ) ;
 void* FUNC_8 (struct nlattr*) ;
 int FUNC_9 (struct nlattr*) ;
 int FUNC_10 (struct nlattr**,int ,struct nlattr*,int *,int *) ;
 int FUNC_11 (struct tcf_ife_info*,struct nlattr**,int,int) ;
 int VAR_17 ;
 int FUNC_12 (int ,struct tcf_ife_params*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,struct tcf_proto*,struct tcf_chain**,struct netlink_ext_ack*) ;
 struct tcf_chain* FUNC_16 (struct tc_action*,int ,struct tcf_chain*) ;
 int FUNC_17 (struct tcf_chain*) ;
 int FUNC_18 (struct tc_action_net*,int *,struct tc_action**,int) ;
 int FUNC_19 (struct tc_action_net*,int ) ;
 int FUNC_20 (struct tc_action_net*,int ,struct nlattr*,struct tc_action**,int *,int,int) ;
 int FUNC_21 (struct tc_action_net*,struct tc_action*) ;
 int FUNC_22 (struct tc_action*,int) ;
 struct tcf_ife_info* FUNC_23 (struct tc_action*) ;
 int FUNC_24 (struct tcf_ife_info*,int) ;

__attribute__((used)) static int FUNC_25(struct net *VAR_18, struct nlattr *VAR_19,
   struct nlattr *VAR_20, struct tc_action **VAR_21,
   int VAR_22, int VAR_23, bool VAR_24,
   struct tcf_proto *VAR_25, struct netlink_ext_ack *VAR_26)
{
 struct tc_action_net *VAR_27 = FUNC_7(VAR_18, VAR_15);
 struct nlattr *VAR_28[VAR_9 + 1];
 struct nlattr *VAR_29[VAR_7 + 1];
 struct tcf_chain *VAR_30 = ((void*)0);
 struct tcf_ife_params *VAR_31;
 struct tcf_ife_info *VAR_32;
 u16 VAR_33 = VAR_4;
 struct tc_ife *VAR_34;
 u8 *VAR_35 = ((void*)0);
 u8 *VAR_36 = ((void*)0);
 bool VAR_37 = 0;
 int VAR_38 = 0;
 u32 VAR_39;
 int VAR_40;

 if (!VAR_19) {
  FUNC_1(VAR_26, "IFE requires attributes to be passed");
  return -VAR_2;
 }

 VAR_40 = FUNC_10(VAR_28, VAR_9, VAR_19, VAR_16,
       ((void*)0));
 if (VAR_40 < 0)
  return VAR_40;

 if (!VAR_28[VAR_11])
  return -VAR_2;

 VAR_34 = FUNC_8(VAR_28[VAR_11]);





 if (VAR_34->flags & ~VAR_6)
  return -VAR_2;

 VAR_31 = FUNC_6(sizeof(*VAR_31), VAR_5);
 if (!VAR_31)
  return -VAR_3;

 VAR_39 = VAR_34->index;
 VAR_40 = FUNC_18(VAR_27, &VAR_39, VAR_21, VAR_23);
 if (VAR_40 < 0) {
  FUNC_4(VAR_31);
  return VAR_40;
 }
 VAR_37 = VAR_40;
 if (VAR_37 && VAR_23) {
  FUNC_4(VAR_31);
  return 0;
 }

 if (!VAR_37) {
  VAR_38 = FUNC_20(VAR_27, VAR_39, VAR_20, VAR_21, &VAR_14,
         VAR_23, 1);
  if (VAR_38) {
   FUNC_19(VAR_27, VAR_39);
   FUNC_4(VAR_31);
   return VAR_38;
  }
  VAR_38 = VAR_0;
 } else if (!VAR_22) {
  FUNC_22(*VAR_21, VAR_23);
  FUNC_4(VAR_31);
  return -VAR_1;
 }

 VAR_32 = FUNC_23(*VAR_21);
 VAR_40 = FUNC_15(VAR_34->action, VAR_25, &VAR_30, VAR_26);
 if (VAR_40 < 0)
  goto release_idr;

 VAR_31->flags = VAR_34->flags;

 if (VAR_34->flags & VAR_6) {
  if (VAR_28[VAR_13])
   VAR_33 = FUNC_9(VAR_28[VAR_13]);
  if (VAR_28[VAR_8])
   VAR_35 = FUNC_8(VAR_28[VAR_8]);
  if (VAR_28[VAR_12])
   VAR_36 = FUNC_8(VAR_28[VAR_12]);
 }

 if (VAR_34->flags & VAR_6) {
  if (VAR_35)
   FUNC_3(VAR_31->eth_dst, VAR_35);
  else
   FUNC_2(VAR_31->eth_dst);

  if (VAR_36)
   FUNC_3(VAR_31->eth_src, VAR_36);
  else
   FUNC_2(VAR_31->eth_src);

  VAR_31->eth_type = VAR_33;
 }


 if (VAR_38 == VAR_0)
  FUNC_0(&VAR_32->metalist);

 if (VAR_28[VAR_10]) {
  VAR_40 = FUNC_10(VAR_29, VAR_7,
        VAR_28[VAR_10], ((void*)0),
        ((void*)0));
  if (VAR_40)
   goto metadata_parse_err;
  VAR_40 = FUNC_11(VAR_32, VAR_29, VAR_37, VAR_24);
  if (VAR_40)
   goto metadata_parse_err;

 } else {





  VAR_40 = FUNC_24(VAR_32, VAR_37);
  if (VAR_40)
   goto metadata_parse_err;
 }

 if (VAR_37)
  FUNC_13(&VAR_32->tcf_lock);

 VAR_30 = FUNC_16(*VAR_21, VAR_34->action, VAR_30);
 FUNC_12(VAR_32->params, VAR_31, 1);

 if (VAR_37)
  FUNC_14(&VAR_32->tcf_lock);
 if (VAR_30)
  FUNC_17(VAR_30);
 if (VAR_31)
  FUNC_5(VAR_31, VAR_17);

 if (VAR_38 == VAR_0)
  FUNC_21(VAR_27, *VAR_21);

 return VAR_38;
metadata_parse_err:
 if (VAR_30)
  FUNC_17(VAR_30);
release_idr:
 FUNC_4(VAR_31);
 FUNC_22(*VAR_21, VAR_23);
 return VAR_40;
}
