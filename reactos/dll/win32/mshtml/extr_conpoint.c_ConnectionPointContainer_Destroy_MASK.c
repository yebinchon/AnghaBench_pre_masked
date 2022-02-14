
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cps; TYPE_1__* cp_entries; } ;
struct TYPE_4__ {scalar_t__ riid; } ;
typedef TYPE_2__ ConnectionPointContainer ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(ConnectionPointContainer *VAR_0)
{
    unsigned VAR_1;

    if(!VAR_0->cps)
        return;

    for(VAR_1=0; VAR_0->cp_entries[VAR_1].riid; VAR_1++)
        FUNC_0(VAR_0->cps+VAR_1);
    FUNC_1(VAR_0->cps);
}
