
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pValue; int (* pEntry ) (int ) ;} ;
typedef TYPE_1__ tSimpleLinkSpawnMsg ;
typedef scalar_t__ portBASE_TYPE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*,int ) ;
 int VAR_2 ;

void FUNC_3(void *VAR_3)
{
 tSimpleLinkSpawnMsg VAR_4;
 portBASE_TYPE VAR_5;

 for(;;)
 {
  VAR_5 = FUNC_2( VAR_2, &VAR_4, VAR_0);
  if(VAR_5 == VAR_1)
  {
    VAR_4.pEntry(VAR_4.pValue);
  }

        FUNC_0();
 }
}
