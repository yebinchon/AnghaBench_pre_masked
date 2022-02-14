
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int text ;
struct TYPE_4__ {scalar_t__ npath; int next_scalar; int * tresult; TYPE_1__* lex; scalar_t__ normalize_results; } ;
struct TYPE_3__ {int lex_level; char* input; char* prev_token_terminator; } ;
typedef scalar_t__ JsonTokenType ;
typedef TYPE_2__ GetState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (char*) ;
 int * FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_2, char *VAR_3, JsonTokenType VAR_4)
{
 GetState *VAR_5 = (GetState *) VAR_2;
 int VAR_6 = VAR_5->lex->lex_level;


 if (VAR_6 == 0 && VAR_5->npath == 0)
 {
  if (VAR_5->normalize_results && VAR_4 == VAR_1)
  {

   VAR_5->next_scalar = 1;
  }
  else if (VAR_5->normalize_results && VAR_4 == VAR_0)
  {
   VAR_5->tresult = (text *) ((void*)0);
  }
  else
  {





   char *VAR_7 = VAR_5->lex->input;
   int VAR_8 = VAR_5->lex->prev_token_terminator - VAR_7;

   VAR_5->tresult = FUNC_1(VAR_7, VAR_8);
  }
 }

 if (VAR_5->next_scalar)
 {

  VAR_5->tresult = FUNC_0(VAR_3);

  VAR_5->next_scalar = 0;
 }
}
