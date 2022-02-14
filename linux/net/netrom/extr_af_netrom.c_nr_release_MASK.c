
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int (* sk_state_change ) (struct sock*) ;int sk_shutdown; int sk_state; } ;
struct nr_sock {int state; int n2count; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int ) ;
 struct nr_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,int ) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*,int ) ;
 int FUNC_15 (struct sock*) ;

__attribute__((used)) static int FUNC_16(struct socket *VAR_4)
{
 struct sock *VAR_5 = VAR_4->sk;
 struct nr_sock *VAR_6;

 if (VAR_5 == ((void*)0)) return 0;

 FUNC_11(VAR_5);
 FUNC_12(VAR_5);
 FUNC_0(VAR_5);
 VAR_6 = FUNC_4(VAR_5);

 switch (VAR_6->state) {
 case 131:
 case 130:
 case 129:
  FUNC_3(VAR_5, 0);
  FUNC_2(VAR_5);
  break;

 case 128:
  FUNC_1(VAR_5);
  VAR_6->n2count = 0;
  FUNC_9(VAR_5, VAR_0);
  FUNC_5(VAR_5);
  FUNC_7(VAR_5);
  FUNC_8(VAR_5);
  FUNC_6(VAR_5);
  VAR_6->state = 129;
  VAR_5->sk_state = VAR_3;
  VAR_5->sk_shutdown |= VAR_1;
  VAR_5->sk_state_change(VAR_5);
  FUNC_14(VAR_5, VAR_2);
  break;

 default:
  break;
 }

 VAR_4->sk = ((void*)0);
 FUNC_10(VAR_5);
 FUNC_13(VAR_5);

 return 0;
}
