
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_v6_daddr; } ;
struct dst_entry {TYPE_1__* ops; int obsolete; } ;
struct TYPE_4__ {int dst_cookie; } ;
struct TYPE_3__ {scalar_t__ (* check ) (struct dst_entry*,int ) ;} ;


 struct dst_entry* FUNC_0 (struct sock*) ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct dst_entry*,int ) ;

void FUNC_7(struct sock *VAR_0)
{
 struct dst_entry *VAR_1;

 if (FUNC_3(&VAR_0->sk_v6_daddr))
  return;

 FUNC_4();
 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1 || !VAR_1->obsolete ||
     VAR_1->ops->check(VAR_1, FUNC_1(VAR_0)->dst_cookie)) {
  FUNC_5();
  return;
 }
 FUNC_5();

 FUNC_2(VAR_0, 0);
}
