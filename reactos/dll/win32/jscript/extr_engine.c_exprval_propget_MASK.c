
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int * stack; } ;
typedef TYPE_3__ script_ctx_t ;
typedef int jsval_t ;
struct TYPE_8__ {int id; int disp; } ;
struct TYPE_9__ {size_t off; TYPE_1__ idref; } ;
struct TYPE_11__ {int type; TYPE_2__ u; } ;
typedef TYPE_4__ exprval_t ;
typedef int HRESULT ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static HRESULT FUNC_3(script_ctx_t *VAR_1, exprval_t *VAR_2, jsval_t *VAR_3)
{
    switch(VAR_2->type) {
    case 128:
        return FUNC_2(VAR_1->stack[VAR_2->u.off], VAR_3);
    case 129:
        return FUNC_1(VAR_1, VAR_2->u.idref.disp, VAR_2->u.idref.id, VAR_3);
    default:
        FUNC_0(0);
        return VAR_0;
    }
}
