
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {size_t sk_protocol; int sk_refcnt; } ;
struct netlink_table {int hash; } ;
struct TYPE_2__ {scalar_t__ subscriptions; int node; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct sock*) ;
 struct netlink_table* VAR_3 ;
 TYPE_1__* FUNC_7 (struct sock*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_10(struct sock *VAR_4)
{
 struct netlink_table *VAR_5;

 VAR_5 = &VAR_3[VAR_4->sk_protocol];
 if (!FUNC_9(&VAR_5->hash, &FUNC_7(VAR_4)->node,
        VAR_2)) {
  FUNC_0(FUNC_8(&VAR_4->sk_refcnt) == 1);
  FUNC_2(VAR_4);
 }

 FUNC_4();
 if (FUNC_7(VAR_4)->subscriptions) {
  FUNC_1(VAR_4);
  FUNC_6(VAR_4);
 }
 if (VAR_4->sk_protocol == VAR_0)
  FUNC_3(&VAR_1);
 FUNC_5();
}
