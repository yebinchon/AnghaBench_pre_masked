
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int text ;
struct TYPE_4__ {int npath; int* pathok; scalar_t__* path_indexes; scalar_t__* array_cur_index; char* result_start; int * tresult; TYPE_1__* lex; scalar_t__ normalize_results; } ;
struct TYPE_3__ {int lex_level; char* prev_token_terminator; } ;
typedef TYPE_2__ GetState ;


 int * FUNC_0 (char*,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, bool VAR_1)
{
 GetState *VAR_2 = (GetState *) VAR_0;
 bool VAR_3 = 0;
 int VAR_4 = VAR_2->lex->lex_level;


 if (VAR_4 <= VAR_2->npath &&
  VAR_2->pathok[VAR_4 - 1] &&
  VAR_2->path_indexes != ((void*)0) &&
  VAR_2->array_cur_index[VAR_4 - 1] == VAR_2->path_indexes[VAR_4 - 1])
 {
  if (VAR_4 < VAR_2->npath)
  {

   VAR_2->pathok[VAR_4] = 0;
  }
  else
  {

   VAR_3 = 1;
  }
 }


 if (VAR_3 && VAR_2->result_start != ((void*)0))
 {
  if (VAR_1 && VAR_2->normalize_results)
   VAR_2->tresult = (text *) ((void*)0);
  else
  {
   char *VAR_5 = VAR_2->result_start;
   int VAR_6 = VAR_2->lex->prev_token_terminator - VAR_5;

   VAR_2->tresult = FUNC_0(VAR_5, VAR_6);
  }

  VAR_2->result_start = ((void*)0);
 }
}
