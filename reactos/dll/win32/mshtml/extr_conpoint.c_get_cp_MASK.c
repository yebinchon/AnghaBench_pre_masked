
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int desc; scalar_t__ riid; } ;
typedef TYPE_1__ const cpc_entry_t ;
struct TYPE_6__ {int * cps; TYPE_1__ const* cp_entries; } ;
typedef int REFIID ;
typedef TYPE_2__ ConnectionPointContainer ;
typedef int ConnectionPoint ;
typedef int BOOL ;


 int FUNC_0 (int *,TYPE_2__*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int * FUNC_2 (int) ;

__attribute__((used)) static ConnectionPoint *FUNC_3(ConnectionPointContainer *VAR_0, REFIID VAR_1, BOOL VAR_2)
{
    const cpc_entry_t *VAR_3;
    unsigned VAR_4, VAR_5;

    for(VAR_3 = VAR_0->cp_entries; VAR_3->riid; VAR_3++) {
        if(FUNC_1(VAR_3->riid, VAR_1))
            break;
    }
    if(!VAR_3->riid)
        return ((void*)0);
    VAR_4 = VAR_3 - VAR_0->cp_entries;

    if(!VAR_0->cps) {
        if(!VAR_2)
            return ((void*)0);

        while(VAR_3->riid)
            VAR_3++;
        VAR_0->cps = FUNC_2((VAR_3 - VAR_0->cp_entries) * sizeof(*VAR_0->cps));
        if(!VAR_0->cps)
            return ((void*)0);

        for(VAR_5=0; VAR_0->cp_entries[VAR_5].riid; VAR_5++)
            FUNC_0(VAR_0->cps+VAR_5, VAR_0, VAR_0->cp_entries[VAR_5].riid, VAR_0->cp_entries[VAR_5].desc);
    }

    return VAR_0->cps+VAR_4;
}
