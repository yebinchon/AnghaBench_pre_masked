
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; scalar_t__ sk_mark; int sk_userlocks; int sk_bound_dev_if; int sk_family; } ;
struct nlattr {int dummy; } ;
struct inet_sock {int inet_dport; int inet_num; } ;
struct inet_diag_entry {scalar_t__ mark; int userlocks; int ifindex; int dport; int sport; int family; } ;
struct TYPE_2__ {scalar_t__ ir_mark; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct inet_diag_entry*,struct sock*) ;
 int FUNC_1 (struct nlattr const*,struct inet_diag_entry*) ;
 int FUNC_2 (struct sock*) ;
 TYPE_1__* FUNC_3 (int ) ;
 struct inet_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct sock*) ;

int FUNC_7(const struct nlattr *VAR_1, struct sock *VAR_2)
{
 struct inet_sock *VAR_3 = FUNC_4(VAR_2);
 struct inet_diag_entry VAR_4;

 if (!VAR_1)
  return 1;

 VAR_4.family = VAR_2->sk_family;
 FUNC_0(&VAR_4, VAR_2);
 VAR_4.sport = VAR_3->inet_num;
 VAR_4.dport = FUNC_5(VAR_3->inet_dport);
 VAR_4.ifindex = VAR_2->sk_bound_dev_if;
 VAR_4.userlocks = FUNC_6(VAR_2) ? VAR_2->sk_userlocks : 0;
 if (FUNC_6(VAR_2))
  VAR_4.mark = VAR_2->sk_mark;
 else if (VAR_2->sk_state == VAR_0)
  VAR_4.mark = FUNC_3(FUNC_2(VAR_2))->ir_mark;
 else
  VAR_4.mark = 0;

 return FUNC_1(VAR_1, &VAR_4);
}
