
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int disp; } ;
struct TYPE_11__ {int flags; TYPE_2__ u; } ;
typedef TYPE_3__ vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
typedef int WORD ;
struct TYPE_12__ {TYPE_1__* vtbl; } ;
struct TYPE_9__ {int (* call ) (int *,TYPE_4__*,int *,int ,unsigned int,int *,int *) ;} ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef TYPE_4__ FunctionInstance ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (char*) ;
 int VAR_6 ;
 int FUNC_5 (int *,int *,unsigned int*,int **) ;
 int FUNC_6 (int *,int ,int *,int ,unsigned int,int *,int *) ;
 TYPE_4__* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *,TYPE_4__*,int *,int ,unsigned int,int *,int *) ;
 int FUNC_18 (int *,int ,int *) ;
 int FUNC_19 (int *,int ,int **) ;

__attribute__((used)) static HRESULT FUNC_20(script_ctx_t *VAR_7, vdisp_t *VAR_8, WORD VAR_9, unsigned VAR_10, jsval_t *VAR_11, jsval_t *VAR_12)
{
    FunctionInstance *VAR_13;
    jsval_t *VAR_14 = ((void*)0);
    unsigned VAR_15, VAR_16 = 0;
    IDispatch *VAR_17 = ((void*)0);
    HRESULT VAR_18 = VAR_5;

    FUNC_4("\n");

    if(!(VAR_13 = FUNC_7(VAR_8)) && (VAR_8->flags & VAR_6))
        return FUNC_18(VAR_7, VAR_4, ((void*)0));

    if(VAR_10) {
        if(!FUNC_14(VAR_11[0]) && !FUNC_12(VAR_11[0])) {
            VAR_18 = FUNC_19(VAR_7, VAR_11[0], &VAR_17);
            if(FUNC_0(VAR_18))
                return VAR_18;
        }
    }

    if(VAR_10 >= 2) {
        jsdisp_t *VAR_19 = ((void*)0);

        if(FUNC_13(VAR_11[1])) {
            VAR_19 = FUNC_10(FUNC_8(VAR_11[1]));
            if(VAR_19 &&
               (!FUNC_11(VAR_19, VAR_3) && !FUNC_11(VAR_19, VAR_2) )) {
                FUNC_15(VAR_19);
                VAR_19 = ((void*)0);
            }
        }

        if(VAR_19) {
            VAR_18 = FUNC_5(VAR_7, VAR_19, &VAR_16, &VAR_14);
            FUNC_15(VAR_19);
        }else {
            FUNC_1("throw TypeError\n");
            VAR_18 = VAR_1;
        }
    }

    if(FUNC_3(VAR_18)) {
        if(VAR_13) {
            VAR_18 = VAR_13->vtbl->call(VAR_7, VAR_13, VAR_17, VAR_9, VAR_16, VAR_14, VAR_12);
        }else {
            jsval_t VAR_20;
            VAR_18 = FUNC_6(VAR_7, VAR_8->u.disp, VAR_17, VAR_0, VAR_16, VAR_14, &VAR_20);
            if(FUNC_3(VAR_18)) {
                if(VAR_12)
                    *VAR_12 = VAR_20;
                else
                    FUNC_16(VAR_20);
            }
        }
    }

    if(VAR_17)
        FUNC_2(VAR_17);
    for(VAR_15=0; VAR_15 < VAR_16; VAR_15++)
        FUNC_16(VAR_14[VAR_15]);
    FUNC_9(VAR_14);
    return VAR_18;
}
