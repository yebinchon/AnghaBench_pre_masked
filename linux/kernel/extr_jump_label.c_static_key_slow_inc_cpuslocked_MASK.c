
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct static_key {int enabled; } ;


 int FUNC_0 (struct static_key*) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct static_key*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 () ;

void FUNC_11(struct static_key *VAR_0)
{
 int VAR_1, VAR_2;

 FUNC_0(VAR_0);
 FUNC_10();
 for (VAR_1 = FUNC_3(&VAR_0->enabled); VAR_1 > 0; VAR_1 = VAR_2) {
  VAR_2 = FUNC_1(&VAR_0->enabled, VAR_1, VAR_1 + 1);
  if (FUNC_9(VAR_2 == VAR_1))
   return;
 }

 FUNC_6();
 if (FUNC_3(&VAR_0->enabled) == 0) {
  FUNC_4(&VAR_0->enabled, -1);
  FUNC_8(VAR_0);




  FUNC_5(&VAR_0->enabled, 1);
 } else {
  FUNC_2(&VAR_0->enabled);
 }
 FUNC_7();
}
