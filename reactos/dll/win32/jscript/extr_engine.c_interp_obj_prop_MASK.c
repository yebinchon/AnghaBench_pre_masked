
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int script_ctx_t ;
struct TYPE_3__ {int member_0; int * setter; void* explicit_setter; int * getter; void* explicit_getter; int flags; int mask; } ;
typedef TYPE_1__ property_desc_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
typedef int WCHAR ;
typedef int HRESULT ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 void* VAR_4 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *,int ) ;
 unsigned int FUNC_6 (int *,int) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int const*,TYPE_1__*) ;
 int FUNC_10 (int *,int const*,int ) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static HRESULT FUNC_16(script_ctx_t *VAR_5)
{
    jsstr_t *VAR_6 = FUNC_5(VAR_5, 0);
    unsigned VAR_7 = FUNC_6(VAR_5, 1);
    const WCHAR *VAR_8;
    jsdisp_t *VAR_9;
    jsval_t VAR_10;
    HRESULT VAR_11;

    FUNC_0("%s\n", FUNC_3(VAR_6));

    VAR_10 = FUNC_14(VAR_5);


    VAR_8 = FUNC_12(VAR_6);

    FUNC_2(FUNC_8(FUNC_15(VAR_5)));
    VAR_9 = FUNC_1(FUNC_4(FUNC_15(VAR_5)));

    if(VAR_7 == VAR_1) {
        VAR_11 = FUNC_10(VAR_9, VAR_8, VAR_10);
    }else {
        property_desc_t VAR_12 = {VAR_3 | VAR_2};
        jsdisp_t *VAR_13;

        FUNC_2(FUNC_8(VAR_10));
        VAR_13 = FUNC_7(FUNC_4(VAR_10));

        VAR_12.mask = VAR_12.flags;
        if(VAR_7 == VAR_0) {
            VAR_12.explicit_getter = VAR_4;
            VAR_12.getter = VAR_13;
        }else {
            VAR_12.explicit_setter = VAR_4;
            VAR_12.setter = VAR_13;
        }

        VAR_11 = FUNC_9(VAR_9, VAR_8, &VAR_12);
        FUNC_11(VAR_13);
    }

    FUNC_13(VAR_10);
    return VAR_11;
}
