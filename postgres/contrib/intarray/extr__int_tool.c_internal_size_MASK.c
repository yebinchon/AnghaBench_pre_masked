
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64 ;
typedef int a ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_0(int *VAR_2, int VAR_3)
{
 int VAR_4;
 int64 VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4 += 2)
 {
  if (!VAR_4 || VAR_2[VAR_4] != VAR_2[VAR_4 - 1])
   VAR_5 += (int64) (VAR_2[VAR_4 + 1]) - (int64) (VAR_2[VAR_4]) + 1;
 }

 if (VAR_5 > (int64) VAR_0 || VAR_5 < (int64) VAR_1)
  return -1;
 return (int) VAR_5;
}
