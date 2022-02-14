
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned long FUNC_4 (int *,int,int,int ) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(void)
{
 FUNC_0(VAR_1);
 unsigned long VAR_2;

 for (VAR_2 = 0; VAR_2 < 10000; VAR_2++) {
  FUNC_1(FUNC_4(&VAR_1, 0, 20000, VAR_0) == VAR_2);
 }
 FUNC_1(FUNC_4(&VAR_1, 5, 30, VAR_0) < 0);

 for (VAR_2 = 0; VAR_2 < 10000; VAR_2++) {
  FUNC_5(&VAR_1, VAR_2);
 }
 FUNC_1(FUNC_3(&VAR_1));

 FUNC_2(&VAR_1);
}
