
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int npath; scalar_t__* array_cur_index; int* pathok; scalar_t__* path_indexes; int next_scalar; TYPE_1__* lex; int * result_start; scalar_t__ normalize_results; int * tresult; } ;
struct TYPE_3__ {int lex_level; scalar_t__ token_type; int * token_start; } ;
typedef TYPE_2__ GetState ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(void *VAR_1, bool VAR_2)
{
 GetState *VAR_3 = (GetState *) VAR_1;
 bool VAR_4 = 0;
 int VAR_5 = VAR_3->lex->lex_level;


 if (VAR_5 <= VAR_3->npath)
  VAR_3->array_cur_index[VAR_5 - 1]++;

 if (VAR_5 <= VAR_3->npath &&
  VAR_3->pathok[VAR_5 - 1] &&
  VAR_3->path_indexes != ((void*)0) &&
  VAR_3->array_cur_index[VAR_5 - 1] == VAR_3->path_indexes[VAR_5 - 1])
 {
  if (VAR_5 < VAR_3->npath)
  {

   VAR_3->pathok[VAR_5] = 1;
  }
  else
  {

   VAR_4 = 1;
  }
 }


 if (VAR_4)
 {
  VAR_3->tresult = ((void*)0);
  VAR_3->result_start = ((void*)0);

  if (VAR_3->normalize_results &&
   VAR_3->lex->token_type == VAR_0)
  {
   VAR_3->next_scalar = 1;
  }
  else
  {
   VAR_3->result_start = VAR_3->lex->token_start;
  }
 }
}
