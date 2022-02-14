
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * enc_pkey; int * enc_algor; } ;
typedef TYPE_1__ X509_PKEY ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int) ;
 int * FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;

X509_PKEY *FUNC_5(void)
{
    X509_PKEY *VAR_2 = ((void*)0);

    VAR_2 = FUNC_2(sizeof(*VAR_2));
    if (VAR_2 == ((void*)0))
        goto err;

    VAR_2->enc_algor = FUNC_3();
    VAR_2->enc_pkey = FUNC_0();
    if (VAR_2->enc_algor == ((void*)0) || VAR_2->enc_pkey == ((void*)0))
        goto err;

    return VAR_2;
err:
    FUNC_4(VAR_2);
    FUNC_1(VAR_0, VAR_1);
    return ((void*)0);
}
