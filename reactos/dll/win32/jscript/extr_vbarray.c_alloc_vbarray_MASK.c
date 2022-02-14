
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int vbarray_constr; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int jsdisp_t ;
struct TYPE_10__ {int dispex; } ;
typedef TYPE_2__ VBArrayInstance ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_4 (int *,TYPE_1__*,int *,int ) ;

__attribute__((used)) static HRESULT FUNC_5(script_ctx_t *VAR_3, jsdisp_t *VAR_4, VBArrayInstance **VAR_5)
{
    VBArrayInstance *VAR_6;
    HRESULT VAR_7;

    VAR_6 = FUNC_1(sizeof(VBArrayInstance));
    if(!VAR_6)
        return VAR_0;

    if(VAR_4)
        VAR_7 = FUNC_3(&VAR_6->dispex, VAR_3, &VAR_2, VAR_4);
    else
        VAR_7 = FUNC_4(&VAR_6->dispex, VAR_3, &VAR_2, VAR_3->vbarray_constr);

    if(FUNC_0(VAR_7)) {
        FUNC_2(VAR_6);
        return VAR_7;
    }

    *VAR_5 = VAR_6;
    return VAR_1;
}
