
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nItfCacheEntries; int nFilters; TYPE_1__* ItfCacheEntries; int * ppFiltersInGraph; } ;
struct TYPE_4__ {scalar_t__ riid; scalar_t__ iface; int filter; } ;
typedef scalar_t__ REFIID ;
typedef scalar_t__ LPVOID ;
typedef TYPE_2__ IFilterGraphImpl ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static HRESULT FUNC_2(IFilterGraphImpl* VAR_4, REFIID VAR_5, LPVOID* VAR_6)
{
    HRESULT VAR_7 = VAR_0;
    int VAR_8;
    int VAR_9;


    for (VAR_9 = 0; VAR_9 < VAR_4->nItfCacheEntries; VAR_9++)
        if (VAR_5 == VAR_4->ItfCacheEntries[VAR_9].riid)
        {
            if (VAR_4->ItfCacheEntries[VAR_9].iface)
            {

                *VAR_6 = VAR_4->ItfCacheEntries[VAR_9].iface;
                return VAR_3;
            }
            break;
        }

    if (VAR_9 >= VAR_2)
    {
        FUNC_0("Not enough space to store interface in the cache\n");
        return VAR_1;
    }


    for (VAR_8 = 0; VAR_8 < VAR_4->nFilters; VAR_8++)
    {
        VAR_7 = FUNC_1(VAR_4->ppFiltersInGraph[VAR_8], VAR_5, VAR_6);
        if (VAR_7 == VAR_3)
        {
            VAR_4->ItfCacheEntries[VAR_9].riid = VAR_5;
            VAR_4->ItfCacheEntries[VAR_9].filter = VAR_4->ppFiltersInGraph[VAR_8];
            VAR_4->ItfCacheEntries[VAR_9].iface = *VAR_6;
            if (VAR_9 >= VAR_4->nItfCacheEntries)
                VAR_4->nItfCacheEntries++;
            return VAR_3;
        }
        if (VAR_7 != VAR_0)
            return VAR_7;
    }

    return VAR_7;
}
