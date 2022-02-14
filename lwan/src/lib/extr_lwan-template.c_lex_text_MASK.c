
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexer {scalar_t__ pos; scalar_t__ start; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lexer*,int ) ;
 int VAR_3 ;
 void* FUNC_1 (struct lexer*,char*) ;
 void* VAR_4 ;
 scalar_t__ FUNC_2 (struct lexer*,int ,int ) ;
 scalar_t__ FUNC_3 (struct lexer*) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void *FUNC_5(struct lexer *VAR_6)
{
    do {
        if (FUNC_2(VAR_6, VAR_3, FUNC_4(VAR_3))) {
            if (VAR_6->pos > VAR_6->start)
                FUNC_0(VAR_6, VAR_2);
            return VAR_4;
        }

        if (FUNC_2(VAR_6, VAR_5, FUNC_4(VAR_5)))
            return FUNC_1(VAR_6, "unexpected action close sequence");
    } while (FUNC_3(VAR_6) != VAR_0);
    if (VAR_6->pos > VAR_6->start)
        FUNC_0(VAR_6, VAR_2);
    FUNC_0(VAR_6, VAR_1);
    return ((void*)0);
}
