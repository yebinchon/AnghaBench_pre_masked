
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ) ;
 int* VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ,int ) ;

void FUNC_6(void)
{
 int VAR_5;

 VAR_0 = (int *)FUNC_3(VAR_4, ((void*)0), 0);
 FUNC_2(VAR_1, 0);
 VAR_0[1] = 1;

 while (!VAR_0[0])
  asm volatile("" : : : "memory");
 FUNC_4((void *) VAR_0);

 FUNC_5(VAR_3, 0);
 VAR_5 = FUNC_0(VAR_3, VAR_2);
 if (VAR_5)
  FUNC_1(1);
 FUNC_1(0);
}
