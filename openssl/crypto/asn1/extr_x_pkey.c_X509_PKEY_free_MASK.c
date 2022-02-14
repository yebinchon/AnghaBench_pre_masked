
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* key_data; scalar_t__ key_free; int dec_pkey; int enc_pkey; int enc_algor; } ;
typedef TYPE_1__ X509_PKEY ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

void FUNC_4(X509_PKEY *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;

    FUNC_3(VAR_0->enc_algor);
    FUNC_0(VAR_0->enc_pkey);
    FUNC_1(VAR_0->dec_pkey);
    if (VAR_0->key_free)
        FUNC_2(VAR_0->key_data);
    FUNC_2(VAR_0);
}
