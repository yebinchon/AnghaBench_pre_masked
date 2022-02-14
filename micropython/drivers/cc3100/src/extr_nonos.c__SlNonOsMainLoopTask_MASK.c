
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t _i8 ;
typedef int (* _SlSpawnEntryFunc_t ) (int ) ;
struct TYPE_4__ {int * pValue; int (* pEntry ) (int ) ;} ;
typedef TYPE_1__ _SlNonOsSpawnEntry_t ;
typedef int _SlNonOsRetVal_t ;
struct TYPE_6__ {TYPE_1__* SpawnEntries; } ;
struct TYPE_5__ {scalar_t__ RxDoneCnt; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_2__* VAR_4 ;

_SlNonOsRetVal_t FUNC_0(void)
{
 _i8 VAR_5=0;



 for (VAR_5=0 ; VAR_5<VAR_0 ; VAR_5++)

 {
  _SlNonOsSpawnEntry_t* VAR_6 = &VAR_3.SpawnEntries[VAR_5];
  _SlSpawnEntryFunc_t VAR_7 = VAR_6->pEntry;

  if (((void*)0) != VAR_7)
  {
            if(VAR_2 != (VAR_4)->RxDoneCnt)
            {
                VAR_7(0);
            }

   VAR_6->pEntry = ((void*)0);
   VAR_6->pValue = ((void*)0);
  }
 }

        return VAR_1;
}
