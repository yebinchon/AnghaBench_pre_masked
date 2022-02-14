
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* input; char* token_terminator; scalar_t__ token_type; int input_length; } ;
typedef TYPE_1__ JsonLexContext ;


 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int,char const*,char*,char const*) ;
 int FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(JsonLexContext *VAR_1)
{
 const char *VAR_2;
 const char *VAR_3;
 const char *VAR_4;
 int VAR_5;
 char *VAR_6;
 int VAR_7;
 const char *VAR_8;
 const char *VAR_9;


 VAR_2 = VAR_1->input;
 VAR_3 = VAR_1->token_terminator;
 VAR_4 = VAR_2;
 VAR_5 = 1;
 for (;;)
 {

  if (VAR_2 < VAR_3 && *VAR_2 == '\n')
  {
   VAR_2++;
   VAR_4 = VAR_2;
   VAR_5++;
   continue;
  }

  if (VAR_3 - VAR_2 < 50)
   break;

  if (FUNC_0(*VAR_2))
   VAR_2 += FUNC_4(VAR_2);
  else
   VAR_2++;
 }






 if (VAR_2 - VAR_4 <= 3)
  VAR_2 = VAR_4;


 VAR_7 = VAR_3 - VAR_2;
 VAR_6 = FUNC_3(VAR_7 + 1);
 FUNC_2(VAR_6, VAR_2, VAR_7);
 VAR_6[VAR_7] = '\0';





 VAR_8 = (VAR_2 > VAR_4) ? "..." : "";
 VAR_9 = (VAR_1->token_type != VAR_0 && VAR_3 - VAR_1->input < VAR_1->input_length && *VAR_3 != '\n' && *VAR_3 != '\r') ? "..." : "";

 return FUNC_1("JSON data, line %d: %s%s%s",
       VAR_5, VAR_8, VAR_6, VAR_9);
}
