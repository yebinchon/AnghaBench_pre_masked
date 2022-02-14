
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct lexer*,int ) ;
 int FUNC_1 (struct lexer*) ;
 int FUNC_2 (struct lexer*,int ) ;
 void* VAR_1 ;
 void* FUNC_3 (struct lexer*,char*) ;
 int FUNC_4 (struct lexer*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void *FUNC_6(struct lexer *VAR_2)
{
    int VAR_3;

    do {
        VAR_3 = FUNC_4(VAR_2);

        if (VAR_3 == '}') {
            FUNC_1(VAR_2);
            FUNC_2(VAR_2, VAR_0);

            FUNC_0(VAR_2, FUNC_5("}"));

            return VAR_1;
        }
    } while (VAR_3 != '\0');

    return FUNC_3(VAR_2, "EOF while scanning for end of variable");
}
