
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_9__ {int attinmeta; int tuple_desc; int multi_call_memory_ctx; void* user_fctx; } ;
struct TYPE_8__ {struct TYPE_8__* left; } ;
struct TYPE_7__ {int maxdepth; size_t stackpos; TYPE_2__** stack; TYPE_2__* root; } ;
typedef TYPE_1__ TSVectorStat ;
typedef TYPE_2__ StatEntry ;
typedef int MemoryContext ;
typedef int FunctionCallInfo ;
typedef TYPE_3__ FuncCallContext ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,char*,int ,int,int ) ;
 TYPE_2__** FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(FunctionCallInfo VAR_2, FuncCallContext *VAR_3,
       TSVectorStat *VAR_4)
{
 TupleDesc VAR_5;
 MemoryContext VAR_6;
 StatEntry *VAR_7;

 VAR_3->user_fctx = (void *) VAR_4;

 VAR_6 = FUNC_3(VAR_3->multi_call_memory_ctx);

 VAR_4->stack = FUNC_6(sizeof(StatEntry *) * (VAR_4->maxdepth + 1));
 VAR_4->stackpos = 0;

 VAR_7 = VAR_4->root;

 if (VAR_7 == ((void*)0))
  VAR_4->stack[VAR_4->stackpos] = ((void*)0);
 else
  for (;;)
  {
   VAR_4->stack[VAR_4->stackpos] = VAR_7;
   if (VAR_7->left)
   {
    VAR_4->stackpos++;
    VAR_7 = VAR_7->left;
   }
   else
    break;
  }
 FUNC_0(VAR_4->stackpos <= VAR_4->maxdepth);

 VAR_5 = FUNC_2(3);
 FUNC_5(VAR_5, (AttrNumber) 1, "word",
        VAR_1, -1, 0);
 FUNC_5(VAR_5, (AttrNumber) 2, "ndoc",
        VAR_0, -1, 0);
 FUNC_5(VAR_5, (AttrNumber) 3, "nentry",
        VAR_0, -1, 0);
 VAR_3->tuple_desc = FUNC_1(VAR_5);
 VAR_3->attinmeta = FUNC_4(VAR_5);

 FUNC_3(VAR_6);
}
