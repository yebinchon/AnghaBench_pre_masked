
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_vm {int dummy; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,struct sockaddr_vm*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct sockaddr*,int,struct sockaddr_vm**) ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_1, struct sockaddr *VAR_2, int VAR_3)
{
 int VAR_4;
 struct sock *VAR_5;
 struct sockaddr_vm *VAR_6;

 VAR_5 = VAR_1->sk;

 if (FUNC_3(VAR_2, VAR_3, &VAR_6) != 0)
  return -VAR_0;

 FUNC_1(VAR_5);
 VAR_4 = FUNC_0(VAR_5, VAR_6);
 FUNC_2(VAR_5);

 return VAR_4;
}
