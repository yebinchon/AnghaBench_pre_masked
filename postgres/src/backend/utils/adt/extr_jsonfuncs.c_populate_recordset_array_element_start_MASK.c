
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int function_name; TYPE_1__* lex; } ;
struct TYPE_3__ {int lex_level; scalar_t__ token_type; } ;
typedef TYPE_2__ PopulateRecordsetState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_3, bool VAR_4)
{
 PopulateRecordsetState *VAR_5 = (PopulateRecordsetState *) VAR_3;

 if (VAR_5->lex->lex_level == 1 &&
  VAR_5->lex->token_type != VAR_2)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("argument of %s must be an array of objects",
      VAR_5->function_name)));
}
