
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * string; scalar_t__ present; } ;


 size_t VAR_0 ;
 char FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;

int
FUNC_1()
{
    return (VAR_1[VAR_0].present
     && FUNC_0(VAR_1[VAR_0].string[0]) == 'y');
}
