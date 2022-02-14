
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct sock*) ;
 int VAR_2 ;
 unsigned long FUNC_4 (int *,int ) ;

void FUNC_5(struct sock *VAR_3)
{
 unsigned long VAR_4;

 if (!FUNC_1(VAR_2))
  return;
 VAR_4 = FUNC_4(&VAR_2, 0);
 if (VAR_4)
  FUNC_0(FUNC_3(VAR_3), VAR_0,
         FUNC_2(VAR_1 - VAR_4));
}
