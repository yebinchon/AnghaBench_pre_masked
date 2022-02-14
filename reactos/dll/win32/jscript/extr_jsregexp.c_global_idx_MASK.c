
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* match_parens; int last_match; } ;
typedef TYPE_2__ script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
struct TYPE_4__ {int length; int index; } ;
typedef int HRESULT ;
typedef size_t DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static HRESULT FUNC_2(script_ctx_t *VAR_2, DWORD VAR_3, jsval_t *VAR_4)
{
    jsstr_t *VAR_5;

    VAR_5 = FUNC_0(VAR_2->last_match, VAR_2->match_parens[VAR_3].index, VAR_2->match_parens[VAR_3].length);
    if(!VAR_5)
        return VAR_0;

    *VAR_4 = FUNC_1(VAR_5);
    return VAR_1;
}
