
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * stmt_mcontext; int stmt_mcontext_parent; } ;
typedef TYPE_1__ PLpgSQL_execstate ;
typedef int * MemoryContext ;


 int VAR_0 ;
 int * FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static MemoryContext
FUNC_1(PLpgSQL_execstate *VAR_1)
{
 if (VAR_1->stmt_mcontext == ((void*)0))
 {
  VAR_1->stmt_mcontext =
   FUNC_0(VAR_1->stmt_mcontext_parent,
          "PLpgSQL per-statement data",
          VAR_0);
 }
 return VAR_1->stmt_mcontext;
}
