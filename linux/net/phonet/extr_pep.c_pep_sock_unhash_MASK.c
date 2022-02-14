
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {int sk; } ;
struct pep_sock {TYPE_1__ pn_sk; int hlist; struct sock* listener; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct sock*) ;
 struct pep_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_0)
{
 struct pep_sock *VAR_1 = FUNC_2(VAR_0);
 struct sock *VAR_2 = ((void*)0);

 FUNC_1(VAR_0);

 if (VAR_1->listener != ((void*)0)) {
  VAR_2 = VAR_1->listener;
  VAR_1->listener = ((void*)0);
  FUNC_4(VAR_0);

  VAR_1 = FUNC_2(VAR_2);
  FUNC_1(VAR_2);
  FUNC_5(VAR_0);
  VAR_0 = VAR_2;
 }



 if (FUNC_0(&VAR_1->hlist))
  FUNC_3(&VAR_1->pn_sk.sk);
 FUNC_4(VAR_0);

 if (VAR_2)
  FUNC_6(VAR_2);
}
