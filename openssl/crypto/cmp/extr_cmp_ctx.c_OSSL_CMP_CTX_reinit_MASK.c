
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int status; int failInfoCode; } ;
typedef TYPE_1__ OSSL_CMP_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int *) ;

int FUNC_9(OSSL_CMP_CTX *VAR_1)
{
    if (VAR_1 == ((void*)0)) {
        FUNC_0(0, VAR_0);
        return 0;
    }

    VAR_1->status = -1;
    VAR_1->failInfoCode = -1;

    return FUNC_4(VAR_1, ((void*)0))
        && FUNC_3(VAR_1, ((void*)0))
        && FUNC_6(VAR_1, ((void*)0))
        && FUNC_7(VAR_1, ((void*)0))
        && FUNC_5(VAR_1, ((void*)0))
        && FUNC_2(VAR_1, ((void*)0))
        && FUNC_1(VAR_1, ((void*)0))
        && FUNC_8(VAR_1, ((void*)0));
}
