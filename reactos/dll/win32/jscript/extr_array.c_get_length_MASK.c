
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * jsdisp; } ;
struct TYPE_9__ {TYPE_1__ u; } ;
typedef TYPE_2__ vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
struct TYPE_10__ {int length; int dispex; } ;
typedef int HRESULT ;
typedef int DWORD ;
typedef TYPE_3__ ArrayInstance ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_7(script_ctx_t *VAR_3, vdisp_t *VAR_4, jsdisp_t **VAR_5, DWORD *VAR_6)
{
    ArrayInstance *VAR_7;
    jsval_t VAR_8;
    HRESULT VAR_9;

    VAR_7 = FUNC_1(VAR_4);
    if(VAR_7) {
        *VAR_5 = &VAR_7->dispex;
        *VAR_6 = VAR_7->length;
        return VAR_1;
    }

    if(!FUNC_2(VAR_4))
        return FUNC_5(VAR_3, VAR_0, ((void*)0));

    VAR_9 = FUNC_3(VAR_4->u.jsdisp, VAR_2, &VAR_8);
    if(FUNC_0(VAR_9))
        return VAR_9;

    VAR_9 = FUNC_6(VAR_3, VAR_8, VAR_6);
    FUNC_4(VAR_8);
    if(FUNC_0(VAR_9))
        return VAR_9;

    *VAR_5 = VAR_4->u.jsdisp;
    return VAR_1;
}
