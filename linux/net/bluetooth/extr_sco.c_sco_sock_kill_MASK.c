
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; scalar_t__ sk_socket; } ;


 int FUNC_0 (char*,struct sock*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct sock*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_3)
{
 if (!FUNC_2(VAR_3, VAR_1) || VAR_3->sk_socket ||
     FUNC_2(VAR_3, VAR_0))
  return;

 FUNC_0("sk %p state %d", VAR_3, VAR_3->sk_state);


 FUNC_1(&VAR_2, VAR_3);
 FUNC_4(VAR_3, VAR_0);
 FUNC_3(VAR_3);
}
