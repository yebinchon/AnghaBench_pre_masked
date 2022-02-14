
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_sock {int state; } ;
struct socket {struct sock* sk; } ;
struct sock {int (* sk_state_change ) (struct sock*) ;int sk_shutdown; int sk_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,int ,int ,int ) ;
 struct x25_sock* FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_13(struct socket *VAR_5)
{
 struct sock *VAR_6 = VAR_5->sk;
 struct x25_sock *VAR_7;

 if (!VAR_6)
  return 0;

 VAR_7 = FUNC_10(VAR_6);

 FUNC_3(VAR_6);
 FUNC_1(VAR_6);
 switch (VAR_7->state) {

  case 132:
  case 130:
   FUNC_9(VAR_6, 0, 0, 0);
   FUNC_0(VAR_6);
   goto out;

  case 131:
  case 129:
  case 128:
   FUNC_8(VAR_6);
   FUNC_12(VAR_6, VAR_4);
   FUNC_11(VAR_6);
   VAR_7->state = 130;
   VAR_6->sk_state = VAR_3;
   VAR_6->sk_shutdown |= VAR_0;
   VAR_6->sk_state_change(VAR_6);
   FUNC_6(VAR_6, VAR_1);
   FUNC_6(VAR_6, VAR_2);
   break;
 }

 FUNC_4(VAR_6);
out:
 FUNC_2(VAR_6);
 FUNC_5(VAR_6);
 return 0;
}
