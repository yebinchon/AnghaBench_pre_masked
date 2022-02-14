
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int sk; } ;
struct ovs_header {int dp_ifindex; } ;
struct nlattr {int dummy; } ;
struct genl_info {struct ovs_header* userhdr; struct nlattr** attrs; } ;
struct dp_meter {int lock; } ;
struct datapath {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct dp_meter*) ;
 int FUNC_4 (struct sk_buff*,struct ovs_header*) ;
 int FUNC_5 (struct sk_buff*,struct genl_info*) ;
 struct datapath* FUNC_6 (int ,int ) ;
 struct dp_meter* FUNC_7 (struct datapath*,int ) ;
 int FUNC_8 (struct nlattr*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 () ;
 struct sk_buff* FUNC_11 (struct genl_info*,int ,struct ovs_header**) ;
 int FUNC_12 (struct sk_buff*,int ,struct dp_meter*) ;
 int FUNC_13 (struct dp_meter*) ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct sk_buff *VAR_4, struct genl_info *VAR_5)
{
 struct nlattr **VAR_6 = VAR_5->attrs;
 u32 VAR_7;
 struct ovs_header *VAR_8 = VAR_5->userhdr;
 struct ovs_header *VAR_9;
 struct datapath *VAR_10;
 int VAR_11;
 struct sk_buff *VAR_12;
 struct dp_meter *VAR_13;

 if (!VAR_6[VAR_2])
  return -VAR_0;
 VAR_7 = FUNC_8(VAR_6[VAR_2]);

 VAR_12 = FUNC_11(VAR_5, VAR_3,
       &VAR_9);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 FUNC_10();

 VAR_10 = FUNC_6(FUNC_15(VAR_4->sk), VAR_8->dp_ifindex);
 if (!VAR_10) {
  VAR_11 = -VAR_1;
  goto exit_unlock;
 }

 VAR_13 = FUNC_7(VAR_10, VAR_7);
 if (VAR_13) {
  FUNC_16(&VAR_13->lock);
  VAR_11 = FUNC_12(VAR_12, VAR_7, VAR_13);
  FUNC_2(VAR_11);
  FUNC_17(&VAR_13->lock);
  FUNC_3(VAR_13);
 }
 FUNC_14();
 FUNC_13(VAR_13);
 FUNC_4(VAR_12, VAR_9);
 return FUNC_5(VAR_12, VAR_5);

exit_unlock:
 FUNC_14();
 FUNC_9(VAR_12);
 return VAR_11;
}
