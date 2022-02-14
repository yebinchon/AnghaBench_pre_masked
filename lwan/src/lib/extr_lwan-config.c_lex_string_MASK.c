
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct lexer*,int ) ;
 int FUNC_1 (struct lexer*) ;
 int FUNC_2 (struct lexer*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_4 (struct lexer*) ;
 char FUNC_5 (struct lexer*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void *FUNC_7(struct lexer *VAR_3)
{
    int VAR_4;

    do {
        VAR_4 = FUNC_4(VAR_3);

        if (VAR_4 == '$' && FUNC_5(VAR_3) == '{') {
            FUNC_1(VAR_3);
            FUNC_2(VAR_3, VAR_0);

            FUNC_0(VAR_3, FUNC_6("{"));

            return VAR_2;
        }
    } while (FUNC_3(VAR_4));

    FUNC_1(VAR_3);
    FUNC_2(VAR_3, VAR_0);

    return VAR_1;
}
