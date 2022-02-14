
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ err_stack; int used; int stack; scalar_t__ too_many; } ;
typedef TYPE_1__ BN_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,TYPE_1__*) ;

void FUNC_3(BN_CTX *VAR_2)
{
    FUNC_2("ENTER BN_CTX_start()", VAR_2);

    if (VAR_2->err_stack || VAR_2->too_many)
        VAR_2->err_stack++;

    else if (!FUNC_0(&VAR_2->stack, VAR_2->used)) {
        FUNC_1(VAR_0, VAR_1);
        VAR_2->err_stack++;
    }
    FUNC_2("LEAVE BN_CTX_start()", VAR_2);
}
