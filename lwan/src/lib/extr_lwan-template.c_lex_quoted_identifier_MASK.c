
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lexer*,int ) ;
 void* FUNC_1 (struct lexer*,char*,int) ;
 int FUNC_2 (struct lexer*) ;
 void* VAR_2 ;
 int FUNC_3 (struct lexer*) ;

__attribute__((used)) static void *FUNC_4(struct lexer *VAR_3)
{
    int VAR_4;

    FUNC_0(VAR_3, VAR_1);
    FUNC_2(VAR_3);

    VAR_4 = FUNC_3(VAR_3);
    if (VAR_4 != '}')
        return FUNC_1(VAR_3, "expecting `}', found `%c'", VAR_4);

    FUNC_0(VAR_3, VAR_0);
    return VAR_2;
}
