
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int ecxt_per_tuple_memory; } ;
struct TYPE_8__ {scalar_t__ key_toastable; int * key_expr; TYPE_1__* scan_key; } ;
struct TYPE_7__ {int sk_flags; void* sk_argument; } ;
typedef TYPE_1__* ScanKey ;
typedef int MemoryContext ;
typedef TYPE_2__ IndexRuntimeKeyInfo ;
typedef int ExprState ;
typedef TYPE_3__ ExprContext ;
typedef void* Datum ;


 void* FUNC_0 (int *,TYPE_3__*,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ) ;
 int VAR_0 ;

void
FUNC_4(ExprContext *VAR_1,
       IndexRuntimeKeyInfo *VAR_2, int VAR_3)
{
 int VAR_4;
 MemoryContext VAR_5;


 VAR_5 = FUNC_1(VAR_1->ecxt_per_tuple_memory);

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
 {
  ScanKey VAR_6 = VAR_2[VAR_4].scan_key;
  ExprState *VAR_7 = VAR_2[VAR_4].key_expr;
  Datum VAR_8;
  bool VAR_9;
  VAR_8 = FUNC_0(VAR_7,
         VAR_1,
         &VAR_9);
  if (VAR_9)
  {
   VAR_6->sk_argument = VAR_8;
   VAR_6->sk_flags |= VAR_0;
  }
  else
  {
   if (VAR_2[VAR_4].key_toastable)
    VAR_8 = FUNC_3(FUNC_2(VAR_8));
   VAR_6->sk_argument = VAR_8;
   VAR_6->sk_flags &= ~VAR_0;
  }
 }

 FUNC_1(VAR_5);
}
