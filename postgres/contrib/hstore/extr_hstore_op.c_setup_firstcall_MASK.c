
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_3__ {int tuple_desc; void* user_fctx; int multi_call_memory_ctx; } ;
typedef int MemoryContext ;
typedef int HStore ;
typedef scalar_t__ FunctionCallInfo ;
typedef TYPE_1__ FuncCallContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (scalar_t__,int *,int *) ;
 int FUNC_5 (int *,int *,int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(FuncCallContext *VAR_2, HStore *VAR_3,
    FunctionCallInfo VAR_4)
{
 MemoryContext VAR_5;
 HStore *VAR_6;

 VAR_5 = FUNC_1(VAR_2->multi_call_memory_ctx);

 VAR_6 = (HStore *) FUNC_6(FUNC_2(VAR_3));
 FUNC_5(VAR_6, VAR_3, FUNC_2(VAR_3));

 VAR_2->user_fctx = (void *) VAR_6;

 if (VAR_4)
 {
  TupleDesc VAR_7;


  if (FUNC_4(VAR_4, ((void*)0), &VAR_7) != VAR_1)
   FUNC_3(VAR_0, "return type must be a row type");

  VAR_2->tuple_desc = FUNC_0(VAR_7);
 }

 FUNC_1(VAR_5);
}
