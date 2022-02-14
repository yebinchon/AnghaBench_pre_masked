
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ npath; TYPE_1__* lex; int result_start; } ;
struct TYPE_3__ {int lex_level; int token_start; } ;
typedef TYPE_2__ GetState ;



__attribute__((used)) static void
FUNC_0(void *VAR_0)
{
 GetState *VAR_1 = (GetState *) VAR_0;
 int VAR_2 = VAR_1->lex->lex_level;

 if (VAR_2 == 0 && VAR_1->npath == 0)
 {





  VAR_1->result_start = VAR_1->lex->token_start;
 }
}
