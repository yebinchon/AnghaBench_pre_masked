
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* func; } ;
typedef TYPE_2__ compiler_ctx_t ;
typedef int WCHAR ;
struct TYPE_7__ {int var_cnt; } ;
typedef int BSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int const*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int const*) ;

__attribute__((used)) static BOOL FUNC_3(compiler_ctx_t *VAR_2, const WCHAR *VAR_3)
{
    BSTR VAR_4;

    if(FUNC_2(VAR_2, VAR_3))
        return VAR_1;

    VAR_4 = FUNC_1(VAR_2, VAR_3);
    if(!VAR_4)
        return VAR_0;

    return FUNC_0(VAR_2, VAR_4, VAR_2->func->var_cnt++);
}
