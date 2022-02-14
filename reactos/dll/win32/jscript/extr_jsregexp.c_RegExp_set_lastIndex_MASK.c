
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
struct TYPE_3__ {int last_index; int last_index_val; } ;
typedef TYPE_1__ RegExpInstance ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int *) ;

__attribute__((used)) static HRESULT FUNC_6(script_ctx_t *VAR_1, jsdisp_t *VAR_2, jsval_t VAR_3)
{
    RegExpInstance *VAR_4 = FUNC_5(VAR_2);
    HRESULT VAR_5;

    FUNC_1("\n");

    FUNC_4(VAR_4->last_index_val);
    VAR_5 = FUNC_3(VAR_3, &VAR_4->last_index_val);
    if(FUNC_0(VAR_5))
        return VAR_5;

    VAR_4->last_index = FUNC_2(VAR_1, VAR_3);
    return VAR_0;
}
