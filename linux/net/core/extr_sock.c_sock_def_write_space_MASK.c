
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_wq {int wait; } ;
struct sock {int sk_wq; int sk_sndbuf; int sk_wmem_alloc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 struct socket_wq* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sock*,int ,int ) ;
 scalar_t__ FUNC_6 (struct socket_wq*) ;
 scalar_t__ FUNC_7 (struct sock*) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static void FUNC_9(struct sock *VAR_5)
{
 struct socket_wq *VAR_6;

 FUNC_2();




 if ((FUNC_4(&VAR_5->sk_wmem_alloc) << 1) <= FUNC_0(VAR_5->sk_sndbuf)) {
  VAR_6 = FUNC_1(VAR_5->sk_wq);
  if (FUNC_6(VAR_6))
   FUNC_8(&VAR_6->wait, VAR_0 |
      VAR_2 | VAR_1);


  if (FUNC_7(VAR_5))
   FUNC_5(VAR_5, VAR_4, VAR_3);
 }

 FUNC_3();
}
