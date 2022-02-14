
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; scalar_t__ sk_backlog_rcv; } ;
struct pep_sock {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 struct pep_sock* FUNC_2 (struct sock*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int ,int ,int *,int ) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;

__attribute__((used)) static void FUNC_9(struct sock *VAR_6, long VAR_7)
{
 struct pep_sock *VAR_8 = FUNC_2(VAR_6);
 int VAR_9 = 0;

 FUNC_7(VAR_6);
 FUNC_6(VAR_6);

 FUNC_1(VAR_6);
 if ((1 << VAR_6->sk_state) & (VAR_3|VAR_2)) {
  if (VAR_6->sk_backlog_rcv == VAR_5)

   FUNC_3(VAR_6);
  else
   FUNC_4(VAR_6, VAR_1, VAR_0,
      ((void*)0), 0);
 }
 VAR_6->sk_state = VAR_4;

 VAR_9 = VAR_8->ifindex;
 VAR_8->ifindex = 0;
 FUNC_5(VAR_6);

 if (VAR_9)
  FUNC_0(VAR_6);
 FUNC_8(VAR_6);
}
