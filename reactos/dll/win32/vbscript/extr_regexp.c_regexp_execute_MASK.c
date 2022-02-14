
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int parenCount; } ;
typedef TYPE_1__ regexp_t ;
struct TYPE_12__ {int match_len; int paren_count; int const* cp; } ;
typedef TYPE_2__ match_state_t ;
typedef int heap_pool_t ;
typedef int const WCHAR ;
struct TYPE_13__ {int start; int skipped; int ok; int * pool; int const* cpend; int const* cpbegin; } ;
typedef TYPE_3__ REGlobalData ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,void*,int *,TYPE_3__*) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;

HRESULT FUNC_7(regexp_t *VAR_3, void *VAR_4, heap_pool_t *VAR_5,
        const WCHAR *VAR_6, DWORD VAR_7, match_state_t *VAR_8)
{
    match_state_t *VAR_9;
    REGlobalData VAR_10;
    heap_pool_t *VAR_11 = FUNC_6(VAR_5);
    const WCHAR *VAR_12 = VAR_8->cp;
    HRESULT VAR_13;

    FUNC_4(VAR_8->cp != ((void*)0));

    VAR_10.cpbegin = VAR_6;
    VAR_10.cpend = VAR_6+VAR_7;
    VAR_10.start = VAR_8->cp-VAR_6;
    VAR_10.skipped = 0;
    VAR_10.pool = VAR_5;

    VAR_13 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_10);
    if(FUNC_0(VAR_13)) {
        FUNC_3("InitMatch failed\n");
        FUNC_5(VAR_11);
        return VAR_13;
    }

    VAR_9 = FUNC_2(&VAR_10, VAR_8);
    FUNC_5(VAR_11);
    if(!VAR_10.ok) {
        FUNC_3("MatchRegExp failed\n");
        return VAR_0;
    }

    if(!VAR_9) {
        VAR_8->match_len = 0;
        return VAR_1;
    }

    VAR_8->match_len = (VAR_8->cp-VAR_12) - VAR_10.skipped;
    VAR_8->paren_count = VAR_3->parenCount;
    return VAR_2;
}
