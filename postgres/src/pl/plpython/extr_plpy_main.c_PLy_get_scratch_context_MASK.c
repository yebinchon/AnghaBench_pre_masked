
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * scratch_ctx; } ;
typedef TYPE_1__ PLyExecutionContext ;
typedef int * MemoryContext ;


 int VAR_0 ;
 int * FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;

MemoryContext
FUNC_1(PLyExecutionContext *VAR_2)
{




 if (VAR_2->scratch_ctx == ((void*)0))
  VAR_2->scratch_ctx =
   FUNC_0(VAR_1,
          "PL/Python scratch context",
          VAR_0);
 return VAR_2->scratch_ctx;
}
