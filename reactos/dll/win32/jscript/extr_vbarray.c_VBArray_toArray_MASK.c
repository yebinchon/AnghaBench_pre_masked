
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
typedef int WORD ;
struct TYPE_3__ {int safearray; } ;
typedef TYPE_1__ VBArrayInstance ;
typedef int VARIANT ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,void**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int*) ;
 int FUNC_5 (int ,int,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,int ,int **) ;
 int FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int ,int *) ;
 int FUNC_14 (int *,int *) ;
 TYPE_1__* FUNC_15 (int *) ;

__attribute__((used)) static HRESULT FUNC_16(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6,
        jsval_t *VAR_7)
{
    VBArrayInstance *VAR_8;
    jsdisp_t *VAR_9;
    jsval_t VAR_10;
    VARIANT *VAR_11;
    int VAR_12, VAR_13 = 1, VAR_14, VAR_15;
    HRESULT VAR_16;

    FUNC_7("\n");

    VAR_8 = FUNC_15(VAR_3);
    if(!VAR_8)
        return FUNC_13(VAR_2, VAR_0, ((void*)0));

    for(VAR_12=1; VAR_12<=FUNC_3(VAR_8->safearray); VAR_12++) {
        FUNC_4(VAR_8->safearray, VAR_12, &VAR_15);
        FUNC_5(VAR_8->safearray, VAR_12, &VAR_14);
        VAR_13 *= VAR_14-VAR_15+1;
    }

    VAR_16 = FUNC_2(VAR_8->safearray, (void**)&VAR_11);
    if(FUNC_0(VAR_16))
        return VAR_16;

    VAR_16 = FUNC_8(VAR_2, 0, &VAR_9);
    if(FUNC_0(VAR_16)) {
        FUNC_6(VAR_8->safearray);
        return VAR_16;
    }

    for(VAR_12=0; VAR_12<VAR_13; VAR_12++) {
        VAR_16 = FUNC_14(VAR_11, &VAR_10);
        if(FUNC_1(VAR_16)) {
            VAR_16 = FUNC_9(VAR_9, VAR_12, VAR_10);
            FUNC_12(VAR_10);
        }
        if(FUNC_0(VAR_16)) {
            FUNC_6(VAR_8->safearray);
            FUNC_10(VAR_9);
            return VAR_16;
        }
        VAR_11++;
    }

    FUNC_6(VAR_8->safearray);

    if(VAR_7)
        *VAR_7 = FUNC_11(VAR_9);
    else
        FUNC_10(VAR_9);
    return VAR_1;
}
