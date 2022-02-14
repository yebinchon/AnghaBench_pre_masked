
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexer {int pos; } ;


 int VAR_0 ;
 int FUNC_0 (struct lexer*) ;
 int FUNC_1 (struct lexer*,int ) ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_2 (struct lexer*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void *FUNC_4(struct lexer *VAR_4)
{
    VAR_4->pos += FUNC_3(VAR_1);
    int VAR_5 = FUNC_2(VAR_4);
    if (VAR_5 == '!')
        return VAR_2;
    FUNC_0(VAR_4);

    FUNC_1(VAR_4, VAR_0);
    return VAR_3;
}
