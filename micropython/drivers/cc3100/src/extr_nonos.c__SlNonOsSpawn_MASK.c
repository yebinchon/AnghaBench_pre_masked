
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int _u32 ;
typedef size_t _i8 ;
typedef int * _SlSpawnEntryFunc_t ;
struct TYPE_3__ {int * pEntry; void* pValue; } ;
typedef TYPE_1__ _SlNonOsSpawnEntry_t ;
typedef int _SlNonOsRetVal_t ;
struct TYPE_4__ {TYPE_1__* SpawnEntries; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

_SlNonOsRetVal_t FUNC_0(_SlSpawnEntryFunc_t VAR_3 , void* VAR_4 , _u32 VAR_5)
{
  _i8 VAR_6 = 0;


 for (VAR_6=0 ; VAR_6<VAR_0 ; VAR_6++)

 {
  _SlNonOsSpawnEntry_t* VAR_7 = &VAR_2.SpawnEntries[VAR_6];

  if (((void*)0) == VAR_7->pEntry)
  {
   VAR_7->pValue = VAR_4;
   VAR_7->pEntry = VAR_3;

   break;

  }
 }


        return VAR_1;
}
