
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
typedef int match_state_t ;
struct TYPE_15__ {scalar_t__ length; scalar_t__ index; } ;
typedef TYPE_2__ match_result_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
typedef int heap_pool_t ;
typedef char WCHAR ;
struct TYPE_16__ {int dispex; TYPE_12__* jsregexp; } ;
struct TYPE_13__ {int flags; } ;
typedef TYPE_3__ RegExpInstance ;
typedef int IDispatch ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (TYPE_12__*,int *,char const*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,unsigned int,int **) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *,int *,int **) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,unsigned int,int ) ;
 scalar_t__ FUNC_10 (int *,char const*,int ) ;
 int FUNC_11 (int *) ;
 char* FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *,scalar_t__,scalar_t__) ;
 int FUNC_15 (int *) ;
 int FUNC_16 () ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 TYPE_3__* FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (TYPE_1__*,int *,int *,int ,TYPE_2__**,unsigned int*) ;
 scalar_t__ FUNC_22 (TYPE_1__*,int *,int ,int *,int **) ;

HRESULT FUNC_23(script_ctx_t *VAR_4, jsdisp_t *VAR_5, jsstr_t *VAR_6, jsval_t *VAR_7)
{
    static const WCHAR VAR_8[] = {'i','n','d','e','x',0};
    static const WCHAR VAR_9[] = {'i','n','p','u','t',0};
    static const WCHAR VAR_10[] = {'l','a','s','t','I','n','d','e','x',0};

    RegExpInstance *VAR_11 = FUNC_20(VAR_5);
    match_result_t *VAR_12;
    unsigned VAR_13, VAR_14;
    const WCHAR *VAR_15;
    jsdisp_t *VAR_16;
    HRESULT VAR_17;

    VAR_15 = FUNC_12(VAR_6);
    if(!VAR_15)
        return VAR_0;

    if(!(VAR_11->jsregexp->flags & VAR_2)) {
        match_state_t *VAR_18;
        heap_pool_t *VAR_19;

        VAR_19 = FUNC_8(&VAR_4->tmp_heap);
        VAR_18 = FUNC_3(VAR_11->jsregexp, &VAR_4->tmp_heap, VAR_15);
        if(!VAR_18) {
            FUNC_7(VAR_19);
            return VAR_0;
        }

        VAR_17 = FUNC_22(VAR_4, &VAR_11->dispex, 0, VAR_6, &VAR_18);
        if(FUNC_0(VAR_17)) {
            FUNC_7(VAR_19);
            return VAR_17;
        }

        if(VAR_7) {
            if(VAR_17 == VAR_3) {
                IDispatch *VAR_20;

                VAR_17 = FUNC_5(VAR_4, VAR_6, VAR_18, &VAR_20);
                if(FUNC_1(VAR_17))
                    *VAR_7 = FUNC_15(VAR_20);
            }else {
                *VAR_7 = FUNC_16();
            }
        }

        FUNC_7(VAR_19);
        return VAR_3;
    }

    VAR_17 = FUNC_21(VAR_4, &VAR_11->dispex, VAR_6, VAR_1, &VAR_12, &VAR_13);
    if(FUNC_0(VAR_17))
        return VAR_17;

    if(!VAR_13) {
        FUNC_2("no match\n");

        if(VAR_7)
            *VAR_7 = FUNC_16();
        return VAR_3;
    }

    VAR_17 = FUNC_4(VAR_4, VAR_13, &VAR_16);
    if(FUNC_0(VAR_17))
        return VAR_17;

    for(VAR_14=0; VAR_14 < VAR_13; VAR_14++) {
        jsstr_t *VAR_21;

        VAR_21 = FUNC_14(VAR_6, VAR_12[VAR_14].index, VAR_12[VAR_14].length);
        if(!VAR_21) {
            VAR_17 = VAR_0;
            break;
        }

        VAR_17 = FUNC_9(VAR_16, VAR_14, FUNC_19(VAR_21));
        FUNC_13(VAR_21);
        if(FUNC_0(VAR_17))
            break;
    }

    while(FUNC_1(VAR_17)) {
        VAR_17 = FUNC_10(VAR_16, VAR_8, FUNC_17(VAR_12[VAR_13-1].index));
        if(FUNC_0(VAR_17))
            break;

        VAR_17 = FUNC_10(VAR_16, VAR_10,
                FUNC_17(VAR_12[VAR_13-1].index + VAR_12[VAR_13-1].length));
        if(FUNC_0(VAR_17))
            break;

        VAR_17 = FUNC_10(VAR_16, VAR_9, FUNC_19(VAR_6));
        break;
    }

    FUNC_6(VAR_12);

    if(FUNC_1(VAR_17) && VAR_7)
        *VAR_7 = FUNC_18(VAR_16);
    else
        FUNC_11(VAR_16);
    return VAR_17;
}
