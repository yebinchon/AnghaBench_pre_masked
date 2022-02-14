
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int WORD ;
struct TYPE_3__ {int length; int dispex; } ;
typedef int HRESULT ;
typedef TYPE_1__ ArrayInstance ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,int ,int ,int ,int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_5(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6,
        jsval_t *VAR_7)
{
    ArrayInstance *VAR_8;

    FUNC_0("\n");

    VAR_8 = FUNC_2(VAR_3);
    if(!VAR_8)
        return FUNC_4(VAR_2, VAR_0, ((void*)0));

    return FUNC_1(VAR_2, &VAR_8->dispex, VAR_8->length, VAR_1,
                      FUNC_3(VAR_1), VAR_7);
}
