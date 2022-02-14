
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int WORD ;
struct TYPE_3__ {int safearray; } ;
typedef TYPE_1__ VBArrayInstance ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int *) ;
 TYPE_1__* FUNC_4 (int *) ;

__attribute__((used)) static HRESULT FUNC_5(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6,
        jsval_t *VAR_7)
{
    VBArrayInstance *VAR_8;

    FUNC_1("\n");

    VAR_8 = FUNC_4(VAR_3);
    if(!VAR_8)
        return FUNC_3(VAR_2, VAR_0, ((void*)0));

    if(VAR_7)
        *VAR_7 = FUNC_2(FUNC_0(VAR_8->safearray));
    return VAR_1;
}
