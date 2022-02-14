
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
typedef int VARIANT ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int*,void*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int* FUNC_5 (int) ;
 int FUNC_6 (int*) ;
 scalar_t__ FUNC_7 (int *,int ,int *) ;
 scalar_t__ FUNC_8 (int *,int ,int *) ;
 scalar_t__ FUNC_9 (int *,int ,int*) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 TYPE_1__* FUNC_11 (int *) ;

__attribute__((used)) static HRESULT FUNC_12(script_ctx_t *VAR_4, vdisp_t *VAR_5, WORD VAR_6, unsigned VAR_7, jsval_t *VAR_8,
        jsval_t *VAR_9)
{
    VBArrayInstance *VAR_10;
    int VAR_11, *VAR_12;
    VARIANT VAR_13;
    HRESULT VAR_14;

    FUNC_3("\n");

    VAR_10 = FUNC_11(VAR_5);
    if(!VAR_10)
        return FUNC_8(VAR_4, VAR_3, ((void*)0));

    if(VAR_7 < FUNC_1(VAR_10->safearray))
        return FUNC_7(VAR_4, VAR_2, ((void*)0));

    VAR_12 = FUNC_5(sizeof(int)*VAR_7);
    if(!VAR_12)
        return VAR_1;

    for(VAR_11=0; VAR_11<VAR_7; VAR_11++) {
        VAR_14 = FUNC_9(VAR_4, VAR_8[VAR_11], VAR_12+VAR_11);
        if(FUNC_0(VAR_14)) {
            FUNC_6(VAR_12);
            return VAR_14;
        }
    }

    VAR_14 = FUNC_2(VAR_10->safearray, VAR_12, (void*)&VAR_13);
    FUNC_6(VAR_12);
    if(VAR_14 == VAR_0)
        return FUNC_7(VAR_4, VAR_2, ((void*)0));
    else if(FUNC_0(VAR_14))
        return VAR_14;

    if(VAR_9) {
        VAR_14 = FUNC_10(&VAR_13, VAR_9);
        FUNC_4(&VAR_13);
    }
    return VAR_14;
}
