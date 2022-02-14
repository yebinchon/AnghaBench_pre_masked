
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16 ;
typedef int * RD_HCURSOR ;


 size_t FUNC_0 (int **) ;
 int FUNC_1 (char*,size_t) ;
 int ** VAR_0 ;
 int FUNC_2 (int *) ;

void
FUNC_3(uint16 VAR_1, RD_HCURSOR VAR_2)
{
 RD_HCURSOR VAR_3;

 if (VAR_1 < FUNC_0(VAR_0))
 {
  VAR_3 = VAR_0[VAR_1];
  if (VAR_3 != ((void*)0))
   FUNC_2(VAR_3);

  VAR_0[VAR_1] = VAR_2;
 }
 else
 {
  FUNC_1("put cursor %d\n", VAR_1);
 }
}
