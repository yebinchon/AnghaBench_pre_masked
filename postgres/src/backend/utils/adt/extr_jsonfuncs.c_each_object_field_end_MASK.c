
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int text ;
struct TYPE_4__ {int next_scalar; char* normalized_scalar; int result_start; int tmp_cxt; int tuple_store; int ret_tdesc; TYPE_1__* lex; scalar_t__ normalize_results; } ;
struct TYPE_3__ {int lex_level; int prev_token_terminator; } ;
typedef int MemoryContext ;
typedef int HeapTuple ;
typedef TYPE_2__ EachState ;
typedef scalar_t__ Datum ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int,int) ;
 int FUNC_5 (int ,scalar_t__*,int*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_0, char *VAR_1, bool VAR_2)
{
 EachState *VAR_3 = (EachState *) VAR_0;
 MemoryContext VAR_4;
 int VAR_5;
 text *VAR_6;
 HeapTuple VAR_7;
 Datum VAR_8[2];
 bool VAR_9[2] = {0, 0};


 if (VAR_3->lex->lex_level != 1)
  return;


 VAR_4 = FUNC_2(VAR_3->tmp_cxt);

 VAR_8[0] = FUNC_0(VAR_1);

 if (VAR_2 && VAR_3->normalize_results)
 {
  VAR_9[1] = 1;
  VAR_8[1] = (Datum) 0;
 }
 else if (VAR_3->next_scalar)
 {
  VAR_8[1] = FUNC_0(VAR_3->normalized_scalar);
  VAR_3->next_scalar = 0;
 }
 else
 {
  VAR_5 = VAR_3->lex->prev_token_terminator - VAR_3->result_start;
  VAR_6 = FUNC_4(VAR_3->result_start, VAR_5);
  VAR_8[1] = FUNC_3(VAR_6);
 }

 VAR_7 = FUNC_5(VAR_3->ret_tdesc, VAR_8, VAR_9);

 FUNC_6(VAR_3->tuple_store, VAR_7);


 FUNC_2(VAR_4);
 FUNC_1(VAR_3->tmp_cxt);
}
