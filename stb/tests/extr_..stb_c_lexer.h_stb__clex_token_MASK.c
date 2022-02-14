
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int token; char* where_firstchar; char* where_lastchar; char* parse_point; } ;
typedef TYPE_1__ stb_lexer ;



__attribute__((used)) static int FUNC_0(stb_lexer *VAR_0, int VAR_1, char *VAR_2, char *VAR_3)
{
   VAR_0->token = VAR_1;
   VAR_0->where_firstchar = VAR_2;
   VAR_0->where_lastchar = VAR_3;
   VAR_0->parse_point = VAR_3+1;
   return 1;
}
