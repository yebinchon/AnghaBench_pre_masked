
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int property_desc_t ;
typedef int jsval_t ;
struct TYPE_9__ {int IDispatchEx_iface; } ;
typedef TYPE_1__ jsdisp_t ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef int DISPID ;
typedef int BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int ,int *) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_9 (TYPE_1__*,int ,int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 TYPE_1__* FUNC_13 (int *) ;
 int FUNC_14 (int *,int ,int **) ;
 int FUNC_15 (int *,TYPE_1__*,int *) ;

__attribute__((used)) static HRESULT FUNC_16(script_ctx_t *VAR_4, jsdisp_t *VAR_5, jsval_t VAR_6)
{
    DISPID VAR_7 = VAR_0;
    property_desc_t VAR_8;
    IDispatch *VAR_9;
    jsdisp_t *VAR_10, *VAR_11;
    jsval_t VAR_12;
    BSTR VAR_13;
    HRESULT VAR_14;

    VAR_14 = FUNC_14(VAR_4, VAR_6, &VAR_9);
    if(FUNC_0(VAR_14))
        return VAR_14;

    if(!(VAR_10 = FUNC_13(VAR_9))) {
        FUNC_1("non-JS list obj\n");
        FUNC_3(VAR_9);
        return VAR_1;
    }

    while(1) {
        VAR_14 = FUNC_8(VAR_10, VAR_7, VAR_3, &VAR_7);
        if(VAR_14 != VAR_2)
            break;

        VAR_14 = FUNC_9(VAR_10, VAR_7, &VAR_12);
        if(FUNC_0(VAR_14))
            break;

        if(!FUNC_6(VAR_12) || !FUNC_5(VAR_12) || !(VAR_11 = FUNC_13(FUNC_5(VAR_12)))) {
            FUNC_11(VAR_12);
            break;
        }

        VAR_14 = FUNC_15(VAR_4, VAR_11, &VAR_8);
        FUNC_10(VAR_11);
        if(FUNC_0(VAR_14))
            break;

        VAR_14 = FUNC_2(&VAR_10->IDispatchEx_iface, VAR_7, &VAR_13);
        if(FUNC_4(VAR_14))
            VAR_14 = FUNC_7(VAR_5, VAR_13, &VAR_8);
        FUNC_12(&VAR_8);
        if(FUNC_0(VAR_14))
            break;
    }

    FUNC_10(VAR_10);
    return FUNC_0(VAR_14) ? VAR_14 : VAR_2;
}
