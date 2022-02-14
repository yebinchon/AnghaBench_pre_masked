
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_0(uint64_t VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_2[VAR_5] == VAR_0) {
   if ((VAR_4 & VAR_3[VAR_5]) == 0)
    return 0;
  } else {
   if ((VAR_4 & VAR_3[VAR_5]) != VAR_2[VAR_5])
    return 0;
  }
 }

 return 1;
}
