
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* input_stream; char* eof; char* parse_point; char* string_storage; int string_storage_len; } ;
typedef TYPE_1__ stb_lexer ;



void FUNC_0(stb_lexer *VAR_0, const char *VAR_1, const char *VAR_2, char *VAR_3, int VAR_4)
{
   VAR_0->input_stream = (char *) VAR_1;
   VAR_0->eof = (char *) VAR_2;
   VAR_0->parse_point = (char *) VAR_1;
   VAR_0->string_storage = VAR_3;
   VAR_0->string_storage_len = VAR_4;
}
