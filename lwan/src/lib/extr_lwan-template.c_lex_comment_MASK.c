
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct lexer*) ;
 int VAR_1 ;
 void* FUNC_1 (struct lexer*,char*) ;
 void* VAR_2 ;
 int FUNC_2 (struct lexer*) ;
 size_t FUNC_3 (int ) ;

__attribute__((used)) static void *FUNC_4(struct lexer *VAR_3)
{
    size_t VAR_4 = FUNC_3(VAR_1);

    do {
        int VAR_5 = FUNC_2(VAR_3);
        if (VAR_5 == '{')
            VAR_4++;
        else if (VAR_5 == '}')
            VAR_4--;
        else if (VAR_5 == VAR_0)
            return FUNC_1(VAR_3,
                             "unexpected EOF while scanning comment end");
    } while (VAR_4);

    FUNC_0(VAR_3);
    return VAR_2;
}
