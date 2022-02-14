
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int WCHAR ;
typedef int ULONG ;
struct TYPE_13__ {int * lpVtbl; } ;
struct TYPE_12__ {int refCount; int size; TYPE_3__ IEnumRegFilters_iface; struct TYPE_12__* RegFilters; scalar_t__ uIndex; struct TYPE_12__* Name; int Clsid; } ;
typedef TYPE_1__ REGFILTER ;
typedef TYPE_1__ IEnumRegFiltersImpl ;
typedef TYPE_3__ IEnumRegFilters ;
typedef int HRESULT ;


 void* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,TYPE_1__*,int const,TYPE_3__**) ;
 int FUNC_4 (TYPE_1__*) ;

HRESULT FUNC_5(REGFILTER* VAR_3, const ULONG VAR_4, IEnumRegFilters ** VAR_5)
{
    IEnumRegFiltersImpl* VAR_6;
    REGFILTER* VAR_7 = ((void*)0);
    unsigned int VAR_8;

    FUNC_3("(%p, %d, %p)\n", VAR_3, VAR_4, VAR_5);

    VAR_6 = FUNC_0(sizeof(IEnumRegFiltersImpl));
    if (!VAR_6)
    {
        *VAR_5 = ((void*)0);
        return VAR_0;
    }


    if (VAR_4)
    {
        VAR_7 = FUNC_0(sizeof(REGFILTER)*VAR_4);
        if (!VAR_7)
 {
            FUNC_1(VAR_6);
            *VAR_5 = ((void*)0);
           return VAR_0;
        }
    }

    for(VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
    {
        VAR_7[VAR_8].Clsid = VAR_3[VAR_8].Clsid;
        VAR_7[VAR_8].Name = FUNC_0((FUNC_4(VAR_3[VAR_8].Name)+1)*sizeof(WCHAR));
        if (!VAR_7[VAR_8].Name)
        {
            while(VAR_8)
                FUNC_1(VAR_7[--VAR_8].Name);
            FUNC_1(VAR_7);
            FUNC_1(VAR_6);
            return VAR_0;
        }
        FUNC_2(VAR_7[VAR_8].Name, VAR_3[VAR_8].Name, (FUNC_4(VAR_3[VAR_8].Name)+1)*sizeof(WCHAR));
    }

    VAR_6->IEnumRegFilters_iface.lpVtbl = &VAR_1;
    VAR_6->refCount = 1;
    VAR_6->uIndex = 0;
    VAR_6->RegFilters = VAR_7;
    VAR_6->size = VAR_4;

    *VAR_5 = &VAR_6->IEnumRegFilters_iface;

    return VAR_2;
}
