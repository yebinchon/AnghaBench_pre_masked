
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_can {int dummy; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct j1939_sock {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct j1939_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sockaddr_can*,struct j1939_sock*,int) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_3, struct sockaddr *VAR_4,
       int VAR_5)
{
 struct sockaddr_can *VAR_6 = (struct sockaddr_can *)VAR_4;
 struct sock *VAR_7 = VAR_3->sk;
 struct j1939_sock *VAR_8 = FUNC_0(VAR_7);
 int VAR_9 = 0;

 FUNC_2(VAR_7);

 if (VAR_5 && !(VAR_8->state & VAR_2)) {
  VAR_9 = -VAR_0;
  goto failure;
 }

 FUNC_1(VAR_6, VAR_8, VAR_5);
 VAR_9 = VAR_1;

 failure:
 FUNC_3(VAR_7);

 return VAR_9;
}
