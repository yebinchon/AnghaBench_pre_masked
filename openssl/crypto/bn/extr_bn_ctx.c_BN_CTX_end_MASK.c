
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int used; scalar_t__ too_many; int pool; int stack; scalar_t__ err_stack; } ;
typedef TYPE_1__ BN_CTX ;


 int FUNC_0 (int *,unsigned int) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (char*,TYPE_1__*) ;

void FUNC_3(BN_CTX *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;
    FUNC_2("ENTER BN_CTX_end()", VAR_0);
    if (VAR_0->err_stack)
        VAR_0->err_stack--;
    else {
        unsigned int VAR_1 = FUNC_1(&VAR_0->stack);

        if (VAR_1 < VAR_0->used)
            FUNC_0(&VAR_0->pool, VAR_0->used - VAR_1);
        VAR_0->used = VAR_1;

        VAR_0->too_many = 0;
    }
    FUNC_2("LEAVE BN_CTX_end()", VAR_0);
}
