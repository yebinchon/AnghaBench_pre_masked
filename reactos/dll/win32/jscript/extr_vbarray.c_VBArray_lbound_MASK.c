
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int WORD ;
struct TYPE_3__ {int safearray; } ;
typedef TYPE_1__ VBArrayInstance ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,int,int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;
 scalar_t__ FUNC_5 (int *,int ,int *) ;
 scalar_t__ FUNC_6 (int *,int ,int*) ;
 TYPE_1__* FUNC_7 (int *) ;

__attribute__((used)) static HRESULT FUNC_8(script_ctx_t *VAR_4, vdisp_t *VAR_5, WORD VAR_6, unsigned VAR_7, jsval_t *VAR_8,
        jsval_t *VAR_9)
{
    VBArrayInstance *VAR_10;
    int VAR_11;
    HRESULT VAR_12;

    FUNC_2("\n");

    VAR_10 = FUNC_7(VAR_5);
    if(!VAR_10)
        return FUNC_5(VAR_4, VAR_2, ((void*)0));

    if(VAR_7) {
        VAR_12 = FUNC_6(VAR_4, VAR_8[0], &VAR_11);
        if(FUNC_0(VAR_12))
            return VAR_12;
    } else
        VAR_11 = 1;

    VAR_12 = FUNC_1(VAR_10->safearray, VAR_11, &VAR_11);
    if(VAR_12 == VAR_0)
        return FUNC_4(VAR_4, VAR_1, ((void*)0));
    else if(FUNC_0(VAR_12))
        return VAR_12;

    if(VAR_9)
        *VAR_9 = FUNC_3(VAR_11);
    return VAR_3;
}
