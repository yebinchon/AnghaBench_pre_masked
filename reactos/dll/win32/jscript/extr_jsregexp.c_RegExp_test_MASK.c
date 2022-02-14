
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vdisp_t ;
struct TYPE_4__ {int tmp_heap; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int match_state_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int heap_pool_t ;
typedef int WORD ;
typedef int HRESULT ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int *,int ,int *,int **,int *) ;

__attribute__((used)) static HRESULT FUNC_9(script_ctx_t *VAR_1, vdisp_t *VAR_2, WORD VAR_3, unsigned VAR_4, jsval_t *VAR_5,
        jsval_t *VAR_6)
{
    match_state_t *VAR_7;
    jsstr_t *VAR_8;
    heap_pool_t *VAR_9;
    BOOL VAR_10;
    HRESULT VAR_11;

    FUNC_1("\n");

    VAR_9 = FUNC_3(&VAR_1->tmp_heap);
    VAR_11 = FUNC_8(VAR_1, VAR_2, VAR_4 ? VAR_5[0] : FUNC_7(VAR_8 = FUNC_5()), ((void*)0), &VAR_7, &VAR_10);
    FUNC_2(VAR_9);
    if(!VAR_4)
        FUNC_4(VAR_8);
    if(FUNC_0(VAR_11))
        return VAR_11;

    if(VAR_6)
        *VAR_6 = FUNC_6(VAR_10);
    return VAR_0;
}
