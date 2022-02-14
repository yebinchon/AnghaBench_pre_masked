
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
struct TYPE_6__ {int id; int * disp; } ;
struct TYPE_7__ {TYPE_1__ idref; } ;
struct TYPE_8__ {TYPE_2__ u; int type; } ;
typedef TYPE_3__ exprval_t ;
typedef int WCHAR ;
typedef int IDispatch ;
typedef scalar_t__ HRESULT ;
typedef int DISPID ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*,unsigned int const) ;
 scalar_t__ FUNC_5 (int *,int *,int const*,int *,unsigned int const,int *) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 unsigned int const VAR_4 ;
 unsigned int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_12 (int *,int ,int **,int const**) ;
 scalar_t__ FUNC_13 (int *,int ,int **) ;

__attribute__((used)) static HRESULT FUNC_14(script_ctx_t *VAR_5)
{
    const unsigned VAR_6 = FUNC_7(VAR_5, 0);
    jsval_t VAR_7, VAR_8;
    const WCHAR *VAR_9;
    jsstr_t *VAR_10;
    IDispatch *VAR_11;
    exprval_t VAR_12;
    DISPID VAR_13;
    HRESULT VAR_14;

    FUNC_4("%x\n", VAR_6);

    VAR_8 = FUNC_10(VAR_5);
    VAR_7 = FUNC_10(VAR_5);

    VAR_14 = FUNC_13(VAR_5, VAR_7, &VAR_11);
    FUNC_9(VAR_7);
    if(FUNC_3(VAR_14)) {
        VAR_14 = FUNC_12(VAR_5, VAR_8, &VAR_10, &VAR_9);
        if(FUNC_1(VAR_14))
            FUNC_2(VAR_11);
    }
    FUNC_9(VAR_8);
    if(FUNC_1(VAR_14))
        return VAR_14;

    VAR_14 = FUNC_5(VAR_5, VAR_11, VAR_9, ((void*)0), VAR_6, &VAR_13);
    FUNC_8(VAR_10);
    if(FUNC_3(VAR_14)) {
        VAR_12.type = VAR_1;
        VAR_12.u.idref.disp = VAR_11;
        VAR_12.u.idref.id = VAR_13;
    }else {
        FUNC_2(VAR_11);
        if(VAR_14 == VAR_0 && !(VAR_6 & VAR_4)) {
            FUNC_6(&VAR_12, VAR_2);
            VAR_14 = VAR_3;
        }else {
            FUNC_0("failed %08x\n", VAR_14);
            return VAR_14;
        }
    }

    return FUNC_11(VAR_5, &VAR_12);
}
