
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct xfrm_userpolicy_info {int dir; int sel; scalar_t__ index; } ;
struct xfrm_user_sec_ctx {int dummy; } ;
struct xfrm_user_polexpire {scalar_t__ hard; struct xfrm_userpolicy_info pol; } ;
struct xfrm_sec_ctx {int dummy; } ;
struct TYPE_2__ {int dead; } ;
struct xfrm_policy {TYPE_1__ walk; } ;
struct xfrm_mark {int dummy; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_pid; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct nlattr**) ;
 int FUNC_1 (struct xfrm_policy*,int ,scalar_t__,int ) ;
 struct xfrm_user_sec_ctx* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 struct xfrm_user_polexpire* FUNC_4 (struct nlmsghdr*) ;
 int FUNC_5 (struct xfrm_sec_ctx**,struct xfrm_user_sec_ctx*,int ) ;
 int FUNC_6 (struct xfrm_sec_ctx*) ;
 struct net* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct nlattr**) ;
 int FUNC_11 (struct xfrm_policy*,int,int) ;
 int FUNC_12 (struct nlattr**,struct xfrm_mark*) ;
 int FUNC_13 (struct xfrm_policy*) ;
 struct xfrm_policy* FUNC_14 (struct net*,int ,int ,int ,int ,scalar_t__,int ,int*) ;
 struct xfrm_policy* FUNC_15 (struct net*,int ,int ,int ,int ,int *,struct xfrm_sec_ctx*,int ,int*) ;
 int FUNC_16 (struct xfrm_policy*,int ) ;

__attribute__((used)) static int FUNC_17(struct sk_buff *VAR_5, struct nlmsghdr *VAR_6,
  struct nlattr **VAR_7)
{
 struct net *VAR_8 = FUNC_7(VAR_5->sk);
 struct xfrm_policy *VAR_9;
 struct xfrm_user_polexpire *VAR_10 = FUNC_4(VAR_6);
 struct xfrm_userpolicy_info *VAR_11 = &VAR_10->pol;
 u8 VAR_12 = VAR_4;
 int VAR_13 = -VAR_0;
 struct xfrm_mark VAR_14;
 u32 VAR_15 = FUNC_12(VAR_7, &VAR_14);
 u32 VAR_16 = 0;

 VAR_13 = FUNC_0(&VAR_12, VAR_7);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_9(VAR_11->dir);
 if (VAR_13)
  return VAR_13;

 if (VAR_7[VAR_2])
  VAR_16 = FUNC_3(VAR_7[VAR_2]);

 if (VAR_11->index)
  VAR_9 = FUNC_14(VAR_8, VAR_15, VAR_16, VAR_12, VAR_11->dir, VAR_11->index, 0, &VAR_13);
 else {
  struct nlattr *VAR_17 = VAR_7[VAR_3];
  struct xfrm_sec_ctx *VAR_18;

  VAR_13 = FUNC_10(VAR_7);
  if (VAR_13)
   return VAR_13;

  VAR_18 = ((void*)0);
  if (VAR_17) {
   struct xfrm_user_sec_ctx *VAR_19 = FUNC_2(VAR_17);

   VAR_13 = FUNC_5(&VAR_18, VAR_19, VAR_1);
   if (VAR_13)
    return VAR_13;
  }
  VAR_9 = FUNC_15(VAR_8, VAR_15, VAR_16, VAR_12, VAR_11->dir,
        &VAR_11->sel, VAR_18, 0, &VAR_13);
  FUNC_6(VAR_18);
 }
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 if (FUNC_8(VAR_9->walk.dead))
  goto out;

 VAR_13 = 0;
 if (VAR_10->hard) {
  FUNC_16(VAR_9, VAR_11->dir);
  FUNC_11(VAR_9, 1, 1);
 }
 FUNC_1(VAR_9, VAR_11->dir, VAR_10->hard, VAR_6->nlmsg_pid);

out:
 FUNC_13(VAR_9);
 return VAR_13;
}
