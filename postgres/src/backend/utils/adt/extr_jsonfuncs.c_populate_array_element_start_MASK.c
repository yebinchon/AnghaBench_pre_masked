
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * element_scalar; TYPE_1__* lex; int element_type; int element_start; TYPE_2__* ctx; } ;
struct TYPE_5__ {int ndims; } ;
struct TYPE_4__ {int lex_level; int token_type; int token_start; } ;
typedef TYPE_3__ PopulateArrayState ;



__attribute__((used)) static void
FUNC_0(void *VAR_0, bool VAR_1)
{
 PopulateArrayState *VAR_2 = (PopulateArrayState *) VAR_0;
 int VAR_3 = VAR_2->lex->lex_level;

 if (VAR_2->ctx->ndims <= 0 || VAR_3 == VAR_2->ctx->ndims)
 {

  VAR_2->element_start = VAR_2->lex->token_start;
  VAR_2->element_type = VAR_2->lex->token_type;
  VAR_2->element_scalar = ((void*)0);
 }
}
