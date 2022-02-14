
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int token_terminator; int token_start; } ;
typedef TYPE_1__ JsonLexContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int,int) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7(JsonLexContext *VAR_2)
{
 char *VAR_3;
 int VAR_4;


 VAR_4 = VAR_2->token_terminator - VAR_2->token_start;
 VAR_3 = FUNC_5(VAR_4 + 1);
 FUNC_4(VAR_3, VAR_2->token_start, VAR_4);
 VAR_3[VAR_4] = '\0';

 FUNC_0(VAR_1,
   (FUNC_1(VAR_0),
    FUNC_3("invalid input syntax for type %s", "json"),
    FUNC_2("Token \"%s\" is invalid.", VAR_3),
    FUNC_6(VAR_2)));
}
