
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_policy {int dummy; } ;
struct sock {int * sk_policy; } ;


 int VAR_0 ;
 struct xfrm_policy* FUNC_0 (struct xfrm_policy const*,int) ;
 int FUNC_1 (int ,struct xfrm_policy*) ;
 struct xfrm_policy* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct sock *VAR_1, const struct sock *VAR_2)
{
 const struct xfrm_policy *VAR_3;
 struct xfrm_policy *VAR_4;
 int VAR_5, VAR_6 = 0;

 FUNC_3();
 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  VAR_3 = FUNC_2(VAR_2->sk_policy[VAR_5]);
  if (VAR_3) {
   VAR_4 = FUNC_0(VAR_3, VAR_5);
   if (FUNC_5(!VAR_4)) {
    VAR_6 = -VAR_0;
    break;
   }
   FUNC_1(VAR_1->sk_policy[VAR_5], VAR_4);
  }
 }
 FUNC_4();
 return VAR_6;
}
