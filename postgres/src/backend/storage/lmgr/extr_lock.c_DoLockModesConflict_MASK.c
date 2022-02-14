
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* conflictTab; } ;
typedef TYPE_1__* LockMethod ;
typedef size_t LOCKMODE ;


 size_t VAR_0 ;
 int FUNC_0 (size_t) ;
 TYPE_1__** VAR_1 ;

bool
FUNC_1(LOCKMODE VAR_2, LOCKMODE VAR_3)
{
 LockMethod VAR_4 = VAR_1[VAR_0];

 if (VAR_4->conflictTab[VAR_2] & FUNC_0(VAR_3))
  return 1;

 return 0;
}
