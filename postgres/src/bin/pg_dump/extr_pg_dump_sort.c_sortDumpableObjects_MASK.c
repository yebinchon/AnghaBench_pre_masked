
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DumpableObject ;
typedef void* DumpId ;


 int FUNC_0 (int **,int,int **,int*) ;
 int FUNC_1 (int **,int,int) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int **,int **,int) ;
 scalar_t__ FUNC_4 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;

void
FUNC_5(DumpableObject **VAR_2, int VAR_3,
     DumpId VAR_4, DumpId VAR_5)
{
 DumpableObject **VAR_6;
 int VAR_7;

 if (VAR_3 <= 0)
  return;





 VAR_1 = VAR_4;
 VAR_0 = VAR_5;

 VAR_6 = (DumpableObject **) FUNC_4(VAR_3 * sizeof(DumpableObject *));
 while (!FUNC_0(VAR_2, VAR_3, VAR_6, &VAR_7))
  FUNC_1(VAR_6, VAR_7, VAR_3);

 FUNC_3(VAR_2, VAR_6, VAR_3 * sizeof(DumpableObject *));

 FUNC_2(VAR_6);
}
