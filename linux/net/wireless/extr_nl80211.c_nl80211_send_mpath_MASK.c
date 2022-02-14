
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int ifindex; } ;
struct mpath_info {int filled; int path_change_count; int hop_count; int discovery_retries; int discovery_timeout; int flags; int exptime; int metric; int sn; int frame_qlen; int generation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int,int ) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ,int *) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_26, u32 VAR_27, u32 VAR_28,
    int VAR_29, struct net_device *VAR_30,
    u8 *VAR_31, u8 *VAR_32,
    struct mpath_info *VAR_33)
{
 void *VAR_34;
 struct nlattr *VAR_35;

 VAR_34 = FUNC_2(VAR_26, VAR_27, VAR_28, VAR_29, VAR_16);
 if (!VAR_34)
  return -1;

 if (FUNC_6(VAR_26, VAR_12, VAR_30->ifindex) ||
     FUNC_5(VAR_26, VAR_13, VAR_1, VAR_31) ||
     FUNC_5(VAR_26, VAR_15, VAR_1, VAR_32) ||
     FUNC_6(VAR_26, VAR_11, VAR_33->generation))
  goto nla_put_failure;

 VAR_35 = FUNC_4(VAR_26, VAR_14);
 if (!VAR_35)
  goto nla_put_failure;
 if ((VAR_33->filled & VAR_6) &&
     FUNC_6(VAR_26, VAR_21,
   VAR_33->frame_qlen))
  goto nla_put_failure;
 if (((VAR_33->filled & VAR_10) &&
      FUNC_6(VAR_26, VAR_25, VAR_33->sn)) ||
     ((VAR_33->filled & VAR_8) &&
      FUNC_6(VAR_26, VAR_23,
    VAR_33->metric)) ||
     ((VAR_33->filled & VAR_4) &&
      FUNC_6(VAR_26, VAR_19,
    VAR_33->exptime)) ||
     ((VAR_33->filled & VAR_5) &&
      FUNC_7(VAR_26, VAR_20,
   VAR_33->flags)) ||
     ((VAR_33->filled & VAR_3) &&
      FUNC_6(VAR_26, VAR_18,
    VAR_33->discovery_timeout)) ||
     ((VAR_33->filled & VAR_2) &&
      FUNC_7(VAR_26, VAR_17,
   VAR_33->discovery_retries)) ||
     ((VAR_33->filled & VAR_7) &&
      FUNC_7(VAR_26, VAR_22,
   VAR_33->hop_count)) ||
     ((VAR_33->filled & VAR_9) &&
      FUNC_6(VAR_26, VAR_24,
    VAR_33->path_change_count)))
  goto nla_put_failure;

 FUNC_3(VAR_26, VAR_35);

 FUNC_1(VAR_26, VAR_34);
 return 0;

 nla_put_failure:
 FUNC_0(VAR_26, VAR_34);
 return -VAR_0;
}
