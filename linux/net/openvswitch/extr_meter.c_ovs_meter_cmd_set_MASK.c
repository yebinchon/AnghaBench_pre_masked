
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int lock; scalar_t__ keep_stats; int sk; } ;
struct ovs_header {int dp_ifindex; } ;
struct nlattr {int dummy; } ;
struct genl_info {struct ovs_header* userhdr; struct nlattr** attrs; } ;
struct dp_meter {int lock; scalar_t__ keep_stats; int sk; } ;
struct datapath {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct datapath*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (struct nlattr**) ;
 int FUNC_7 (struct sk_buff*,struct ovs_header*) ;
 int FUNC_8 (struct sk_buff*,struct genl_info*) ;
 struct datapath* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct sk_buff*) ;
 struct sk_buff* FUNC_11 (struct datapath*,int ) ;
 int FUNC_12 (struct nlattr*) ;
 int FUNC_13 (struct sk_buff*,size_t,int ) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 () ;
 struct sk_buff* FUNC_16 (struct genl_info*,int ,struct ovs_header**) ;
 int FUNC_17 (struct sk_buff*,int ,struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 () ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int FUNC_23(struct sk_buff *VAR_3, struct genl_info *VAR_4)
{
 struct nlattr **VAR_5 = VAR_4->attrs;
 struct dp_meter *VAR_6, *VAR_7;
 struct sk_buff *VAR_8;
 struct ovs_header *VAR_9;
 struct ovs_header *VAR_10 = VAR_4->userhdr;
 struct datapath *VAR_11;
 int VAR_12;
 u32 VAR_13;
 bool VAR_14;

 if (!VAR_5[VAR_1]) {
  return -VAR_0;
 }

 VAR_6 = FUNC_6(VAR_5);
 if (FUNC_1(VAR_6))
  return FUNC_2(VAR_6);

 VAR_8 = FUNC_16(VAR_4, VAR_2,
       &VAR_9);
 if (FUNC_0(VAR_8)) {
  VAR_12 = FUNC_2(VAR_8);
  goto exit_free_meter;
 }

 FUNC_15();
 VAR_11 = FUNC_9(FUNC_20(VAR_3->sk), VAR_10->dp_ifindex);
 if (!VAR_11) {
  VAR_12 = -VAR_0;
  goto exit_unlock;
 }

 VAR_13 = FUNC_12(VAR_5[VAR_1]);


 VAR_7 = FUNC_11(VAR_11, VAR_13);
 FUNC_5(VAR_7);
 FUNC_4(VAR_11, VAR_6);
 FUNC_19();




 VAR_14 = FUNC_13(VAR_8, VAR_1, VAR_13);
 FUNC_3(VAR_14);
 if (VAR_7) {
  FUNC_21(&VAR_7->lock);
  if (VAR_7->keep_stats) {
   VAR_12 = FUNC_17(VAR_8, VAR_13,
       VAR_7);
   FUNC_3(VAR_12);
  }
  FUNC_22(&VAR_7->lock);
  FUNC_18(VAR_7);
 }

 FUNC_7(VAR_8, VAR_9);
 return FUNC_8(VAR_8, VAR_4);

exit_unlock:
 FUNC_19();
 FUNC_14(VAR_8);
exit_free_meter:
 FUNC_10(VAR_6);
 return VAR_12;
}
