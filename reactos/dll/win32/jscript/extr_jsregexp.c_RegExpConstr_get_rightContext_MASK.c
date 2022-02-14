
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ last_match_length; scalar_t__ last_match_index; int last_match; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static HRESULT FUNC_4(script_ctx_t *VAR_2, jsdisp_t *VAR_3, jsval_t *VAR_4)
{
    jsstr_t *VAR_5;

    FUNC_0("\n");

    VAR_5 = FUNC_2(VAR_2->last_match, VAR_2->last_match_index+VAR_2->last_match_length,
            FUNC_1(VAR_2->last_match) - VAR_2->last_match_index - VAR_2->last_match_length);
    if(!VAR_5)
        return VAR_0;

    *VAR_4 = FUNC_3(VAR_5);
    return VAR_1;
}
