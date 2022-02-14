
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* input_stream; } ;
typedef TYPE_1__ stb_lexer ;
struct TYPE_6__ {int line_number; int line_offset; } ;
typedef TYPE_2__ stb_lex_location ;



void FUNC_0(const stb_lexer *VAR_0, const char *VAR_1, stb_lex_location *VAR_2)
{
   char *VAR_3 = VAR_0->input_stream;
   int VAR_4 = 1;
   int VAR_5 = 0;
   while (*VAR_3 && VAR_3 < VAR_1) {
      if (*VAR_3 == '\n' || *VAR_3 == '\r') {
         VAR_3 += (VAR_3[0]+VAR_3[1] == '\r'+'\n' ? 2 : 1);
         VAR_4 += 1;
         VAR_5 = 0;
      } else {
         ++VAR_3;
         ++VAR_5;
      }
   }
   VAR_2->line_number = VAR_4;
   VAR_2->line_offset = VAR_5;
}
