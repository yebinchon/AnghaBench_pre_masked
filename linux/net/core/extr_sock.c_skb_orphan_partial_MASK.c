
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_wmem_alloc; int sk_refcnt; } ;
struct sk_buff {int destructor; int truesize; struct sock* sk; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int VAR_0 ;

void FUNC_6(struct sk_buff *VAR_1)
{
 if (FUNC_4(VAR_1))
  return;

 if (FUNC_1(VAR_1)) {
  struct sock *VAR_2 = VAR_1->sk;

  if (FUNC_2(&VAR_2->sk_refcnt)) {
   FUNC_0(FUNC_3(VAR_1->truesize, &VAR_2->sk_wmem_alloc));
   VAR_1->destructor = VAR_0;
  }
 } else {
  FUNC_5(VAR_1);
 }
}
