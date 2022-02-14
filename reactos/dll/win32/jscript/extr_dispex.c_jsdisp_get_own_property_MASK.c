
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int mask; int flags; int * setter; int * getter; void* explicit_setter; void* explicit_getter; int value; void* explicit_value; } ;
typedef TYPE_3__ property_desc_t ;
typedef int jsdisp_t ;
struct TYPE_9__ {int setter; int getter; } ;
struct TYPE_10__ {TYPE_1__ accessor; } ;
struct TYPE_12__ {int type; int flags; TYPE_2__ u; } ;
typedef TYPE_4__ dispex_prop_t ;
typedef int WCHAR ;
typedef int HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (int *,int ,int const*,TYPE_4__**) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (int *,TYPE_4__*,int *) ;
 int FUNC_5 (int const*) ;

HRESULT FUNC_6(jsdisp_t *VAR_6, const WCHAR *VAR_7, BOOL VAR_8,
                                property_desc_t *VAR_9)
{
    dispex_prop_t *VAR_10;
    HRESULT VAR_11;

    VAR_11 = FUNC_1(VAR_6, FUNC_5(VAR_7), VAR_7, &VAR_10);
    if(FUNC_0(VAR_11))
        return VAR_11;

    if(!VAR_10)
        return VAR_0;

    FUNC_3(VAR_9, 0, sizeof(*VAR_9));

    switch(VAR_10->type) {
    case 129:
    case 128:
        VAR_9->mask |= VAR_3;
        VAR_9->explicit_value = VAR_5;
        if(!VAR_8) {
            VAR_11 = FUNC_4(VAR_6, VAR_10, &VAR_9->value);
            if(FUNC_0(VAR_11))
                return VAR_11;
        }
        break;
    case 130:
        VAR_9->explicit_getter = VAR_9->explicit_setter = VAR_5;
        if(!VAR_8) {
            VAR_9->getter = VAR_10->u.accessor.getter
                ? FUNC_2(VAR_10->u.accessor.getter) : ((void*)0);
            VAR_9->setter = VAR_10->u.accessor.setter
                ? FUNC_2(VAR_10->u.accessor.setter) : ((void*)0);
        }
        break;
    default:
        return VAR_0;
    }

    VAR_9->flags = VAR_10->flags & (VAR_2 | VAR_3 | VAR_1);
    VAR_9->mask |= VAR_2 | VAR_1;
    return VAR_4;
}
