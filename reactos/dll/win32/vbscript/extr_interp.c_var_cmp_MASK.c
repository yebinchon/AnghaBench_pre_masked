
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* script; } ;
typedef TYPE_2__ exec_ctx_t ;
typedef int VARIANT ;
struct TYPE_4__ {int lcid; } ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static HRESULT FUNC_3(exec_ctx_t *VAR_0, VARIANT *VAR_1, VARIANT *VAR_2)
{
    FUNC_0("%s %s\n", FUNC_2(VAR_1), FUNC_2(VAR_2));



    return FUNC_1(VAR_1, VAR_2, VAR_0->script->lcid, 0);
 }
