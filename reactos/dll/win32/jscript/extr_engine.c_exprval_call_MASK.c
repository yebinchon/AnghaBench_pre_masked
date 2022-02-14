
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int * stack; } ;
typedef TYPE_3__ script_ctx_t ;
typedef int jsval_t ;
struct TYPE_9__ {int id; int disp; } ;
struct TYPE_10__ {size_t off; TYPE_1__ idref; } ;
struct TYPE_12__ {int type; TYPE_2__ u; } ;
typedef TYPE_4__ exprval_t ;
typedef int WORD ;
typedef int HRESULT ;




 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int ,unsigned int,int *,int *) ;
 int FUNC_4 (TYPE_3__*,int ,int *,int ,unsigned int,int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static HRESULT FUNC_7(script_ctx_t *VAR_1, exprval_t *VAR_2, WORD VAR_3, unsigned VAR_4, jsval_t *VAR_5, jsval_t *VAR_6)
{
    switch(VAR_2->type) {
    case 128: {
        jsval_t VAR_7 = VAR_1->stack[VAR_2->u.off];

        if(!FUNC_6(VAR_7)) {
            FUNC_0("invoke %s\n", FUNC_2(VAR_7));
            return VAR_0;
        }

        return FUNC_4(VAR_1, FUNC_5(VAR_7), ((void*)0), VAR_3, VAR_4, VAR_5, VAR_6);
    }
    case 129:
        return FUNC_3(VAR_1, VAR_2->u.idref.disp, VAR_2->u.idref.id, VAR_3, VAR_4, VAR_5, VAR_6);
    default:
        FUNC_1(0);
        return VAR_0;
    }
}
