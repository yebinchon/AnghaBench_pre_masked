
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int disp; int dispex; int jsdisp; } ;
struct TYPE_11__ {TYPE_1__ u; } ;
typedef TYPE_2__ vdisp_t ;
struct TYPE_12__ {int lcid; } ;
typedef TYPE_3__ script_ctx_t ;
typedef int property_desc_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int WORD ;
typedef int WCHAR ;
typedef scalar_t__ HRESULT ;
typedef int DISPID ;
typedef scalar_t__ BSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *,scalar_t__*,int,int ,int *) ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (int ,int const*,int ,int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *,scalar_t__) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int) ;
 int FUNC_15 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_16 (TYPE_3__*,int ,int **) ;

__attribute__((used)) static HRESULT FUNC_17(script_ctx_t *VAR_7, vdisp_t *VAR_8, WORD VAR_9, unsigned VAR_10, jsval_t *VAR_11,
        jsval_t *VAR_12)
{
    jsstr_t *VAR_13;
    DISPID VAR_14;
    BSTR VAR_15;
    HRESULT VAR_16;

    FUNC_6("\n");

    if(!VAR_10) {
        if(VAR_12)
            *VAR_12 = FUNC_14(VAR_2);
        return VAR_4;
    }

    VAR_16 = FUNC_16(VAR_7, VAR_11[0], &VAR_13);
    if(FUNC_0(VAR_16))
        return VAR_16;

    if(FUNC_8(VAR_8)) {
        property_desc_t VAR_17;
        const WCHAR *VAR_18;

        VAR_18 = FUNC_10(VAR_13);
        if(!VAR_18) {
            FUNC_13(VAR_13);
            return VAR_1;
        }

        VAR_16 = FUNC_9(VAR_8->u.jsdisp, VAR_18, VAR_5, &VAR_17);
        FUNC_13(VAR_13);
        if(FUNC_0(VAR_16) && VAR_16 != VAR_0)
            return VAR_16;

        if(VAR_12) *VAR_12 = FUNC_14(VAR_16 == VAR_4);
        return VAR_4;
    }


    VAR_15 = FUNC_4(((void*)0), FUNC_12(VAR_13));
    if(VAR_15)
        FUNC_11(VAR_13, VAR_15);
    FUNC_13(VAR_13);
    if(!VAR_15)
        return VAR_1;

    if(FUNC_7(VAR_8))
        VAR_16 = FUNC_1(VAR_8->u.dispex, VAR_15, FUNC_15(VAR_7, VAR_6), &VAR_14);
    else
        VAR_16 = FUNC_2(VAR_8->u.disp, &VAR_3, &VAR_15, 1, VAR_7->lcid, &VAR_14);

    FUNC_5(VAR_15);
    if(VAR_12)
        *VAR_12 = FUNC_14(FUNC_3(VAR_16));
    return VAR_4;
}
