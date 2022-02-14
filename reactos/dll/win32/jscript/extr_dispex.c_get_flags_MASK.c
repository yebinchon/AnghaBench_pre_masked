
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* prototype; } ;
typedef TYPE_2__ jsdisp_t ;
struct TYPE_8__ {int ref; } ;
struct TYPE_10__ {scalar_t__ type; int flags; TYPE_1__ u; } ;
typedef TYPE_3__ dispex_prop_t ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static DWORD FUNC_1(jsdisp_t *VAR_2, dispex_prop_t *VAR_3)
{
    if(VAR_3->type == VAR_1) {
        dispex_prop_t *VAR_4 = FUNC_0(VAR_2->prototype, VAR_3->u.ref);
        if(!VAR_4) {
            VAR_3->type = VAR_0;
            return 0;
        }

        return FUNC_1(VAR_2->prototype, VAR_4);
    }

    return VAR_3->flags;
}
