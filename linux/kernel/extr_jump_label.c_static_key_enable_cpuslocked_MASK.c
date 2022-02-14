
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct static_key {int enabled; } ;


 int FUNC_0 (struct static_key*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct static_key*) ;
 int FUNC_8 () ;

void FUNC_9(struct static_key *VAR_0)
{
 FUNC_0(VAR_0);
 FUNC_8();

 if (FUNC_2(&VAR_0->enabled) > 0) {
  FUNC_1(FUNC_2(&VAR_0->enabled) != 1);
  return;
 }

 FUNC_5();
 if (FUNC_2(&VAR_0->enabled) == 0) {
  FUNC_3(&VAR_0->enabled, -1);
  FUNC_7(VAR_0);



  FUNC_4(&VAR_0->enabled, 1);
 }
 FUNC_6();
}
