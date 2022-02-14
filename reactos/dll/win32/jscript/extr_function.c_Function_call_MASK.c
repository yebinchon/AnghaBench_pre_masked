
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int WORD ;
struct TYPE_6__ {TYPE_1__* vtbl; } ;
struct TYPE_5__ {int (* call ) (int *,TYPE_2__*,int *,int ,unsigned int,int *,int *) ;} ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef TYPE_2__ FunctionInstance ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,TYPE_2__*,int *,int ,unsigned int,int *,int *) ;
 int FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (int *,int ,int **) ;

__attribute__((used)) static HRESULT FUNC_9(script_ctx_t *VAR_1, vdisp_t *VAR_2, WORD VAR_3, unsigned VAR_4, jsval_t *VAR_5,
        jsval_t *VAR_6)
{
    FunctionInstance *VAR_7;
    IDispatch *VAR_8 = ((void*)0);
    unsigned VAR_9 = 0;
    HRESULT VAR_10;

    FUNC_2("\n");

    if(!(VAR_7 = FUNC_3(VAR_2)))
        return FUNC_7(VAR_1, VAR_0, ((void*)0));

    if(VAR_4) {
        if(!FUNC_5(VAR_5[0]) && !FUNC_4(VAR_5[0])) {
            VAR_10 = FUNC_8(VAR_1, VAR_5[0], &VAR_8);
            if(FUNC_0(VAR_10))
                return VAR_10;
        }

        VAR_9 = VAR_4-1;
    }

    VAR_10 = VAR_7->vtbl->call(VAR_1, VAR_7, VAR_8, VAR_3, VAR_9, VAR_5 + 1, VAR_6);

    if(VAR_8)
        FUNC_1(VAR_8);
    return VAR_10;
}
