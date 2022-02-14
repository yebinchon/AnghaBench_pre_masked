
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int text ;
struct TYPE_4__ {int next_scalar; int result_start; int tmp_cxt; int tuple_store; int ret_tdesc; TYPE_1__* lex; int normalized_scalar; scalar_t__ normalize_results; } ;
struct TYPE_3__ {int lex_level; int prev_token_terminator; } ;
typedef int MemoryContext ;
typedef int HeapTuple ;
typedef TYPE_2__ ElementsState ;
typedef scalar_t__ Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int,int) ;
 int FUNC_5 (int ,scalar_t__*,int*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_0, bool VAR_1)
{
 ElementsState *VAR_2 = (ElementsState *) VAR_0;
 MemoryContext VAR_3;
 int VAR_4;
 text *VAR_5;
 HeapTuple VAR_6;
 Datum VAR_7[1];
 bool VAR_8[1] = {0};


 if (VAR_2->lex->lex_level != 1)
  return;


 VAR_3 = FUNC_2(VAR_2->tmp_cxt);

 if (VAR_1 && VAR_2->normalize_results)
 {
  VAR_8[0] = 1;
  VAR_7[0] = (Datum) ((void*)0);
 }
 else if (VAR_2->next_scalar)
 {
  VAR_7[0] = FUNC_0(VAR_2->normalized_scalar);
  VAR_2->next_scalar = 0;
 }
 else
 {
  VAR_4 = VAR_2->lex->prev_token_terminator - VAR_2->result_start;
  VAR_5 = FUNC_4(VAR_2->result_start, VAR_4);
  VAR_7[0] = FUNC_3(VAR_5);
 }

 VAR_6 = FUNC_5(VAR_2->ret_tdesc, VAR_7, VAR_8);

 FUNC_6(VAR_2->tuple_store, VAR_6);


 FUNC_2(VAR_3);
 FUNC_1(VAR_2->tmp_cxt);
}
