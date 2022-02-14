
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_14__ {int tmp_heap; } ;
typedef TYPE_1__ script_ctx_t ;
struct TYPE_15__ {int match_len; int cp; } ;
typedef TYPE_2__ match_state_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
typedef int heap_pool_t ;
typedef int WCHAR ;
struct TYPE_16__ {TYPE_12__* jsregexp; } ;
struct TYPE_13__ {int flags; } ;
typedef TYPE_3__ RegExpInstance ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* FUNC_0 (TYPE_12__*,int *,int const*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_3__*,int,int *,int const*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 TYPE_3__* FUNC_6 (int *) ;

HRESULT FUNC_7(script_ctx_t *VAR_7, jsdisp_t *VAR_8,
        DWORD VAR_9, jsstr_t *VAR_10, match_state_t **VAR_11)
{
    RegExpInstance *VAR_12 = FUNC_6(VAR_8);
    match_state_t *VAR_13;
    heap_pool_t *VAR_14;
    const WCHAR *VAR_15;
    HRESULT VAR_16;

    if((VAR_9 & VAR_3) && !(VAR_12->jsregexp->flags & VAR_1)) {
        if(VAR_9 & VAR_2)
            *VAR_11 = ((void*)0);
        return VAR_5;
    }

    VAR_15 = FUNC_5(VAR_10);
    if(!VAR_15)
        return VAR_0;

    if(VAR_9 & VAR_2) {
        VAR_13 = FUNC_0(VAR_12->jsregexp, ((void*)0), VAR_15);
        if(!VAR_13)
            return VAR_0;
        *VAR_11 = VAR_13;
    }

    VAR_14 = FUNC_4(&VAR_7->tmp_heap);

    if(VAR_9 & VAR_4) {
        VAR_13 = FUNC_0(VAR_12->jsregexp, &VAR_7->tmp_heap, ((void*)0));
        if(!VAR_13) {
            FUNC_3(VAR_14);
            return VAR_0;
        }
        VAR_13->cp = (*VAR_11)->cp;
        VAR_13->match_len = (*VAR_11)->match_len;
    }else {
        VAR_13 = *VAR_11;
    }

    VAR_16 = FUNC_1(VAR_7, VAR_12, VAR_9, VAR_10, VAR_15, VAR_13);

    if(VAR_9 & VAR_4) {
        (*VAR_11)->cp = VAR_13->cp;
        (*VAR_11)->match_len = VAR_13->match_len;
    }

    FUNC_3(VAR_14);

    if(VAR_16 != VAR_6 && (VAR_9 & VAR_2)) {
        FUNC_2(VAR_13);
        *VAR_11 = ((void*)0);
    }

    return VAR_16;
}
