
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
struct TYPE_3__ {int last_index_val; } ;
typedef TYPE_1__ RegExpInstance ;
typedef int HRESULT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 TYPE_1__* FUNC_2 (int *) ;

__attribute__((used)) static HRESULT FUNC_3(script_ctx_t *VAR_0, jsdisp_t *VAR_1, jsval_t *VAR_2)
{
    RegExpInstance *VAR_3 = FUNC_2(VAR_1);

    FUNC_0("\n");

    return FUNC_1(VAR_3->last_index_val, VAR_2);
}
