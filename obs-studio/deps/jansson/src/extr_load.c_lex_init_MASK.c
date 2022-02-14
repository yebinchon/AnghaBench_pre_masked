
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t flags; int token; int saved_text; int stream; } ;
typedef TYPE_1__ lex_t ;
typedef int get_func ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,void*) ;

__attribute__((used)) static int FUNC_2(lex_t *VAR_1, get_func VAR_2, size_t VAR_3, void *VAR_4)
{
    FUNC_1(&VAR_1->stream, VAR_2, VAR_4);
    if(FUNC_0(&VAR_1->saved_text))
        return -1;

    VAR_1->flags = VAR_3;
    VAR_1->token = VAR_0;
    return 0;
}
