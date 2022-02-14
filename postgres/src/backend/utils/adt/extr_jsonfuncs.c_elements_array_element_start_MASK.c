
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int next_scalar; TYPE_1__* lex; int result_start; scalar_t__ normalize_results; } ;
struct TYPE_3__ {int lex_level; scalar_t__ token_type; int token_start; } ;
typedef TYPE_2__ ElementsState ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(void *VAR_1, bool VAR_2)
{
 ElementsState *VAR_3 = (ElementsState *) VAR_1;


 if (VAR_3->lex->lex_level == 1)
 {





  if (VAR_3->normalize_results && VAR_3->lex->token_type == VAR_0)
   VAR_3->next_scalar = 1;
  else
   VAR_3->result_start = VAR_3->lex->token_start;
 }
}
