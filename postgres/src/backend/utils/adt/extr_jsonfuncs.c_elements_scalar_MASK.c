
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* normalized_scalar; scalar_t__ next_scalar; int function_name; TYPE_1__* lex; } ;
struct TYPE_3__ {scalar_t__ lex_level; } ;
typedef int JsonTokenType ;
typedef TYPE_2__ ElementsState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2, char *VAR_3, JsonTokenType VAR_4)
{
 ElementsState *VAR_5 = (ElementsState *) VAR_2;


 if (VAR_5->lex->lex_level == 0)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("cannot call %s on a scalar",
      VAR_5->function_name)));


 if (VAR_5->next_scalar)
  VAR_5->normalized_scalar = VAR_3;
}
