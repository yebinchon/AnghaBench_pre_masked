
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
struct TYPE_4__ {int value; } ;
typedef TYPE_1__ NumberInstance ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int *) ;

__attribute__((used)) static HRESULT FUNC_3(script_ctx_t *VAR_1, jsdisp_t *VAR_2, jsval_t *VAR_3)
{
    NumberInstance *VAR_4 = FUNC_2(VAR_2);

    FUNC_0("(%p)\n", VAR_4);

    *VAR_3 = FUNC_1(VAR_4->value);
    return VAR_0;
}
