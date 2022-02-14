
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int script_ctx_t ;
struct TYPE_5__ {int disp; int id; } ;
struct TYPE_6__ {int hres; int off; TYPE_1__ idref; } ;
struct TYPE_7__ {int type; TYPE_2__ u; } ;
typedef TYPE_3__ exprval_t ;
typedef int HRESULT ;






 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_7(script_ctx_t *VAR_1, exprval_t *VAR_2)
{
    HRESULT VAR_3;

    switch(VAR_2->type) {
    case 129:
        FUNC_2(0);
    case 131:
        VAR_3 = FUNC_6(VAR_1, FUNC_3(VAR_2->u.idref.disp));
        if(FUNC_1(VAR_3))
            VAR_3 = FUNC_6(VAR_1, FUNC_4(VAR_2->u.idref.id));
        else
            FUNC_0(VAR_2->u.idref.disp);
        return VAR_3;
    case 128:
        VAR_3 = FUNC_6(VAR_1, FUNC_4(VAR_2->u.off));
        if(FUNC_1(VAR_3))
            VAR_3 = FUNC_6(VAR_1, FUNC_5());
        return VAR_3;
    case 130:
        VAR_3 = FUNC_6(VAR_1, FUNC_5());
        if(FUNC_1(VAR_3))
            VAR_3 = FUNC_6(VAR_1, FUNC_4(VAR_2->u.hres));
        return VAR_3;
    }

    FUNC_2(0);
    return VAR_0;
}
