
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_callback_lock; } ;
struct TYPE_2__ {int strp; } ;
struct sk_psock {TYPE_1__ parser; } ;


 scalar_t__ FUNC_0 (struct sk_psock*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct sk_psock* FUNC_3 (struct sock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_0)
{
 struct sk_psock *VAR_1;

 FUNC_1();
 VAR_1 = FUNC_3(VAR_0);
 if (FUNC_0(VAR_1)) {
  FUNC_5(&VAR_0->sk_callback_lock);
  FUNC_4(&VAR_1->parser.strp);
  FUNC_6(&VAR_0->sk_callback_lock);
 }
 FUNC_2();
}
