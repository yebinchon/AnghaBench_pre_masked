
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct inet_diag_msg {int idiag_wqueue; int idiag_rqueue; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_0, struct inet_diag_msg *VAR_1,
  void *VAR_2)
{
 VAR_1->idiag_rqueue = FUNC_1(VAR_0);
 VAR_1->idiag_wqueue = FUNC_0(VAR_0);
}
