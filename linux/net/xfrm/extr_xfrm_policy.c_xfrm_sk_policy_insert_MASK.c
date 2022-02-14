
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int add_time; } ;
struct xfrm_policy {scalar_t__ type; int index; TYPE_1__ curlft; } ;
struct sock {int * sk_policy; } ;
struct TYPE_4__ {int xfrm_policy_lock; } ;
struct net {TYPE_2__ xfrm; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct xfrm_policy*) ;
 struct xfrm_policy* FUNC_3 (int ,int ) ;
 struct net* FUNC_4 (struct sock*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct net*,scalar_t__,int ) ;
 int FUNC_8 (struct xfrm_policy*) ;
 int FUNC_9 (struct xfrm_policy*,struct xfrm_policy*) ;
 int FUNC_10 (struct xfrm_policy*,int) ;
 int FUNC_11 (struct xfrm_policy*,int) ;

int FUNC_12(struct sock *VAR_3, int VAR_4, struct xfrm_policy *VAR_5)
{
 struct net *VAR_6 = FUNC_4(VAR_3);
 struct xfrm_policy *VAR_7;






 FUNC_5(&VAR_6->xfrm.xfrm_policy_lock);
 VAR_7 = FUNC_3(VAR_3->sk_policy[VAR_4],
    FUNC_1(&VAR_6->xfrm.xfrm_policy_lock));
 if (VAR_5) {
  VAR_5->curlft.add_time = FUNC_0();
  VAR_5->index = FUNC_7(VAR_6, VAR_1+VAR_4, 0);
  FUNC_10(VAR_5, VAR_4);
 }
 FUNC_2(VAR_3->sk_policy[VAR_4], VAR_5);
 if (VAR_7) {
  if (VAR_5)
   FUNC_9(VAR_7, VAR_5);




  FUNC_11(VAR_7, VAR_4);
 }
 FUNC_6(&VAR_6->xfrm.xfrm_policy_lock);

 if (VAR_7) {
  FUNC_8(VAR_7);
 }
 return 0;
}
