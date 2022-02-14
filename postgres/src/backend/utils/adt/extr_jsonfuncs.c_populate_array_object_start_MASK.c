
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int ndims; } ;
struct TYPE_6__ {TYPE_3__* ctx; TYPE_1__* lex; } ;
struct TYPE_5__ {int lex_level; } ;
typedef TYPE_2__ PopulateArrayState ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 PopulateArrayState *VAR_1 = (PopulateArrayState *) VAR_0;
 int VAR_2 = VAR_1->lex->lex_level;

 if (VAR_1->ctx->ndims <= 0)
  FUNC_0(VAR_1->ctx, VAR_2);
 else if (VAR_2 < VAR_1->ctx->ndims)
  FUNC_1(VAR_1->ctx, VAR_2);
}
