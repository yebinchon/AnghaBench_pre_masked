
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vdisp_t ;
struct TYPE_6__ {int safeopt; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef scalar_t__ WORD ;
typedef int WCHAR ;
typedef int IUnknown ;
typedef int IDispatch ;
typedef int HRESULT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (TYPE_1__*,int const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int ,int *) ;
 int FUNC_9 (TYPE_1__*,int ,int **,int const**) ;

__attribute__((used)) static HRESULT FUNC_10(script_ctx_t *VAR_8, vdisp_t *VAR_9, WORD VAR_10, unsigned VAR_11, jsval_t *VAR_12,
        jsval_t *VAR_13)
{
    jsstr_t * VAR_14;
    const WCHAR *VAR_15;
    IDispatch *VAR_16;
    IUnknown *VAR_17;
    HRESULT VAR_18;

    FUNC_4("\n");

    if(VAR_10 != VAR_0) {
        FUNC_1("unsupported flags %x\n", VAR_10);
        return VAR_1;
    }

    if(VAR_8->safeopt != (VAR_3|VAR_4|VAR_5)
        && VAR_8->safeopt != VAR_4) {
        FUNC_1("Unsupported safeopt %x\n", VAR_8->safeopt);
        return VAR_1;
    }

    if(VAR_11 != 1) {
        FUNC_1("unsupported argc %d\n", VAR_11);
        return VAR_1;
    }

    VAR_18 = FUNC_9(VAR_8, VAR_12[0], &VAR_14, &VAR_15);
    if(FUNC_0(VAR_18))
        return VAR_18;

    VAR_17 = FUNC_5(VAR_8, VAR_15);
    FUNC_6(VAR_14);
    if(!VAR_17)
        return FUNC_8(VAR_8, VAR_6, ((void*)0));

    VAR_18 = FUNC_2(VAR_17, &VAR_2, (void**)&VAR_16);
    FUNC_3(VAR_17);
    if(FUNC_0(VAR_18)) {
        FUNC_1("Object does not support IDispatch\n");
        return VAR_1;
    }

    *VAR_13 = FUNC_7(VAR_16);
    return VAR_7;
}
