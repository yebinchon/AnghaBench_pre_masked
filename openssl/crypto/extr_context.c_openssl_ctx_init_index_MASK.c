
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* dyn_indexes; } ;
typedef int OPENSSL_CTX_METHOD ;
typedef TYPE_1__ OPENSSL_CTX ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ,void*,int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(OPENSSL_CTX *VAR_3, int VAR_4,
                                  const OPENSSL_CTX_METHOD *VAR_5)
{
    int VAR_6;

    VAR_3 = FUNC_1(VAR_3);
    if (VAR_3 == ((void*)0))
        return 0;

    VAR_6 = FUNC_0(VAR_3, VAR_0, 0,
                                     (void *)VAR_5,
                                     VAR_2,
                                     ((void*)0), VAR_1);
    if (VAR_6 < 0)
        return 0;

    VAR_3->dyn_indexes[VAR_4] = VAR_6;
    return 1;
}
