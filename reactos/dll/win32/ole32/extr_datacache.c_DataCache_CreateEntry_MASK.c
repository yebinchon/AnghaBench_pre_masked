
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int last_cache_id; int cache_list; } ;
struct TYPE_13__ {int entry; } ;
struct TYPE_12__ {int cfFormat; } ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ FORMATETC ;
typedef TYPE_2__ DataCacheEntry ;
typedef TYPE_3__ DataCache ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 TYPE_2__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_2__*) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__ const*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__ const*,int,int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static HRESULT FUNC_9(DataCache *VAR_2, const FORMATETC *VAR_3, DWORD VAR_4,
                                     BOOL VAR_5, DataCacheEntry **VAR_6)
{
    HRESULT VAR_7;
    DWORD VAR_8 = VAR_5 ? 1 : VAR_2->last_cache_id;
    DataCacheEntry *VAR_9;

    VAR_7 = FUNC_5( VAR_3 );
    if (FUNC_0(VAR_7))
        return VAR_7;
    if (VAR_7 == VAR_0)
        FUNC_4("creating unsupported format %d\n", VAR_3->cfFormat);

    VAR_9 = FUNC_2(FUNC_1(), 0, sizeof(*VAR_9));
    if (!VAR_9)
        return VAR_1;

    if (!FUNC_6(VAR_9, VAR_3, VAR_4, VAR_8))
        goto fail;

    if (VAR_5)
        FUNC_7(&VAR_2->cache_list, &VAR_9->entry);
    else
    {
        FUNC_8(&VAR_2->cache_list, &VAR_9->entry);
        VAR_2->last_cache_id++;
    }

    if (VAR_6) *VAR_6 = VAR_9;
    return VAR_7;

fail:
    FUNC_3(FUNC_1(), 0, VAR_9);
    return VAR_1;
}
