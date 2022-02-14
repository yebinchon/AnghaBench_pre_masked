
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ saved_token_type; int * save_json_start; TYPE_1__* lex; } ;
struct TYPE_3__ {int lex_level; scalar_t__ token_type; int * token_start; } ;
typedef TYPE_2__ JHashState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_0(void *VAR_2, char *VAR_3, bool VAR_4)
{
 JHashState *VAR_5 = (JHashState *) VAR_2;

 if (VAR_5->lex->lex_level > 1)
  return;


 VAR_5->saved_token_type = VAR_5->lex->token_type;

 if (VAR_5->lex->token_type == VAR_0 ||
  VAR_5->lex->token_type == VAR_1)
 {

  VAR_5->save_json_start = VAR_5->lex->token_start;
 }
 else
 {

  VAR_5->save_json_start = ((void*)0);
 }
}
