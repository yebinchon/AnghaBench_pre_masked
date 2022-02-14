
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int WORD ;
struct TYPE_3__ {int value; } ;
typedef TYPE_1__ NumberInstance ;
typedef int INT ;
typedef int HRESULT ;
typedef int DOUBLE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int *) ;
 int * FUNC_7 (int ,int) ;
 int FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (int *,int ,int*) ;
 int FUNC_11 (int *,int ,int **) ;

__attribute__((used)) static HRESULT FUNC_12(script_ctx_t *VAR_4, vdisp_t *VAR_5, WORD VAR_6, unsigned VAR_7, jsval_t *VAR_8,
        jsval_t *VAR_9)
{
    NumberInstance *VAR_10;
    DOUBLE VAR_11;
    INT VAR_12 = 0;
    jsstr_t *VAR_13;
    HRESULT VAR_14;

    FUNC_1("\n");

    if(!(VAR_10 = FUNC_6(VAR_5)))
        return FUNC_9(VAR_4, VAR_2, ((void*)0));

    if(VAR_7) {
        VAR_14 = FUNC_10(VAR_4, VAR_8[0], &VAR_12);
        if(FUNC_0(VAR_14))
            return VAR_14;

        if(VAR_12<0 || VAR_12>20)
            return FUNC_8(VAR_4, VAR_1, ((void*)0));
    }

    VAR_11 = VAR_10->value;
    if(!FUNC_2(VAR_11)) {
        VAR_14 = FUNC_11(VAR_4, FUNC_4(VAR_11), &VAR_13);
        if(FUNC_0(VAR_14))
            return VAR_14;
    }else {
        VAR_13 = FUNC_7(VAR_11, VAR_12);
        if(!VAR_13)
            return VAR_0;
    }

    if(VAR_9)
        *VAR_9 = FUNC_5(VAR_13);
    else
        FUNC_3(VAR_13);
    return VAR_3;
}
