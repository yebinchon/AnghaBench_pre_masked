
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ccval_t ;
struct TYPE_5__ {int name_len; struct TYPE_5__* next; int name; int val; } ;
typedef TYPE_1__ cc_var_t ;
struct TYPE_6__ {TYPE_1__* vars; } ;
typedef TYPE_2__ cc_ctx_t ;
typedef int WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int ,int const*,int) ;

__attribute__((used)) static BOOL FUNC_3(cc_ctx_t *VAR_2, const WCHAR *VAR_3, int VAR_4, ccval_t VAR_5)
{
    cc_var_t *VAR_6;

    if(VAR_4 == -1)
        VAR_4 = FUNC_1(VAR_3);

    VAR_6 = FUNC_0(sizeof(cc_var_t) + (VAR_4+1)*sizeof(WCHAR));
    if(!VAR_6)
        return VAR_0;

    VAR_6->val = VAR_5;
    FUNC_2(VAR_6->name, VAR_3, (VAR_4+1)*sizeof(WCHAR));
    VAR_6->name_len = VAR_4;
    VAR_6->next = VAR_2->vars;
    VAR_2->vars = VAR_6;
    return VAR_1;
}
