
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct tcf_sample {int truncate; int tcf_lock; void* trunc_size; int psample_group; void* psample_group_num; void* rate; } ;
struct tcf_proto {int dummy; } ;
struct tcf_chain {int dummy; } ;
struct tc_sample {int action; void* index; } ;
struct tc_action_net {int dummy; } ;
struct tc_action {int dummy; } ;
struct psample_group {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 struct tc_action_net* FUNC_2 (struct net*,int ) ;
 struct tc_sample* FUNC_3 (struct nlattr*) ;
 void* FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 struct psample_group* FUNC_6 (struct net*,void*) ;
 int FUNC_7 (struct psample_group*) ;
 int FUNC_8 (int ,struct psample_group*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,struct tcf_proto*,struct tcf_chain**,struct netlink_ext_ack*) ;
 struct tcf_chain* FUNC_12 (struct tc_action*,int ,struct tcf_chain*) ;
 int FUNC_13 (struct tcf_chain*) ;
 int FUNC_14 (struct tc_action_net*,void**,struct tc_action**,int) ;
 int FUNC_15 (struct tc_action_net*,void*) ;
 int FUNC_16 (struct tc_action_net*,void*,struct nlattr*,struct tc_action**,int *,int,int) ;
 int FUNC_17 (struct tc_action_net*,struct tc_action*) ;
 int FUNC_18 (struct tc_action*,int) ;
 struct tcf_sample* FUNC_19 (struct tc_action*) ;

__attribute__((used)) static int FUNC_20(struct net *VAR_12, struct nlattr *VAR_13,
      struct nlattr *VAR_14, struct tc_action **VAR_15, int VAR_16,
      int VAR_17, bool VAR_18, struct tcf_proto *VAR_19,
      struct netlink_ext_ack *VAR_20)
{
 struct tc_action_net *VAR_21 = FUNC_2(VAR_12, VAR_10);
 struct nlattr *VAR_22[VAR_4 + 1];
 struct psample_group *VAR_23;
 u32 VAR_24, VAR_25, VAR_26;
 struct tcf_chain *VAR_27 = ((void*)0);
 struct tc_sample *VAR_28;
 struct tcf_sample *VAR_29;
 bool VAR_30 = 0;
 int VAR_31, VAR_32;

 if (!VAR_13)
  return -VAR_2;
 VAR_31 = FUNC_5(VAR_22, VAR_4, VAR_13,
       VAR_11, ((void*)0));
 if (VAR_31 < 0)
  return VAR_31;
 if (!VAR_22[VAR_5] || !VAR_22[VAR_7] ||
     !VAR_22[VAR_6])
  return -VAR_2;

 VAR_28 = FUNC_3(VAR_22[VAR_5]);
 VAR_26 = VAR_28->index;
 VAR_32 = FUNC_14(VAR_21, &VAR_26, VAR_15, VAR_17);
 if (VAR_32 < 0)
  return VAR_32;
 VAR_30 = VAR_32;
 if (VAR_30 && VAR_17)
  return 0;

 if (!VAR_30) {
  VAR_31 = FUNC_16(VAR_21, VAR_26, VAR_14, VAR_15,
         &VAR_9, VAR_17, 1);
  if (VAR_31) {
   FUNC_15(VAR_21, VAR_26);
   return VAR_31;
  }
  VAR_31 = VAR_0;
 } else if (!VAR_16) {
  FUNC_18(*VAR_15, VAR_17);
  return -VAR_1;
 }
 VAR_32 = FUNC_11(VAR_28->action, VAR_19, &VAR_27, VAR_20);
 if (VAR_32 < 0)
  goto release_idr;

 VAR_25 = FUNC_4(VAR_22[VAR_7]);
 if (!VAR_25) {
  FUNC_0(VAR_20, "invalid sample rate");
  VAR_32 = -VAR_2;
  goto put_chain;
 }
 VAR_24 = FUNC_4(VAR_22[VAR_6]);
 VAR_23 = FUNC_6(VAR_12, VAR_24);
 if (!VAR_23) {
  VAR_32 = -VAR_3;
  goto put_chain;
 }

 VAR_29 = FUNC_19(*VAR_15);

 FUNC_9(&VAR_29->tcf_lock);
 VAR_27 = FUNC_12(*VAR_15, VAR_28->action, VAR_27);
 VAR_29->rate = VAR_25;
 VAR_29->psample_group_num = VAR_24;
 FUNC_8(VAR_29->psample_group, VAR_23,
      FUNC_1(&VAR_29->tcf_lock));

 if (VAR_22[VAR_8]) {
  VAR_29->truncate = 1;
  VAR_29->trunc_size = FUNC_4(VAR_22[VAR_8]);
 }
 FUNC_10(&VAR_29->tcf_lock);

 if (VAR_23)
  FUNC_7(VAR_23);
 if (VAR_27)
  FUNC_13(VAR_27);

 if (VAR_31 == VAR_0)
  FUNC_17(VAR_21, *VAR_15);
 return VAR_31;
put_chain:
 if (VAR_27)
  FUNC_13(VAR_27);
release_idr:
 FUNC_18(*VAR_15, VAR_17);
 return VAR_32;
}
