
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * fn_extra; } ;
struct TYPE_3__ {int multi_call_memory_ctx; } ;
typedef TYPE_1__ FuncCallContext ;
typedef TYPE_2__ FmgrInfo ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(Datum VAR_0)
{
 FmgrInfo *VAR_1 = (FmgrInfo *) FUNC_0(VAR_0);
 FuncCallContext *VAR_2 = (FuncCallContext *) VAR_1->fn_extra;


 VAR_1->fn_extra = ((void*)0);





 FUNC_1(VAR_2->multi_call_memory_ctx);
}
