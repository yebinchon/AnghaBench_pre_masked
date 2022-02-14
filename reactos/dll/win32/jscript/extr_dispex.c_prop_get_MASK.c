
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef void* jsval_t ;
struct TYPE_19__ {TYPE_3__* builtin_info; int ctx; TYPE_6__* props; struct TYPE_19__* prototype; } ;
typedef TYPE_5__ jsdisp_t ;
struct TYPE_16__ {int getter; } ;
struct TYPE_18__ {int ref; int idx; TYPE_2__ accessor; void* val; TYPE_1__* p; } ;
struct TYPE_20__ {int type; int name; TYPE_4__ u; } ;
typedef TYPE_6__ dispex_prop_t ;
struct TYPE_17__ {int (* idx_get ) (TYPE_5__*,int ,void**) ;} ;
struct TYPE_15__ {int flags; int name; int * invoke; int (* getter ) (int ,TYPE_5__*,void**) ;} ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int ,int *,int ,int *,TYPE_5__**) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int ,int ,int ,int ,int *,void**) ;
 int FUNC_9 (void*,void**) ;
 void* FUNC_10 (TYPE_5__*) ;
 void* FUNC_11 () ;
 int FUNC_12 (int ,TYPE_5__*,void**) ;
 int FUNC_13 (TYPE_5__*,int ,void**) ;
 int FUNC_14 (TYPE_5__*) ;

__attribute__((used)) static HRESULT FUNC_15(jsdisp_t *VAR_4, dispex_prop_t *VAR_5, jsval_t *VAR_6)
{
    jsdisp_t *VAR_7 = VAR_4;
    HRESULT VAR_8;

    while(VAR_5->type == VAR_2) {
        VAR_7 = VAR_7->prototype;
        VAR_5 = VAR_7->props + VAR_5->u.ref;
    }

    switch(VAR_5->type) {
    case 130:
        if(VAR_5->u.p->getter) {
            VAR_8 = VAR_5->u.p->getter(VAR_4->ctx, VAR_4, VAR_6);
        }else {
            jsdisp_t *VAR_9;

            FUNC_3(VAR_5->u.p->invoke != ((void*)0));
            VAR_8 = FUNC_4(VAR_4->ctx, VAR_5->u.p->invoke, VAR_5->u.p->name, ((void*)0),
                    VAR_5->u.p->flags, ((void*)0), &VAR_9);
            if(FUNC_1(VAR_8))
                break;

            VAR_5->type = 128;
            VAR_5->u.val = FUNC_10(VAR_9);

            FUNC_7(VAR_9);
            *VAR_6 = FUNC_10(VAR_9);
        }
        break;
    case 128:
        VAR_8 = FUNC_9(VAR_5->u.val, VAR_6);
        break;
    case 131:
        if(VAR_5->u.accessor.getter) {
            VAR_8 = FUNC_8(VAR_5->u.accessor.getter, FUNC_14(VAR_4),
                                     VAR_0, 0, ((void*)0), VAR_6);
        }else {
            *VAR_6 = FUNC_11();
            VAR_8 = VAR_3;
        }
        break;
    case 129:
        VAR_8 = VAR_7->builtin_info->idx_get(VAR_7, VAR_5->u.idx, VAR_6);
        break;
    default:
        FUNC_0("type %d\n", VAR_5->type);
        return VAR_1;
    }

    if(FUNC_1(VAR_8)) {
        FUNC_2("fail %08x\n", VAR_8);
        return VAR_8;
    }

    FUNC_2("%s ret %s\n", FUNC_6(VAR_5->name), FUNC_5(*VAR_6));
    return VAR_8;
}
