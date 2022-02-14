
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sock*,int ) ;
 int FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sock*,unsigned int,int,int ,int ) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(struct sock *VAR_2, unsigned int VAR_3,
          int VAR_4)
{




 if (FUNC_3(VAR_2->sk_state == VAR_1))
  return;

 if (FUNC_2(VAR_2, VAR_3, VAR_4, 0,
      FUNC_0(VAR_2, VAR_0)))
  FUNC_1(VAR_2);
}
