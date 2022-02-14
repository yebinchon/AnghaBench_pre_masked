
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int npath; int* pathok; int next_scalar; TYPE_1__* lex; int * result_start; scalar_t__ normalize_results; int * tresult; int ** path_names; } ;
struct TYPE_3__ {int lex_level; scalar_t__ token_type; int * token_start; } ;
typedef TYPE_2__ GetState ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,int *) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1, char *VAR_2, bool VAR_3)
{
 GetState *VAR_4 = (GetState *) VAR_1;
 bool VAR_5 = 0;
 int VAR_6 = VAR_4->lex->lex_level;

 if (VAR_6 <= VAR_4->npath &&
  VAR_4->pathok[VAR_6 - 1] &&
  VAR_4->path_names != ((void*)0) &&
  VAR_4->path_names[VAR_6 - 1] != ((void*)0) &&
  FUNC_0(VAR_2, VAR_4->path_names[VAR_6 - 1]) == 0)
 {
  if (VAR_6 < VAR_4->npath)
  {

   VAR_4->pathok[VAR_6] = 1;
  }
  else
  {

   VAR_5 = 1;
  }
 }

 if (VAR_5)
 {

  VAR_4->tresult = ((void*)0);
  VAR_4->result_start = ((void*)0);

  if (VAR_4->normalize_results &&
   VAR_4->lex->token_type == VAR_0)
  {

   VAR_4->next_scalar = 1;
  }
  else
  {

   VAR_4->result_start = VAR_4->lex->token_start;
  }
 }
}
