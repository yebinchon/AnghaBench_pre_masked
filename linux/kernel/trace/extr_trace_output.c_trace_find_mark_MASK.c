
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long long val; char sym; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

char FUNC_1(unsigned long long VAR_1)
{
 int VAR_2;
 int VAR_3 = FUNC_0(VAR_0);

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  if (VAR_1 > VAR_0[VAR_2].val)
   break;
 }

 return (VAR_2 == VAR_3) ? ' ' : VAR_0[VAR_2].sym;
}
