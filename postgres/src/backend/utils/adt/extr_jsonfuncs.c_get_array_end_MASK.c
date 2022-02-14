
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ npath; char* result_start; int tresult; TYPE_1__* lex; } ;
struct TYPE_3__ {int lex_level; char* prev_token_terminator; } ;
typedef TYPE_2__ GetState ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 GetState *VAR_1 = (GetState *) VAR_0;
 int VAR_2 = VAR_1->lex->lex_level;

 if (VAR_2 == 0 && VAR_1->npath == 0)
 {

  char *VAR_3 = VAR_1->result_start;
  int VAR_4 = VAR_1->lex->prev_token_terminator - VAR_3;

  VAR_1->tresult = FUNC_0(VAR_3, VAR_4);
 }
}
