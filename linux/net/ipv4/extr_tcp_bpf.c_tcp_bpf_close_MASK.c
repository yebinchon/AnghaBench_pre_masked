
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {TYPE_1__* sk_prot; } ;
struct sk_psock {void (* saved_close ) (struct sock*,long) ;} ;
struct TYPE_2__ {void (* close ) (struct sock*,long) ;} ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct sock*) ;
 struct sk_psock* FUNC_4 (struct sock*) ;
 void FUNC_5 (struct sock*,long) ;
 int FUNC_6 (struct sock*,struct sk_psock*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct sock *VAR_0, long VAR_1)
{
 void (*VAR_2)(struct sock *VAR_3, long VAR_4);
 struct sk_psock *VAR_5;

 FUNC_0(VAR_0);
 FUNC_1();
 VAR_5 = FUNC_4(VAR_0);
 if (FUNC_7(!VAR_5)) {
  FUNC_2();
  FUNC_3(VAR_0);
  return VAR_0->sk_prot->close(VAR_0, VAR_1);
 }

 VAR_2 = VAR_5->saved_close;
 FUNC_6(VAR_0, VAR_5);
 FUNC_2();
 FUNC_3(VAR_0);
 VAR_2(VAR_0, VAR_1);
}
