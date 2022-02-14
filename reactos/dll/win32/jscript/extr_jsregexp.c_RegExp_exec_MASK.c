
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vdisp_t ;
struct TYPE_5__ {int tmp_heap; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int match_state_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int heap_pool_t ;
typedef int WORD ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int *,int *,int **) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*,int *,int ,int **,int **,scalar_t__*) ;

__attribute__((used)) static HRESULT FUNC_12(script_ctx_t *VAR_0, vdisp_t *VAR_1, WORD VAR_2, unsigned VAR_3, jsval_t *VAR_4,
        jsval_t *VAR_5)
{
    match_state_t *VAR_6;
    heap_pool_t *VAR_7;
    BOOL VAR_8;
    jsstr_t *VAR_9;
    HRESULT VAR_10;

    FUNC_2("\n");

    VAR_7 = FUNC_5(&VAR_0->tmp_heap);

    VAR_10 = FUNC_11(VAR_0, VAR_1, VAR_3 ? VAR_4[0] : FUNC_10(FUNC_6()), &VAR_9, &VAR_6, &VAR_8);
    if(FUNC_0(VAR_10)) {
        FUNC_4(VAR_7);
        return VAR_10;
    }

    if(VAR_5) {
        if(VAR_8) {
            IDispatch *VAR_11;

            VAR_10 = FUNC_3(VAR_0, VAR_9, VAR_6, &VAR_11);
            if(FUNC_1(VAR_10))
                *VAR_5 = FUNC_8(VAR_11);
        }else {
            *VAR_5 = FUNC_9();
        }
    }

    FUNC_4(VAR_7);
    FUNC_7(VAR_9);
    return VAR_10;
}
