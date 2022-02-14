
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ scratch_ctx; struct TYPE_4__* next; } ;
typedef TYPE_1__ PLyExecutionContext ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(void)
{
 PLyExecutionContext *VAR_2 = VAR_1;

 if (VAR_2 == ((void*)0))
  FUNC_1(VAR_0, "no Python function is currently executing");

 VAR_1 = VAR_2->next;

 if (VAR_2->scratch_ctx)
  FUNC_0(VAR_2->scratch_ctx);
 FUNC_2(VAR_2);
}
