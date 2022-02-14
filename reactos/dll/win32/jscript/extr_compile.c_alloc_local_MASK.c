
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ref; int entry; int name; } ;
typedef TYPE_1__ function_local_t ;
struct TYPE_6__ {int locals_cnt; int locals; int heap; } ;
typedef TYPE_2__ compiler_ctx_t ;
typedef int BSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int *) ;

__attribute__((used)) static BOOL FUNC_2(compiler_ctx_t *VAR_2, BSTR VAR_3, int VAR_4)
{
    function_local_t *VAR_5;

    VAR_5 = FUNC_0(&VAR_2->heap, sizeof(*VAR_5));
    if(!VAR_5)
        return VAR_0;

    VAR_5->name = VAR_3;
    VAR_5->ref = VAR_4;
    FUNC_1(&VAR_2->locals, VAR_3, &VAR_5->entry);
    VAR_2->locals_cnt++;
    return VAR_1;
}
