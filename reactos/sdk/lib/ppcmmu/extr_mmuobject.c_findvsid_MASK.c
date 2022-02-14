
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vsid; struct TYPE_4__* next; } ;
typedef TYPE_1__ MmuVsidInfo ;


 TYPE_1__* VAR_0 ;

MmuVsidInfo *FUNC_0(int VAR_1)
{
    MmuVsidInfo *VAR_2;
    for(VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
    {
 if(VAR_2->vsid == VAR_1) return VAR_2;
    }
    return 0;
}
