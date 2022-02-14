
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t numLockModes; char const** lockModeNames; } ;
typedef size_t LOCKMODE ;
typedef size_t LOCKMETHODID ;


 int FUNC_0 (int) ;
 TYPE_1__** VAR_0 ;
 size_t FUNC_1 (TYPE_1__**) ;

const char *
FUNC_2(LOCKMETHODID VAR_1, LOCKMODE VAR_2)
{
 FUNC_0(VAR_1 > 0 && VAR_1 < FUNC_1(VAR_0));
 FUNC_0(VAR_2 > 0 && VAR_2 <= VAR_0[VAR_1]->numLockModes);
 return VAR_0[VAR_1]->lockModeNames[VAR_2];
}
