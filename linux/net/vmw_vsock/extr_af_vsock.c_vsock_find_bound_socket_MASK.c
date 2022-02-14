
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_vm {int dummy; } ;
struct sock {int dummy; } ;


 struct sock* FUNC_0 (struct sockaddr_vm*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

struct sock *FUNC_4(struct sockaddr_vm *VAR_1)
{
 struct sock *VAR_2;

 FUNC_2(&VAR_0);
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  FUNC_1(VAR_2);

 FUNC_3(&VAR_0);

 return VAR_2;
}
