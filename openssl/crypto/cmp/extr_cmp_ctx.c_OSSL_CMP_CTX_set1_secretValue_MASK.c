
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int length; int data; } ;
struct TYPE_4__ {TYPE_2__* secretValue; } ;
typedef TYPE_1__ OSSL_CMP_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__**,unsigned char const*,int const) ;

int FUNC_3(OSSL_CMP_CTX *VAR_1, const unsigned char *VAR_2,
                                  const int VAR_3)
{
    if (VAR_1 == ((void*)0)) {
        FUNC_0(0, VAR_0);
        return 0;
    }
    if (VAR_1->secretValue != ((void*)0))
        FUNC_1(VAR_1->secretValue->data, VAR_1->secretValue->length);
    return FUNC_2(&VAR_1->secretValue, VAR_2, VAR_3);
}
