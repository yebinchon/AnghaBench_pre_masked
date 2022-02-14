
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
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct ovs_header*) ;
 int FUNC_3 (struct sk_buff*,struct genl_info*) ;
 struct datapath* FUNC_4 (int ,int ) ;
 struct dp_meter* FUNC_5 (struct datapath*,int ) ;
 int FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 () ;
 struct sk_buff* FUNC_9 (struct genl_info*,int ,struct ovs_header**) ;
 int FUNC_10 (struct sk_buff*,int ,struct dp_meter*) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 struct nlattr **VAR_7 = VAR_6->attrs;
 u32 VAR_8;
 struct ovs_header *VAR_9 = VAR_6->userhdr;
 struct ovs_header *VAR_10;
 struct datapath *VAR_11;
 int VAR_12;
 struct sk_buff *VAR_13;
 struct dp_meter *VAR_14;

 if (!VAR_7[VAR_3])
  return -VAR_0;

 VAR_8 = FUNC_6(VAR_7[VAR_3]);

 VAR_13 = FUNC_9(VAR_6, VAR_4,
       &VAR_10);
 if (FUNC_0(VAR_13))
  return FUNC_1(VAR_13);

 FUNC_8();

 VAR_11 = FUNC_4(FUNC_12(VAR_5->sk), VAR_9->dp_ifindex);
 if (!VAR_11) {
  VAR_12 = -VAR_1;
  goto exit_unlock;
 }


 VAR_14 = FUNC_5(VAR_11, VAR_8);
 if (!VAR_14) {
  VAR_12 = -VAR_2;
  goto exit_unlock;
 }

 FUNC_13(&VAR_14->lock);
 VAR_12 = FUNC_10(VAR_13, VAR_8, VAR_14);
 FUNC_14(&VAR_14->lock);
 if (VAR_12)
  goto exit_unlock;

 FUNC_11();

 FUNC_2(VAR_13, VAR_10);
 return FUNC_3(VAR_13, VAR_6);

exit_unlock:
 FUNC_11();
 FUNC_7(VAR_13);
 return VAR_12;
}
