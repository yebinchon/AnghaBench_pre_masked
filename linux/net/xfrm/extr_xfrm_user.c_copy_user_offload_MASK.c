
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_user_offload {int flags; int ifindex; } ;
struct xfrm_state_offload {int flags; TYPE_1__* dev; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfrm_user_offload*,int ,int) ;
 struct xfrm_user_offload* FUNC_1 (struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct xfrm_state_offload *VAR_2, struct sk_buff *VAR_3)
{
 struct xfrm_user_offload *VAR_4;
 struct nlattr *VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_1, sizeof(*VAR_4));
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_5);
 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->ifindex = VAR_2->dev->ifindex;
 VAR_4->flags = VAR_2->flags;

 return 0;
}
