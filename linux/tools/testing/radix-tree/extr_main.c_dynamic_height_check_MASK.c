
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int *,int) ;

void FUNC_6(void)
{
 int VAR_2;
 FUNC_0(VAR_1, VAR_0);
 FUNC_5(&VAR_1, 0);

 FUNC_3(&VAR_1, 42);
 FUNC_5(&VAR_1, 42);

 FUNC_3(&VAR_1, 1000000);
 FUNC_5(&VAR_1, 1000000);

 FUNC_1(FUNC_2(&VAR_1, 1000000));
 FUNC_5(&VAR_1, 42);

 FUNC_1(FUNC_2(&VAR_1, 42));
 FUNC_5(&VAR_1, 0);

 for (VAR_2 = 0; VAR_2 < 1000; VAR_2++) {
  FUNC_3(&VAR_1, VAR_2);
  FUNC_5(&VAR_1, VAR_2);
 }

 VAR_2--;
 for (;;) {
  FUNC_1(FUNC_2(&VAR_1, VAR_2));
  if (VAR_2 == 0) {
   FUNC_5(&VAR_1, 0);
   break;
  }
  VAR_2--;
  FUNC_5(&VAR_1, VAR_2);
 }

 FUNC_4(&VAR_1);
}
