
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int disp; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
typedef TYPE_2__ vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
typedef int WORD ;
typedef int HRESULT ;
typedef unsigned int DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,unsigned int*) ;
 int FUNC_4 (int *,int ,int **) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static HRESULT FUNC_10(script_ctx_t *VAR_1, vdisp_t *VAR_2, WORD VAR_3, unsigned VAR_4, jsval_t *VAR_5,
        jsval_t *VAR_6)
{
    jsdisp_t *VAR_7;
    DWORD VAR_8 = 0;
    HRESULT VAR_9;

    FUNC_2("\n");

    VAR_9 = FUNC_4(VAR_1, 0, &VAR_7);
    if(FUNC_0(VAR_9))
        return VAR_9;

    VAR_9 = FUNC_3(VAR_7, VAR_2->u.disp, &VAR_8);
    if(FUNC_1(VAR_9)) {
        DWORD VAR_10;

        for(VAR_10=0; VAR_10 < VAR_4; VAR_10++) {
            if(FUNC_6(VAR_5[VAR_10]))
                VAR_9 = FUNC_3(VAR_7, FUNC_5(VAR_5[VAR_10]), &VAR_8);
            else
                VAR_9 = FUNC_7(VAR_7, VAR_8++, VAR_5[VAR_10]);
            if(FUNC_0(VAR_9))
                break;
        }
    }

    if(FUNC_0(VAR_9))
        return VAR_9;

    if(VAR_6)
        *VAR_6 = FUNC_9(VAR_7);
    else
        FUNC_8(VAR_7);
    return VAR_0;
}
