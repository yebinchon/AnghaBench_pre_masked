
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int ** VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int * VAR_2 ;
 int FUNC_3 (int *) ;

void
FUNC_4(bool VAR_3)
{
 int VAR_4;

 if (VAR_2 == ((void*)0))
  return;





 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
 {
  if (VAR_0[VAR_4] != ((void*)0))
  {
   if (VAR_3)
    FUNC_3(VAR_0[VAR_4]);
   FUNC_2(VAR_4);
  }
 }


 VAR_0 = ((void*)0);
 VAR_1 = 0;


 FUNC_0(VAR_2);
 VAR_2 = ((void*)0);


 FUNC_1(VAR_3);
}
