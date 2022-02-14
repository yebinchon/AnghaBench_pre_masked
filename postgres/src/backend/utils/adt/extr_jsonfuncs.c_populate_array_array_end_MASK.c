
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int ndims; } ;
struct TYPE_7__ {TYPE_1__* lex; TYPE_3__* ctx; } ;
struct TYPE_6__ {int lex_level; } ;
typedef TYPE_2__ PopulateArrayState ;
typedef TYPE_3__ PopulateArrayContext ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 PopulateArrayState *VAR_1 = (PopulateArrayState *) VAR_0;
 PopulateArrayContext *VAR_2 = VAR_1->ctx;
 int VAR_3 = VAR_1->lex->lex_level;

 if (VAR_2->ndims <= 0)
  FUNC_0(VAR_2, VAR_3 + 1);

 if (VAR_3 < VAR_2->ndims)
  FUNC_1(VAR_2, VAR_3);
}
