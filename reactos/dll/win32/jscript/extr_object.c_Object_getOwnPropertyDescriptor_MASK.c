
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vdisp_t ;
typedef int script_ctx_t ;
struct TYPE_4__ {int flags; int value; int * setter; int * getter; scalar_t__ explicit_setter; scalar_t__ explicit_getter; } ;
typedef TYPE_1__ property_desc_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
typedef int WORD ;
typedef int WCHAR ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (char*) ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (int *,int *,int **) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int *,int const*,int ,TYPE_1__*) ;
 scalar_t__ FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 () ;
 int FUNC_15 (TYPE_1__*) ;
 int VAR_12 ;
 scalar_t__ FUNC_16 (int *,int ,int *) ;
 scalar_t__ FUNC_17 (int *,int ,int **,int const**) ;
 int * FUNC_18 (int ) ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static HRESULT FUNC_19(script_ctx_t *VAR_15, vdisp_t *VAR_16, WORD VAR_17,
                                               unsigned VAR_18, jsval_t *VAR_19, jsval_t *VAR_20)
{
    property_desc_t VAR_21;
    jsdisp_t *VAR_22, *VAR_23;
    const WCHAR *VAR_24;
    jsstr_t *VAR_25;
    HRESULT VAR_26;

    FUNC_3("\n");

    if(VAR_18 < 1 || !FUNC_6(VAR_19[0]))
        return FUNC_16(VAR_15, VAR_3, ((void*)0));
    VAR_22 = FUNC_18(FUNC_5(VAR_19[0]));
    if(!VAR_22) {
        FUNC_1("not implemented non-JS object\n");
        return VAR_1;
    }

    VAR_26 = FUNC_17(VAR_15, VAR_18 >= 2 ? VAR_19[1] : FUNC_14(), &VAR_25, &VAR_24);
    if(FUNC_0(VAR_26))
        return VAR_26;

    VAR_26 = FUNC_8(VAR_22, VAR_24, VAR_2, &VAR_21);
    FUNC_11(VAR_25);
    if(VAR_26 == VAR_0) {
        if(VAR_20) *VAR_20 = FUNC_14();
        return VAR_8;
    }
    if(FUNC_0(VAR_26))
        return VAR_26;

    VAR_26 = FUNC_4(VAR_15, ((void*)0), &VAR_23);
    if(FUNC_0(VAR_26))
        return VAR_26;

    if(VAR_21.explicit_getter || VAR_21.explicit_setter) {
        VAR_26 = FUNC_7(VAR_23, VAR_11, VAR_4,
                VAR_21.getter ? FUNC_13(VAR_21.getter) : FUNC_14());
        if(FUNC_2(VAR_26))
            VAR_26 = FUNC_7(VAR_23, VAR_12, VAR_4,
                    VAR_21.setter ? FUNC_13(VAR_21.setter) : FUNC_14());
    }else {
        VAR_26 = FUNC_9(VAR_23, VAR_13, VAR_21.value);
        if(FUNC_2(VAR_26))
            VAR_26 = FUNC_7(VAR_23, VAR_14, VAR_4,
                    FUNC_12(!!(VAR_21.flags & VAR_7)));
    }
    if(FUNC_2(VAR_26))
        VAR_26 = FUNC_7(VAR_23, VAR_10, VAR_4,
                FUNC_12(!!(VAR_21.flags & VAR_6)));
    if(FUNC_2(VAR_26))
        VAR_26 = FUNC_7(VAR_23, VAR_9, VAR_4,
                FUNC_12(!!(VAR_21.flags & VAR_5)));

    FUNC_15(&VAR_21);
    if(FUNC_2(VAR_26) && VAR_20)
        *VAR_20 = FUNC_13(VAR_23);
    else
        FUNC_10(VAR_23);
    return VAR_26;
}
