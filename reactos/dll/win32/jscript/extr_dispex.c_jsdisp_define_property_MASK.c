
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int flags; int mask; int * setter; scalar_t__ explicit_setter; int * getter; scalar_t__ explicit_getter; int value; scalar_t__ explicit_value; } ;
typedef TYPE_3__ property_desc_t ;
struct TYPE_15__ {int ctx; } ;
typedef TYPE_4__ jsdisp_t ;
struct TYPE_12__ {int * setter; int * getter; } ;
struct TYPE_13__ {TYPE_1__ accessor; void* val; } ;
struct TYPE_16__ {scalar_t__ type; int flags; TYPE_2__ u; } ;
typedef TYPE_5__ dispex_prop_t ;
typedef int WCHAR ;
typedef int HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*,int ,int,...) ;
 TYPE_5__* FUNC_3 (TYPE_4__*,int const*,scalar_t__,int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (TYPE_4__*,int ,int const*,TYPE_5__**) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,void**) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (int ,void*,int *) ;
 void* FUNC_12 () ;
 int FUNC_13 (int const*) ;
 int FUNC_14 (int ,int ,int const*) ;

HRESULT FUNC_15(jsdisp_t *VAR_11, const WCHAR *VAR_12, property_desc_t *VAR_13)
{
    dispex_prop_t *VAR_14;
    HRESULT VAR_15;

    VAR_15 = FUNC_6(VAR_11, FUNC_13(VAR_12), VAR_12, &VAR_14);
    if(FUNC_0(VAR_15))
        return VAR_15;

    if(!VAR_14 && !(VAR_14 = FUNC_3(VAR_11, VAR_12, VAR_7, 0)))
       return VAR_0;

    if(VAR_14->type == VAR_7 || VAR_14->type == VAR_9) {
        VAR_14->flags = VAR_13->flags;
        if(VAR_13->explicit_getter || VAR_13->explicit_setter) {
            VAR_14->type = VAR_6;
            VAR_14->u.accessor.getter = VAR_13->getter ? FUNC_7(VAR_13->getter) : ((void*)0);
            VAR_14->u.accessor.setter = VAR_13->setter ? FUNC_7(VAR_13->setter) : ((void*)0);
            FUNC_2("%s = accessor { get: %p set: %p }\n", FUNC_5(VAR_12),
                  *VAR_14->u.accessor.getter, VAR_14->u.accessor.setter);
        }else {
            VAR_14->type = VAR_8;
            if(VAR_13->explicit_value) {
                VAR_15 = FUNC_9(VAR_13->value, &VAR_14->u.val);
                if(FUNC_0(VAR_15))
                    return VAR_15;
            }else {
                VAR_14->u.val = FUNC_12();
            }
            FUNC_2("%s = %s\n", FUNC_5(VAR_12), FUNC_4(VAR_14->u.val));
        }
        return VAR_10;
    }

    FUNC_2("existing prop %s prop flags %x desc flags %x desc mask %x\n", FUNC_5(VAR_12),
          VAR_14->flags, VAR_13->flags, VAR_13->mask);

    if(!(VAR_14->flags & VAR_3)) {
        if(((VAR_13->mask & VAR_3) && (VAR_13->flags & VAR_3))
           || ((VAR_13->mask & VAR_4)
               && ((VAR_13->flags & VAR_4) != (VAR_14->flags & VAR_4))))
            return FUNC_14(VAR_11->ctx, VAR_1, VAR_12);
    }

    if(VAR_13->explicit_value || (VAR_13->mask & VAR_5)) {
        if(VAR_14->type == VAR_6) {
            if(!(VAR_14->flags & VAR_3))
                return FUNC_14(VAR_11->ctx, VAR_1, VAR_12);
            if(VAR_14->u.accessor.getter)
                FUNC_8(VAR_14->u.accessor.getter);
            if(VAR_14->u.accessor.setter)
                FUNC_8(VAR_14->u.accessor.setter);

            VAR_14->type = VAR_8;
            VAR_15 = FUNC_9(VAR_13->value, &VAR_14->u.val);
            if(FUNC_0(VAR_15)) {
                VAR_14->u.val = FUNC_12();
                return VAR_15;
            }
        }else {
            if(!(VAR_14->flags & VAR_3) && !(VAR_14->flags & VAR_5)) {
                if((VAR_13->mask & VAR_5) && (VAR_13->flags & VAR_5))
                    return FUNC_14(VAR_11->ctx, VAR_2, VAR_12);
                if(VAR_13->explicit_value) {
                    if(VAR_14->type == VAR_8) {
                        BOOL VAR_16;
                        VAR_15 = FUNC_11(VAR_13->value, VAR_14->u.val, &VAR_16);
                        if(FUNC_0(VAR_15))
                            return VAR_15;
                        if(!VAR_16)
                            return FUNC_14(VAR_11->ctx, VAR_2, VAR_12);
                    }else {
                        FUNC_1("redefinition of property type %d\n", VAR_14->type);
                    }
                }
            }
            if(VAR_13->explicit_value) {
                if(VAR_14->type == VAR_8)
                    FUNC_10(VAR_14->u.val);
                else
                    VAR_14->type = VAR_8;
                VAR_15 = FUNC_9(VAR_13->value, &VAR_14->u.val);
                if(FUNC_0(VAR_15)) {
                    VAR_14->u.val = FUNC_12();
                    return VAR_15;
                }
            }
        }
    }else if(VAR_13->explicit_getter || VAR_13->explicit_setter) {
        if(VAR_14->type != VAR_6) {
            if(!(VAR_14->flags & VAR_3))
                return FUNC_14(VAR_11->ctx, VAR_1, VAR_12);
            if(VAR_14->type == VAR_8)
                FUNC_10(VAR_14->u.val);
            VAR_14->type = VAR_6;
            VAR_14->u.accessor.getter = VAR_14->u.accessor.setter = ((void*)0);
        }else if(!(VAR_14->flags & VAR_3)) {
            if((VAR_13->explicit_getter && VAR_13->getter != VAR_14->u.accessor.getter)
               || (VAR_13->explicit_setter && VAR_13->setter != VAR_14->u.accessor.setter))
                return FUNC_14(VAR_11->ctx, VAR_1, VAR_12);
        }

        if(VAR_13->explicit_getter) {
            if(VAR_14->u.accessor.getter) {
                FUNC_8(VAR_14->u.accessor.getter);
                VAR_14->u.accessor.getter = ((void*)0);
            }
            if(VAR_13->getter)
                VAR_14->u.accessor.getter = FUNC_7(VAR_13->getter);
        }
        if(VAR_13->explicit_setter) {
            if(VAR_14->u.accessor.setter) {
                FUNC_8(VAR_14->u.accessor.setter);
                VAR_14->u.accessor.setter = ((void*)0);
            }
            if(VAR_13->setter)
                VAR_14->u.accessor.setter = FUNC_7(VAR_13->setter);
        }
    }

    VAR_14->flags = (VAR_14->flags & ~VAR_13->mask) | (VAR_13->flags & VAR_13->mask);
    return VAR_10;
}
