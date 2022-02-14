
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int script_ctx_t ;
struct TYPE_5__ {int mask; int flags; void* explicit_value; void* explicit_setter; void* explicit_getter; void* setter; void* getter; int value; } ;
typedef TYPE_1__ property_desc_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
typedef scalar_t__ HRESULT ;
typedef int DISPID ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,int ,int ,int *) ;
 scalar_t__ FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_12 ;
 scalar_t__ FUNC_12 (int *,int ,int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 void* FUNC_14 (int ) ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static HRESULT FUNC_15(script_ctx_t *VAR_15, jsdisp_t *VAR_16, property_desc_t *VAR_17)
{
    DISPID VAR_18;
    jsval_t VAR_19;
    BOOL VAR_20;
    HRESULT VAR_21;

    FUNC_10(VAR_17, 0, sizeof(*VAR_17));
    VAR_17->value = FUNC_9();

    VAR_21 = FUNC_6(VAR_16, VAR_10, 0, &VAR_18);
    if(FUNC_2(VAR_21)) {
        VAR_17->mask |= VAR_5;
        VAR_21 = FUNC_7(VAR_16, VAR_18, &VAR_19);
        if(FUNC_0(VAR_21))
            return VAR_21;
        VAR_21 = FUNC_13(VAR_19, &VAR_20);
        FUNC_8(VAR_19);
        if(FUNC_0(VAR_21))
            return VAR_21;
        if(VAR_20)
            VAR_17->flags |= VAR_5;
    }else if(VAR_21 != VAR_0) {
        return VAR_21;
    }

    VAR_21 = FUNC_6(VAR_16, VAR_9, 0, &VAR_18);
    if(FUNC_2(VAR_21)) {
        VAR_17->mask |= VAR_4;
        VAR_21 = FUNC_7(VAR_16, VAR_18, &VAR_19);
        if(FUNC_0(VAR_21))
            return VAR_21;
        VAR_21 = FUNC_13(VAR_19, &VAR_20);
        FUNC_8(VAR_19);
        if(FUNC_0(VAR_21))
            return VAR_21;
        if(VAR_20)
            VAR_17->flags |= VAR_4;
    }else if(VAR_21 != VAR_0) {
        return VAR_21;
    }

    VAR_21 = FUNC_6(VAR_16, VAR_13, 0, &VAR_18);
    if(FUNC_2(VAR_21)) {
        VAR_21 = FUNC_7(VAR_16, VAR_18, &VAR_17->value);
        if(FUNC_0(VAR_21))
            return VAR_21;
        VAR_17->explicit_value = VAR_8;
    }else if(VAR_21 != VAR_0) {
        return VAR_21;
    }

    VAR_21 = FUNC_6(VAR_16, VAR_14, 0, &VAR_18);
    if(FUNC_2(VAR_21)) {
        VAR_17->mask |= VAR_6;
        VAR_21 = FUNC_7(VAR_16, VAR_18, &VAR_19);
        if(FUNC_2(VAR_21)) {
            VAR_21 = FUNC_13(VAR_19, &VAR_20);
            FUNC_8(VAR_19);
            if(FUNC_2(VAR_21) && VAR_20)
                VAR_17->flags |= VAR_6;
        }
    }else if(VAR_21 == VAR_0) {
        VAR_21 = VAR_7;
    }
    if(FUNC_0(VAR_21)) {
        FUNC_11(VAR_17);
        return VAR_21;
    }

    VAR_21 = FUNC_6(VAR_16, VAR_11, 0, &VAR_18);
    if(FUNC_2(VAR_21)) {
        VAR_17->explicit_getter = VAR_8;
        VAR_21 = FUNC_7(VAR_16, VAR_18, &VAR_19);
        if(FUNC_2(VAR_21) && !FUNC_5(VAR_19)) {
            if(!FUNC_4(VAR_19)) {
                FUNC_1("getter is not an object\n");
                FUNC_8(VAR_19);
                VAR_21 = VAR_1;
            }else {

                VAR_17->getter = FUNC_14(FUNC_3(VAR_19));
                if(!VAR_17->getter)
                    FUNC_1("getter is not JS object\n");
            }
        }
    }else if(VAR_21 == VAR_0) {
        VAR_21 = VAR_7;
    }
    if(FUNC_0(VAR_21)) {
        FUNC_11(VAR_17);
        return VAR_21;
    }

    VAR_21 = FUNC_6(VAR_16, VAR_12, 0, &VAR_18);
    if(FUNC_2(VAR_21)) {
        VAR_17->explicit_setter = VAR_8;
        VAR_21 = FUNC_7(VAR_16, VAR_18, &VAR_19);
        if(FUNC_2(VAR_21) && !FUNC_5(VAR_19)) {
            if(!FUNC_4(VAR_19)) {
                FUNC_1("setter is not an object\n");
                FUNC_8(VAR_19);
                VAR_21 = VAR_1;
            }else {

                VAR_17->setter = FUNC_14(FUNC_3(VAR_19));
                if(!VAR_17->setter)
                    FUNC_1("setter is not JS object\n");
            }
        }
    }else if(VAR_21 == VAR_0) {
        VAR_21 = VAR_7;
    }
    if(FUNC_0(VAR_21)) {
        FUNC_11(VAR_17);
        return VAR_21;
    }

    if(VAR_17->explicit_getter || VAR_17->explicit_setter) {
        if(VAR_17->explicit_value)
            VAR_21 = FUNC_12(VAR_15, VAR_3, ((void*)0));
        else if(VAR_17->mask & VAR_6)
            VAR_21 = FUNC_12(VAR_15, VAR_2, ((void*)0));
    }

    if(FUNC_0(VAR_21))
        FUNC_11(VAR_17);
    return VAR_21;
}
