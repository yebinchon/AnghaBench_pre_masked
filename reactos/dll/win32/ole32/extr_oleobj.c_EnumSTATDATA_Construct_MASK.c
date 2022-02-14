
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_11__ {int ref; int num_of_elems; TYPE_2__ IEnumSTATDATA_iface; int * holder; TYPE_1__* statdata; int index; } ;
struct TYPE_9__ {scalar_t__ pAdvSink; } ;
typedef TYPE_1__ STATDATA ;
typedef int IUnknown ;
typedef TYPE_2__ IEnumSTATDATA ;
typedef int HRESULT ;
typedef TYPE_3__ EnumSTATDATA ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;

HRESULT FUNC_5(IUnknown *VAR_3, ULONG VAR_4, DWORD VAR_5, STATDATA *VAR_6,
                               BOOL VAR_7, IEnumSTATDATA **VAR_8)
{
    EnumSTATDATA *VAR_9 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_9));
    DWORD VAR_10, VAR_11;

    if (!VAR_9) return VAR_0;

    VAR_9->IEnumSTATDATA_iface.lpVtbl = &VAR_1;
    VAR_9->ref = 1;
    VAR_9->index = VAR_4;

    if (VAR_7)
    {
        VAR_9->statdata = FUNC_1(FUNC_0(), 0, VAR_5 * sizeof(*VAR_9->statdata));
        if(!VAR_9->statdata)
        {
            FUNC_2(FUNC_0(), 0, VAR_9);
            return VAR_0;
        }

        for(VAR_10 = 0, VAR_11 = 0; VAR_10 < VAR_5; VAR_10++)
        {
            if(VAR_6[VAR_10].pAdvSink)
            {
                FUNC_4(VAR_9->statdata + VAR_11, VAR_6 + VAR_10);
                VAR_11++;
            }
        }
    }
    else
    {
        VAR_9->statdata = VAR_6;
        VAR_11 = VAR_5;
    }

    VAR_9->num_of_elems = VAR_11;
    VAR_9->holder = VAR_3;
    if (VAR_3) FUNC_3(VAR_3);
    *VAR_8 = &VAR_9->IEnumSTATDATA_iface;
    return VAR_2;
}
