
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {TYPE_1__* sk_prot; } ;
struct sk_psock {void (* saved_unhash ) (struct sock*) ;} ;
struct TYPE_2__ {int (* unhash ) (struct sock*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct sk_psock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,struct sk_psock*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_0)
{
 void (*VAR_1)(struct sock *VAR_2);
 struct sk_psock *VAR_3;

 FUNC_0();
 VAR_3 = FUNC_2(VAR_0);
 if (FUNC_5(!VAR_3)) {
  FUNC_1();
  if (VAR_0->sk_prot->unhash)
   VAR_0->sk_prot->unhash(VAR_0);
  return;
 }

 VAR_1 = VAR_3->saved_unhash;
 FUNC_4(VAR_0, VAR_3);
 FUNC_1();
 VAR_1(VAR_0);
}
