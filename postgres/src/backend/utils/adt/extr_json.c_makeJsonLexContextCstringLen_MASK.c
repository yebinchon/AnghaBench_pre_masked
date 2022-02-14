
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* input; char* token_terminator; char* line_start; int line_number; int input_length; int strval; } ;
typedef TYPE_1__ JsonLexContext ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int) ;

JsonLexContext *
FUNC_2(char *VAR_0, int VAR_1, bool VAR_2)
{
 JsonLexContext *VAR_3 = FUNC_1(sizeof(JsonLexContext));

 VAR_3->input = VAR_3->token_terminator = VAR_3->line_start = VAR_0;
 VAR_3->line_number = 1;
 VAR_3->input_length = VAR_1;
 if (VAR_2)
  VAR_3->strval = FUNC_0();
 return VAR_3;
}
