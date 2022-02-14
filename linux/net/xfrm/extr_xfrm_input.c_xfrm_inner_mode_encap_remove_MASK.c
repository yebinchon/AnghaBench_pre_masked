
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state {int dummy; } ;
struct xfrm_mode {int encap; int family; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;


 int FUNC_1 (struct xfrm_state*,struct sk_buff*) ;
 int FUNC_2 (struct xfrm_state*,struct sk_buff*) ;
 int FUNC_3 (struct xfrm_state*,struct sk_buff*) ;
 int FUNC_4 (struct xfrm_state*,struct sk_buff*) ;

__attribute__((used)) static int
FUNC_5(struct xfrm_state *VAR_3,
        const struct xfrm_mode *VAR_4,
        struct sk_buff *VAR_5)
{
 switch (VAR_4->encap) {
 case 129:
  if (VAR_4->family == VAR_0)
   return FUNC_1(VAR_3, VAR_5);
  if (VAR_4->family == VAR_1)
   return FUNC_3(VAR_3, VAR_5);
  break;
 case 128:
  if (VAR_4->family == VAR_0)
   return FUNC_2(VAR_3, VAR_5);
  if (VAR_4->family == VAR_1)
   return FUNC_4(VAR_3, VAR_5);
  break;
 }

 FUNC_0(1);
 return -VAR_2;
}
