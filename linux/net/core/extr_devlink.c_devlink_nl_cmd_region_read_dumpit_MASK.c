
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct sk_buff {int len; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {int * args; TYPE_1__* nlh; TYPE_5__* skb; int extack; } ;
struct devlink_region {int dummy; } ;
struct devlink {int lock; } ;
struct TYPE_9__ {int sk; } ;
struct TYPE_8__ {int portid; } ;
struct TYPE_7__ {int policy; scalar_t__ hdrsize; } ;
struct TYPE_6__ {int nlmsg_seq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct devlink*) ;
 TYPE_4__ FUNC_1 (TYPE_5__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct devlink*) ;
 struct devlink* FUNC_3 (int ,struct nlattr**) ;
 int VAR_14 ;
 TYPE_2__ VAR_15 ;
 int FUNC_4 (struct sk_buff*,struct devlink*) ;
 int FUNC_5 (struct sk_buff*,struct devlink*,struct devlink_region*,struct nlattr**,scalar_t__,scalar_t__,int,scalar_t__*) ;
 struct devlink_region* FUNC_6 (struct devlink*,char const*) ;
 int FUNC_7 (struct sk_buff*,void*) ;
 int FUNC_8 (struct sk_buff*,void*) ;
 void* FUNC_9 (struct sk_buff*,int ,int ,TYPE_2__*,int,int ) ;
 int FUNC_10 (struct nlattr**) ;
 struct nlattr** FUNC_11 (scalar_t__,int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 char* FUNC_14 (struct nlattr*) ;
 scalar_t__ FUNC_15 (struct nlattr*) ;
 int FUNC_16 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_17 (struct sk_buff*,int ) ;
 int FUNC_18 (struct sk_buff*,size_t,char const*) ;
 int FUNC_19 (TYPE_1__*,scalar_t__,struct nlattr**,scalar_t__,int ,int ) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static int FUNC_21(struct sk_buff *VAR_16,
          struct netlink_callback *VAR_17)
{
 u64 VAR_18, VAR_19, VAR_20 = 0;
 struct devlink_region *VAR_21;
 struct nlattr *VAR_22;
 const char *VAR_23;
 struct devlink *VAR_24;
 struct nlattr **VAR_25;
 bool VAR_26 = 1;
 void *VAR_27;
 int VAR_28;

 VAR_19 = *((u64 *)&VAR_17->args[0]);

 VAR_25 = FUNC_11(VAR_0 + 1, sizeof(*VAR_25), VAR_11);
 if (!VAR_25)
  return -VAR_9;

 VAR_28 = FUNC_19(VAR_17->nlh,
         VAR_10 + VAR_15.hdrsize,
         VAR_25, VAR_0,
         VAR_15.policy, VAR_17->extack);
 if (VAR_28)
  goto out_free;

 FUNC_12(&VAR_14);
 VAR_24 = FUNC_3(FUNC_20(VAR_17->skb->sk), VAR_25);
 if (FUNC_0(VAR_24)) {
  VAR_28 = FUNC_2(VAR_24);
  goto out_dev;
 }

 FUNC_12(&VAR_24->lock);

 if (!VAR_25[VAR_4] ||
     !VAR_25[VAR_5]) {
  VAR_28 = -VAR_7;
  goto out_unlock;
 }

 VAR_23 = FUNC_14(VAR_25[VAR_4]);
 VAR_21 = FUNC_6(VAR_24, VAR_23);
 if (!VAR_21) {
  VAR_28 = -VAR_7;
  goto out_unlock;
 }

 VAR_27 = FUNC_9(VAR_16, FUNC_1(VAR_17->skb).portid, VAR_17->nlh->nlmsg_seq,
     &VAR_15, VAR_12 | VAR_13,
     VAR_6);
 if (!VAR_27) {
  VAR_28 = -VAR_8;
  goto out_unlock;
 }

 VAR_28 = FUNC_4(VAR_16, VAR_24);
 if (VAR_28)
  goto nla_put_failure;

 VAR_28 = FUNC_18(VAR_16, VAR_4, VAR_23);
 if (VAR_28)
  goto nla_put_failure;

 VAR_22 = FUNC_17(VAR_16, VAR_1);
 if (!VAR_22) {
  VAR_28 = -VAR_8;
  goto nla_put_failure;
 }

 if (VAR_25[VAR_2] &&
     VAR_25[VAR_3]) {
  if (!VAR_19)
   VAR_19 =
    FUNC_15(VAR_25[VAR_2]);

  VAR_20 = FUNC_15(VAR_25[VAR_2]);
  VAR_20 += FUNC_15(VAR_25[VAR_3]);
  VAR_26 = 0;
 }

 VAR_28 = FUNC_5(VAR_16, VAR_24,
         VAR_21, VAR_25,
         VAR_19,
         VAR_20, VAR_26,
         &VAR_18);

 if (VAR_28 && VAR_28 != -VAR_8)
  goto nla_put_failure;


 if (VAR_18 == VAR_19) {
  VAR_28 = -VAR_7;
  goto nla_put_failure;
 }

 *((u64 *)&VAR_17->args[0]) = VAR_18;

 FUNC_16(VAR_16, VAR_22);
 FUNC_8(VAR_16, VAR_27);
 FUNC_13(&VAR_24->lock);
 FUNC_13(&VAR_14);
 FUNC_10(VAR_25);

 return VAR_16->len;

nla_put_failure:
 FUNC_7(VAR_16, VAR_27);
out_unlock:
 FUNC_13(&VAR_24->lock);
out_dev:
 FUNC_13(&VAR_14);
out_free:
 FUNC_10(VAR_25);
 return VAR_28;
}
