
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; int * scratch_ctx; int * curr_proc; } ;
typedef TYPE_1__ PLyExecutionContext ;


 scalar_t__ FUNC_0 (int ,int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static PLyExecutionContext *
FUNC_1(bool VAR_3)
{
 PLyExecutionContext *VAR_4;


 VAR_4 = (PLyExecutionContext *)
  FUNC_0(VAR_3 ? VAR_2 : VAR_1,
         sizeof(PLyExecutionContext));
 VAR_4->curr_proc = ((void*)0);
 VAR_4->scratch_ctx = ((void*)0);
 VAR_4->next = VAR_0;
 VAR_0 = VAR_4;
 return VAR_4;
}
