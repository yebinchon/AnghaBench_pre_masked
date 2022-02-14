
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,unsigned long) ;
 unsigned long VAR_1 ;
 int FUNC_3 (struct sock*) ;
 int VAR_2 ;

void FUNC_4(struct sock *VAR_3)
{
 unsigned long VAR_4;

 if (FUNC_1(VAR_2))
  return;
 VAR_4 = VAR_1;

 if (!VAR_4)
  VAR_4--;
 if (!FUNC_2(&VAR_2, 0, VAR_4))
  FUNC_0(FUNC_3(VAR_3), VAR_0);
}
