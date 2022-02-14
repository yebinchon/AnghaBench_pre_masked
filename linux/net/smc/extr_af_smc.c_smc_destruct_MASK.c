
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_2)
{
 if (VAR_2->sk_state != VAR_0)
  return;
 if (!FUNC_1(VAR_2, VAR_1))
  return;

 FUNC_0(VAR_2);
}
