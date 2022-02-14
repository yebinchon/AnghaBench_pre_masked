
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexer {int pos; } ;


 int VAR_0 ;
 int FUNC_0 (struct lexer*,scalar_t__) ;
 int FUNC_1 (struct lexer*,int ) ;
 void* VAR_1 ;
 void* FUNC_2 (struct lexer*,char*) ;
 scalar_t__ FUNC_3 (struct lexer*,char const*,int) ;
 char FUNC_4 (struct lexer*) ;
 char FUNC_5 (struct lexer*) ;
 scalar_t__ FUNC_6 (char*) ;

__attribute__((used)) static void *FUNC_7(struct lexer *VAR_2)
{
    const char *VAR_3 = (FUNC_5(VAR_2) == '"') ? "\"\"\"" : "'''";

    FUNC_0(VAR_2, FUNC_6("'''") - 1);

    do {
        if (FUNC_3(VAR_2, VAR_3, 3)) {
            FUNC_1(VAR_2, VAR_0);
            VAR_2->pos += 3;

            return VAR_1;
        }
    } while (FUNC_4(VAR_2) != '\0');

    return FUNC_2(VAR_2, "EOF while scanning multiline string");
}
