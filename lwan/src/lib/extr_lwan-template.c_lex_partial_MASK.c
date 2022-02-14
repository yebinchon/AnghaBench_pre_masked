
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct lexer*) ;
 int FUNC_1 (struct lexer*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 void* FUNC_4 (struct lexer*,char*,...) ;
 void* VAR_1 ;
 int FUNC_5 (struct lexer*) ;

__attribute__((used)) static void *FUNC_6(struct lexer *VAR_2)
{
    while (1) {
        int VAR_3 = FUNC_5(VAR_2);

        if (VAR_3 == VAR_0)
            return FUNC_4(VAR_2, "unexpected EOF while scanning action");
        if (VAR_3 == '\n')
            return FUNC_4(VAR_2, "actions cannot span multiple lines");
        if (FUNC_3(VAR_3)) {
            FUNC_1(VAR_2);
            continue;
        }
        if (FUNC_2(VAR_3)) {
            FUNC_0(VAR_2);
            return VAR_1;
        }
        return FUNC_4(VAR_2, "unexpected character: %c", VAR_3);
    }
}
