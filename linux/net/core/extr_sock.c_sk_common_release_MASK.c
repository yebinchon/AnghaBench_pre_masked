
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {TYPE_1__* sk_prot; } ;
struct TYPE_2__ {int (* unhash ) (struct sock*) ;int (* destroy ) (struct sock*) ;} ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;

void FUNC_6(struct sock *VAR_0)
{
 if (VAR_0->sk_prot->destroy)
  VAR_0->sk_prot->destroy(VAR_0);
 VAR_0->sk_prot->unhash(VAR_0);
 FUNC_1(VAR_0);

 FUNC_5(VAR_0);

 FUNC_0(VAR_0);

 FUNC_2(VAR_0);
}
