
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i; } ;
typedef int OPENSSL_CTX ;
typedef TYPE_1__ FOO ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int *,int ,int *) ;

__attribute__((used)) static int FUNC_3(OPENSSL_CTX *VAR_1)
{
    FOO *VAR_2 = ((void*)0);

    return FUNC_1(VAR_2 = FUNC_2(VAR_1, 0, &VAR_0))

        && FUNC_0(VAR_2->i, 42);
}
