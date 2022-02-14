
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct pppol2tp_session {int sk; } ;
struct l2tp_session {int dummy; } ;


 struct pppol2tp_session* FUNC_0 (struct l2tp_session*) ;
 struct sock* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static struct sock *FUNC_5(struct l2tp_session *VAR_0)
{
 struct pppol2tp_session *VAR_1 = FUNC_0(VAR_0);
 struct sock *VAR_2;

 FUNC_2();
 VAR_2 = FUNC_1(VAR_1->sk);
 if (VAR_2)
  FUNC_4(VAR_2);
 FUNC_3();

 return VAR_2;
}
