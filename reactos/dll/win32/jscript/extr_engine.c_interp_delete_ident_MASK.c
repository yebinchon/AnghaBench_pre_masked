
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int script_ctx_t ;
struct TYPE_6__ {int disp; int id; } ;
struct TYPE_7__ {TYPE_1__ idref; } ;
struct TYPE_8__ {int type; TYPE_2__ u; } ;
typedef TYPE_3__ exprval_t ;
typedef int HRESULT ;
typedef int BSTR ;
typedef int BOOL ;





 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_2 ;
 int FUNC_4 (int const) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int const,TYPE_3__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_11(script_ctx_t *VAR_3)
{
    const BSTR VAR_4 = FUNC_7(VAR_3, 0);
    exprval_t VAR_5;
    BOOL VAR_6;
    HRESULT VAR_7;

    FUNC_3("%s\n", FUNC_4(VAR_4));

    VAR_7 = FUNC_8(VAR_3, VAR_4, &VAR_5);
    if(FUNC_0(VAR_7))
        return VAR_7;

    switch(VAR_5.type) {
    case 128:
        VAR_6 = VAR_1;
        break;
    case 130:
        VAR_7 = FUNC_5(VAR_5.u.idref.disp, VAR_5.u.idref.id, &VAR_6);
        FUNC_2(VAR_5.u.idref.disp);
        if(FUNC_0(VAR_7))
            return VAR_7;
        break;
    case 129:
        VAR_6 = VAR_2;
        break;
    default:
        FUNC_1("Unsupported exprval\n");
        FUNC_6(&VAR_5);
        return VAR_0;
    }


    return FUNC_10(VAR_3, FUNC_9(VAR_6));
}
