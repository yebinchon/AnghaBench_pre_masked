
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vdisp_t ;
struct TYPE_9__ {int tmp_heap; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int match_state_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int WCHAR ;
struct TYPE_11__ {int flags; } ;
struct TYPE_10__ {scalar_t__ last_index; int dispex; TYPE_8__* jsregexp; } ;
typedef TYPE_2__ RegExpInstance ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_2 (TYPE_8__*,int *,int const*) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int *,int ,int *,int **) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ,int **,int const**) ;

__attribute__((used)) static HRESULT FUNC_10(script_ctx_t *VAR_7, vdisp_t *VAR_8, jsval_t VAR_9,
        jsstr_t **VAR_10, match_state_t **VAR_11, BOOL *VAR_12)
{
    RegExpInstance *VAR_13;
    match_state_t *VAR_14;
    DWORD VAR_15 = 0;
    const WCHAR *VAR_16;
    jsstr_t *VAR_17;
    HRESULT VAR_18;

    if(!FUNC_3(VAR_8, VAR_3)) {
        FUNC_1("Not a RegExp\n");
        return VAR_0;
    }

    VAR_13 = FUNC_6(VAR_8);

    VAR_18 = FUNC_9(VAR_7, VAR_9, &VAR_17, &VAR_16);
    if(FUNC_0(VAR_18))
        return VAR_18;

    if(VAR_13->jsregexp->flags & VAR_4) {
        if(VAR_13->last_index < 0) {
            FUNC_5(VAR_17);
            FUNC_8(VAR_13, 0);
            *VAR_12 = VAR_2;
            if(VAR_10)
                *VAR_10 = FUNC_4();
            return VAR_6;
        }

        VAR_15 = VAR_13->last_index;
    }

    VAR_14 = FUNC_2(VAR_13->jsregexp, &VAR_7->tmp_heap, VAR_16+VAR_15);
    if(!VAR_14) {
        FUNC_5(VAR_17);
        return VAR_1;
    }

    VAR_18 = FUNC_7(VAR_7, &VAR_13->dispex, VAR_5, VAR_17, &VAR_14);
    if(FUNC_0(VAR_18)) {
        FUNC_5(VAR_17);
        return VAR_18;
    }

    *VAR_11 = VAR_14;
    *VAR_12 = VAR_18 == VAR_6;
    if(VAR_10)
        *VAR_10 = VAR_17;
    else
        FUNC_5(VAR_17);
    return VAR_6;
}
