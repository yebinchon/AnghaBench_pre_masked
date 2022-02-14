
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


struct TYPE_18__ {int tmp_heap; } ;
typedef TYPE_1__ script_ctx_t ;
struct TYPE_19__ {int match_len; int const* cp; } ;
typedef TYPE_2__ match_state_t ;
struct TYPE_20__ {int index; int length; } ;
typedef TYPE_3__ match_result_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
typedef int heap_pool_t ;
typedef int WCHAR ;
struct TYPE_21__ {TYPE_16__* jsregexp; } ;
struct TYPE_17__ {int flags; } ;
typedef TYPE_4__ RegExpInstance ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_1 (TYPE_16__*,int *,int const*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_4__*,int ,int *,int const*,TYPE_2__*) ;
 TYPE_3__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 TYPE_3__* FUNC_7 (TYPE_3__*,int) ;
 int * FUNC_8 (int *) ;
 TYPE_4__* FUNC_9 (int *) ;

__attribute__((used)) static HRESULT FUNC_10(script_ctx_t *VAR_4, jsdisp_t *VAR_5, jsstr_t *VAR_6, BOOL VAR_7,
        match_result_t **VAR_8, DWORD *VAR_9)
{
    RegExpInstance *VAR_10 = FUNC_9(VAR_5);
    match_result_t *VAR_11 = ((void*)0);
    match_state_t *VAR_12;
    DWORD VAR_13=0, VAR_14 = 0;
    heap_pool_t *VAR_15;
    const WCHAR *VAR_16;
    HRESULT VAR_17;

    VAR_15 = FUNC_6(&VAR_4->tmp_heap);

    VAR_16 = FUNC_8(VAR_6);
    if(!VAR_16)
        return VAR_0;

    VAR_12 = FUNC_1(VAR_10->jsregexp, &VAR_4->tmp_heap, VAR_16);
    if(!VAR_12) {
        FUNC_5(VAR_15);
        return VAR_0;
    }

    while(1) {
        VAR_17 = FUNC_2(VAR_4, VAR_10, 0, VAR_6, VAR_16, VAR_12);
        if(VAR_17 == VAR_2) {
            VAR_17 = VAR_3;
            break;
        }

        if(FUNC_0(VAR_17))
            break;

        if(VAR_14 == VAR_13) {
            if(VAR_11) {
                match_result_t *VAR_18 = VAR_11;

                VAR_11 = FUNC_7(VAR_18, (VAR_14 <<= 1) * sizeof(match_result_t));
                if(!VAR_11)
                    FUNC_4(VAR_18);
            }else {
                VAR_11 = FUNC_3((VAR_14=4) * sizeof(match_result_t));
            }
            if(!VAR_11) {
                VAR_17 = VAR_0;
                break;
            }
        }

        VAR_11[VAR_13].index = VAR_12->cp - VAR_16 - VAR_12->match_len;
        VAR_11[VAR_13++].length = VAR_12->match_len;

        if(!VAR_7 && !(VAR_10->jsregexp->flags & VAR_1)) {
            VAR_17 = VAR_3;
            break;
        }
    }

    FUNC_5(VAR_15);
    if(FUNC_0(VAR_17)) {
        FUNC_4(VAR_11);
        return VAR_17;
    }

    *VAR_8 = VAR_11;
    *VAR_9 = VAR_13;
    return VAR_3;
}
