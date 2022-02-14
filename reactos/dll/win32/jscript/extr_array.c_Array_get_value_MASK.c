
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
struct TYPE_3__ {int length; int dispex; } ;
typedef int HRESULT ;
typedef TYPE_1__ ArrayInstance ;


 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static HRESULT FUNC_4(script_ctx_t *VAR_1, jsdisp_t *VAR_2, jsval_t *VAR_3)
{
    ArrayInstance *VAR_4 = FUNC_1(VAR_2);

    FUNC_0("\n");

    return FUNC_2(VAR_1, &VAR_4->dispex, VAR_4->length, VAR_0,
                      FUNC_3(VAR_0), VAR_3);
}
