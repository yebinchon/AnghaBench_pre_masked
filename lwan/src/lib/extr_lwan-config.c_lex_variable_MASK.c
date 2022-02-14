
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lexer*,scalar_t__) ;
 int FUNC_1 (struct lexer*) ;
 int FUNC_2 (struct lexer*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 void* VAR_2 ;
 void* FUNC_4 (struct lexer*,char*) ;
 void* VAR_3 ;
 int FUNC_5 (struct lexer*) ;
 scalar_t__ FUNC_6 (char*) ;

__attribute__((used)) static void *FUNC_7(struct lexer *VAR_4)
{
    int VAR_5;

    FUNC_0(VAR_4, FUNC_6("${") - 1);

    do {
        VAR_5 = FUNC_5(VAR_4);

        if (VAR_5 == ':') {
            FUNC_1(VAR_4);
            FUNC_2(VAR_4, VAR_1);
            FUNC_0(VAR_4, FUNC_6(":"));
            return VAR_3;
        }

        if (VAR_5 == '}') {
            FUNC_1(VAR_4);
            FUNC_2(VAR_4, VAR_0);
            FUNC_0(VAR_4, FUNC_6("}"));

            return VAR_2;
        }
    } while (FUNC_3(VAR_5));

    return FUNC_4(VAR_4, "EOF while scanning for end of variable");
}
