
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sock*,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

int FUNC_3(struct sock *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->sk_state != VAR_0) {
  FUNC_1();
  VAR_2 = FUNC_0(VAR_1, ((void*)0));
  FUNC_2();
 }

 return VAR_2;
}
