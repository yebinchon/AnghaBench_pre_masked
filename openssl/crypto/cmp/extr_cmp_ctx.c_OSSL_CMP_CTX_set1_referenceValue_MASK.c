
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int referenceValue; } ;
typedef TYPE_1__ OSSL_CMP_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,unsigned char const*,int) ;

int FUNC_2(OSSL_CMP_CTX *VAR_1,
                                     const unsigned char *VAR_2, int VAR_3)
{
    if (VAR_1 == ((void*)0)) {
        FUNC_0(0, VAR_0);
        return 0;
    }
    return FUNC_1(&VAR_1->referenceValue, VAR_2,
                                                 VAR_3);
}
