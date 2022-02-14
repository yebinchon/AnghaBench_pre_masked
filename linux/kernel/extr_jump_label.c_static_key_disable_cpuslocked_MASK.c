
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct static_key {int enabled; } ;


 int FUNC_0 (struct static_key*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct static_key*) ;
 int FUNC_7 () ;

void FUNC_8(struct static_key *VAR_0)
{
 FUNC_0(VAR_0);
 FUNC_7();

 if (FUNC_3(&VAR_0->enabled) != 1) {
  FUNC_1(FUNC_3(&VAR_0->enabled) != 0);
  return;
 }

 FUNC_4();
 if (FUNC_2(&VAR_0->enabled, 1, 0))
  FUNC_6(VAR_0);
 FUNC_5();
}
