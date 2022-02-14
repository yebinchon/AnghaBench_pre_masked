
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_userlocks; TYPE_1__* sk_prot; scalar_t__ sk_bound_dev_if; int sk_state; } ;
struct inet_sock {scalar_t__ inet_sport; scalar_t__ inet_dport; scalar_t__ inet_daddr; } ;
struct TYPE_2__ {int (* unhash ) (struct sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sock*) ;
 struct inet_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;

int FUNC_5(struct sock *VAR_3, int VAR_4)
{
 struct inet_sock *VAR_5 = FUNC_1(VAR_3);




 VAR_3->sk_state = VAR_2;
 VAR_5->inet_daddr = 0;
 VAR_5->inet_dport = 0;
 FUNC_3(VAR_3);
 VAR_3->sk_bound_dev_if = 0;
 if (!(VAR_3->sk_userlocks & VAR_0))
  FUNC_0(VAR_3);

 if (!(VAR_3->sk_userlocks & VAR_1)) {
  VAR_3->sk_prot->unhash(VAR_3);
  VAR_5->inet_sport = 0;
 }
 FUNC_2(VAR_3);
 return 0;
}
