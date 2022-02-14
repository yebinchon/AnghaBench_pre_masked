
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int test_affinity ;
typedef int cpu_set_t ;
typedef int affinity ;


 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int,int *) ;

void FUNC_11(void)
{
 cpu_set_t VAR_1, VAR_2;
 int VAR_3;

 FUNC_8(0, sizeof(VAR_1), &VAR_1);
 FUNC_3(&VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (FUNC_1(VAR_3, &VAR_1)) {
   FUNC_2(VAR_3, &VAR_2);
   FUNC_10(0, sizeof(VAR_2),
     &VAR_2);
   FUNC_4(FUNC_9() == VAR_3);
   FUNC_4(FUNC_6() == VAR_3);
   FUNC_4(FUNC_7() == VAR_3);
   FUNC_4(FUNC_5() == VAR_3);
   FUNC_0(VAR_3, &VAR_2);
  }
 }
 FUNC_10(0, sizeof(VAR_1), &VAR_1);
}
