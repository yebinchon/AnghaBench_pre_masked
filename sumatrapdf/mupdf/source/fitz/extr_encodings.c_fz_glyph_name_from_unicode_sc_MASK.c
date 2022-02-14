
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int u; char const* n; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

const char *
FUNC_1(int VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = FUNC_0(VAR_0) / 2 - 1;
 while (VAR_2 <= VAR_3)
 {
  int VAR_4 = (VAR_2 + VAR_3) >> 1;
  if (VAR_1 < VAR_0[VAR_4].u)
   VAR_3 = VAR_4 - 1;
  else if (VAR_1 > VAR_0[VAR_4].u)
   VAR_2 = VAR_4 + 1;
  else
   return VAR_0[VAR_4].n;
 }
 return ((void*)0);
}
