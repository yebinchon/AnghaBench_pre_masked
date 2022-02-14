
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* pValue; int pEntry; } ;
typedef TYPE_1__ tSimpleLinkSpawnMsg ;
typedef int P_OSI_SPAWN_ENTRY ;
typedef int OsiReturnVal_e ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,scalar_t__*) ;
 int VAR_5 ;

OsiReturnVal_e FUNC_2(P_OSI_SPAWN_ENTRY VAR_6 , void* VAR_7 , unsigned long VAR_8)
{

 tSimpleLinkSpawnMsg VAR_9;
 VAR_9.pEntry = VAR_6;
 VAR_9.pValue = VAR_7;
 VAR_4 = VAR_2;

 if(VAR_3 == FUNC_1( VAR_5, &VAR_9, &VAR_4 ))
 {
  if( VAR_4 )
  {
   FUNC_0 ();
  }
  return VAR_0;
 }
 return VAR_1;
}
