
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int text ;
struct TYPE_4__ {int npath; int* pathok; char* result_start; int * tresult; TYPE_1__* lex; scalar_t__ normalize_results; int ** path_names; } ;
struct TYPE_3__ {int lex_level; char* prev_token_terminator; } ;
typedef TYPE_2__ GetState ;


 int * FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char*,int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, char *VAR_1, bool VAR_2)
{
 GetState *VAR_3 = (GetState *) VAR_0;
 bool VAR_4 = 0;
 int VAR_5 = VAR_3->lex->lex_level;


 if (VAR_5 <= VAR_3->npath &&
  VAR_3->pathok[VAR_5 - 1] &&
  VAR_3->path_names != ((void*)0) &&
  VAR_3->path_names[VAR_5 - 1] != ((void*)0) &&
  FUNC_1(VAR_1, VAR_3->path_names[VAR_5 - 1]) == 0)
 {
  if (VAR_5 < VAR_3->npath)
  {

   VAR_3->pathok[VAR_5] = 0;
  }
  else
  {

   VAR_4 = 1;
  }
 }


 if (VAR_4 && VAR_3->result_start != ((void*)0))
 {





  if (VAR_2 && VAR_3->normalize_results)
   VAR_3->tresult = (text *) ((void*)0);
  else
  {
   char *VAR_6 = VAR_3->result_start;
   int VAR_7 = VAR_3->lex->prev_token_terminator - VAR_6;

   VAR_3->tresult = FUNC_0(VAR_6, VAR_7);
  }


  VAR_3->result_start = ((void*)0);
 }
}
