
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sw_flow_match {int dummy; } ;
struct sw_flow_key {int dummy; } ;
struct sw_flow_id {int dummy; } ;
struct sw_flow {int dummy; } ;
struct sk_buff {int sk; } ;
struct ovs_header {int dp_ifindex; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct genl_info {struct ovs_header* userhdr; struct nlattr** attrs; } ;
struct datapath {int table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct genl_info*) ;
 struct datapath* FUNC_4 (struct net*,int ) ;
 struct sk_buff* FUNC_5 (struct sw_flow*,int ,struct genl_info*,int ,int,int ) ;
 struct sw_flow* FUNC_6 (int *,struct sw_flow_match*) ;
 struct sw_flow* FUNC_7 (int *,struct sw_flow_id*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct sw_flow_match*,struct sw_flow_key*,int,int *) ;
 int FUNC_10 (struct net*,struct sw_flow_match*,struct nlattr*,int *,int) ;
 int FUNC_11 (struct sw_flow_id*,struct nlattr*,int) ;
 int FUNC_12 (struct nlattr*) ;
 int FUNC_13 () ;
 struct net* FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_8, struct genl_info *VAR_9)
{
 struct nlattr **VAR_10 = VAR_9->attrs;
 struct ovs_header *VAR_11 = VAR_9->userhdr;
 struct net *VAR_12 = FUNC_14(VAR_8->sk);
 struct sw_flow_key VAR_13;
 struct sk_buff *VAR_14;
 struct sw_flow *VAR_15;
 struct datapath *VAR_16;
 struct sw_flow_match VAR_17;
 struct sw_flow_id VAR_18;
 u32 VAR_19 = FUNC_12(VAR_10[VAR_6]);
 int VAR_20 = 0;
 bool VAR_21 = !VAR_10[VAR_4];
 bool VAR_22;

 VAR_22 = FUNC_11(&VAR_18, VAR_10[VAR_5], VAR_21);
 if (VAR_10[VAR_3]) {
  FUNC_9(&VAR_17, &VAR_13, 1, ((void*)0));
  VAR_20 = FUNC_10(VAR_12, &VAR_17, VAR_10[VAR_3], ((void*)0),
     VAR_21);
 } else if (!VAR_22) {
  FUNC_1(VAR_21,
     "Flow get message rejected, Key attribute missing.");
  VAR_20 = -VAR_0;
 }
 if (VAR_20)
  return VAR_20;

 FUNC_8();
 VAR_16 = FUNC_4(FUNC_14(VAR_8->sk), VAR_11->dp_ifindex);
 if (!VAR_16) {
  VAR_20 = -VAR_1;
  goto unlock;
 }

 if (VAR_22)
  VAR_15 = FUNC_7(&VAR_16->table, &VAR_18);
 else
  VAR_15 = FUNC_6(&VAR_16->table, &VAR_17);
 if (!VAR_15) {
  VAR_20 = -VAR_2;
  goto unlock;
 }

 VAR_14 = FUNC_5(VAR_15, VAR_11->dp_ifindex, VAR_9,
     VAR_7, 1, VAR_19);
 if (FUNC_0(VAR_14)) {
  VAR_20 = FUNC_2(VAR_14);
  goto unlock;
 }

 FUNC_13();
 return FUNC_3(VAR_14, VAR_9);
unlock:
 FUNC_13();
 return VAR_20;
}
