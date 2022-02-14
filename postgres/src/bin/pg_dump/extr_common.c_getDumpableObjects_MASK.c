
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DumpableObject ;


 int VAR_0 ;
 int ** VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

void
FUNC_1(DumpableObject ***VAR_2, int *VAR_3)
{
 int VAR_4,
    VAR_5;

 *VAR_2 = (DumpableObject **)
  FUNC_0(VAR_0 * sizeof(DumpableObject *));
 VAR_5 = 0;
 for (VAR_4 = 1; VAR_4 < VAR_0; VAR_4++)
 {
  if (VAR_1[VAR_4])
   (*VAR_2)[VAR_5++] = VAR_1[VAR_4];
 }
 *VAR_3 = VAR_5;
}
