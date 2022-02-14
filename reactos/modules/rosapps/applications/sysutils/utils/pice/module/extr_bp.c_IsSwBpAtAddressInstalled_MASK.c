
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_3__ {size_t ulAddress; scalar_t__ bUsed; scalar_t__ bVirtual; scalar_t__ bInstalled; } ;
typedef scalar_t__ BOOLEAN ;


 size_t FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;

BOOLEAN FUNC_1(ULONG VAR_3)
{
    ULONG VAR_4;

    for(VAR_4=0;VAR_4<FUNC_0(VAR_2);VAR_4++)
    {
        if(VAR_2[VAR_4].ulAddress == VAR_3 &&
     VAR_2[VAR_4].bUsed == VAR_1 &&
     VAR_2[VAR_4].bInstalled &&
           VAR_2[VAR_4].bVirtual == VAR_0)
            return VAR_1;
    }

 return VAR_0;
}
