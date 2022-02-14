
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int ndims; } ;
struct TYPE_7__ {char* element_scalar; scalar_t__ element_type; TYPE_1__* lex; TYPE_3__* ctx; } ;
struct TYPE_6__ {int lex_level; } ;
typedef TYPE_2__ PopulateArrayState ;
typedef TYPE_3__ PopulateArrayContext ;
typedef scalar_t__ JsonTokenType ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, char *VAR_1, JsonTokenType VAR_2)
{
 PopulateArrayState *VAR_3 = (PopulateArrayState *) VAR_0;
 PopulateArrayContext *VAR_4 = VAR_3->ctx;
 int VAR_5 = VAR_3->lex->lex_level;

 if (VAR_4->ndims <= 0)
  FUNC_1(VAR_4, VAR_5);
 else if (VAR_5 < VAR_4->ndims)
  FUNC_2(VAR_4, VAR_5);

 if (VAR_5 == VAR_4->ndims)
 {

  VAR_3->element_scalar = VAR_1;

  FUNC_0(VAR_3->element_type == VAR_2);
 }
}
