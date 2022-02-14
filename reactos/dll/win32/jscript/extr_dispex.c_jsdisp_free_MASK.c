
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ setter; scalar_t__ getter; } ;
struct TYPE_11__ {TYPE_1__ accessor; int val; } ;
struct TYPE_13__ {int prop_cnt; int type; TYPE_3__* builtin_info; scalar_t__ prototype; int ctx; struct TYPE_13__* props; struct TYPE_13__* name; TYPE_2__ u; } ;
typedef TYPE_4__ jsdisp_t ;
typedef TYPE_4__ dispex_prop_t ;
struct TYPE_12__ {int (* destructor ) (TYPE_4__*) ;} ;




 int FUNC_0 (char*,TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;

void FUNC_6(jsdisp_t *VAR_0)
{
    dispex_prop_t *VAR_1;

    FUNC_0("(%p)\n", VAR_0);

    for(VAR_1 = VAR_0->props; VAR_1 < VAR_0->props+VAR_0->prop_cnt; VAR_1++) {
        switch(VAR_1->type) {
        case 128:
            FUNC_3(VAR_1->u.val);
            break;
        case 129:
            if(VAR_1->u.accessor.getter)
                FUNC_2(VAR_1->u.accessor.getter);
            if(VAR_1->u.accessor.setter)
                FUNC_2(VAR_1->u.accessor.setter);
            break;
        default:
            break;
        };
        FUNC_1(VAR_1->name);
    }
    FUNC_1(VAR_0->props);
    FUNC_4(VAR_0->ctx);
    if(VAR_0->prototype)
        FUNC_2(VAR_0->prototype);

    if(VAR_0->builtin_info->destructor)
        VAR_0->builtin_info->destructor(VAR_0);
    else
        FUNC_1(VAR_0);
}
