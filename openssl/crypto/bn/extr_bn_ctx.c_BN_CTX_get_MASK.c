
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {int too_many; int used; int flags; int pool; scalar_t__ err_stack; } ;
typedef TYPE_1__ BN_CTX ;
typedef TYPE_2__ BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,TYPE_1__*) ;

BIGNUM *FUNC_4(BN_CTX *VAR_3)
{
    BIGNUM *VAR_4;

    FUNC_3("ENTER BN_CTX_get()", VAR_3);
    if (VAR_3->err_stack || VAR_3->too_many)
        return ((void*)0);
    if ((VAR_4 = FUNC_0(&VAR_3->pool, VAR_3->flags)) == ((void*)0)) {




        VAR_3->too_many = 1;
        FUNC_2(VAR_1, VAR_2);
        return ((void*)0);
    }

    FUNC_1(VAR_4);

    VAR_4->flags &= (~VAR_0);
    VAR_3->used++;
    FUNC_3("LEAVE BN_CTX_get()", VAR_3);
    return VAR_4;
}
