
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* saved_scalar; scalar_t__ saved_token_type; TYPE_1__* lex; int function_name; } ;
struct TYPE_3__ {int lex_level; } ;
typedef scalar_t__ JsonTokenType ;
typedef TYPE_2__ JHashState ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2, char *VAR_3, JsonTokenType VAR_4)
{
 JHashState *VAR_5 = (JHashState *) VAR_2;

 if (VAR_5->lex->lex_level == 0)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("cannot call %s on a scalar", VAR_5->function_name)));

 if (VAR_5->lex->lex_level == 1)
 {
  VAR_5->saved_scalar = VAR_3;

  FUNC_0(VAR_5->saved_token_type == VAR_4);
 }
}
