
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int compile_expr; int release_context; int reset_after_error; } ;
typedef TYPE_1__ JitProviderCallbacks ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_0(JitProviderCallbacks *VAR_3)
{
 VAR_3->reset_after_error = VAR_2;
 VAR_3->release_context = VAR_1;
 VAR_3->compile_expr = VAR_0;
}
