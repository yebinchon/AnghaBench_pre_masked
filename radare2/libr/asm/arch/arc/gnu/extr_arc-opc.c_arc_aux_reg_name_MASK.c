
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int value; char* name; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

char *
FUNC_0 (int VAR_3)
{
  int VAR_4;

  for (VAR_4= VAR_2 ; VAR_4 > 0 ; VAR_4--)
    {
   if ((VAR_1[VAR_4].type == VAR_0) && (VAR_1[VAR_4].value == VAR_3)) {
    return VAR_1[VAR_4].name;
   }
    }

  return ((void*)0);
}
