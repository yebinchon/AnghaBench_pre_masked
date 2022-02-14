
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int encap; int family; } ;
struct xfrm_state {TYPE_1__ outer_mode; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;




 int FUNC_1 (struct xfrm_state*,struct sk_buff*) ;
 int FUNC_2 (struct xfrm_state*,struct sk_buff*) ;
 int FUNC_3 (struct xfrm_state*,struct sk_buff*) ;
 int FUNC_4 (struct xfrm_state*,struct sk_buff*) ;
 int FUNC_5 (struct xfrm_state*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct xfrm_state *VAR_3, struct sk_buff *VAR_4)
{
 switch (VAR_3->outer_mode.encap) {
 case 131:
 case 128:
  if (VAR_3->outer_mode.family == VAR_0)
   return FUNC_1(VAR_3, VAR_4);
  if (VAR_3->outer_mode.family == VAR_1)
   return FUNC_3(VAR_3, VAR_4);
  break;
 case 129:
  if (VAR_3->outer_mode.family == VAR_0)
   return FUNC_2(VAR_3, VAR_4);
  if (VAR_3->outer_mode.family == VAR_1)
   return FUNC_5(VAR_3, VAR_4);
  break;
 case 130:
  if (VAR_3->outer_mode.family == VAR_1)
   return FUNC_4(VAR_3, VAR_4);
  FUNC_0(1);
  break;
 default:
  FUNC_0(1);
  break;
 }

 return -VAR_2;
}
