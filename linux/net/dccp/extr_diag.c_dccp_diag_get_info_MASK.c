
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct inet_diag_msg {scalar_t__ idiag_wqueue; scalar_t__ idiag_rqueue; } ;


 int FUNC_0 (struct sock*,void*) ;

__attribute__((used)) static void FUNC_1(struct sock *VAR_0, struct inet_diag_msg *VAR_1,
          void *VAR_2)
{
 VAR_1->idiag_rqueue = VAR_1->idiag_wqueue = 0;

 if (VAR_2 != ((void*)0))
  FUNC_0(VAR_0, VAR_2);
}
