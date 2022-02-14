
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int) ;
 int* VAR_0 ;

__attribute__((used)) static int
FUNC_2(int VAR_1, int VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  int VAR_4 = VAR_0[VAR_3] + (VAR_3 == 1 && FUNC_1(VAR_1));
  if (VAR_2 < VAR_4)
   return VAR_2;
  VAR_2 -= VAR_4;
 }
 return VAR_2;
}
