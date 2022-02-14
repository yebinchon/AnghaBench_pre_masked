
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t session_id_length; size_t master_key_length; int * master_key; int * session_id; } ;
typedef TYPE_1__ SSL_SESSION ;
typedef int BIO ;


 scalar_t__ FUNC_0 (int *,char*,int ) ;
 scalar_t__ FUNC_1 (int *,char*) ;

int FUNC_2(BIO *VAR_0, const SSL_SESSION *VAR_1)
{
    size_t VAR_2;

    if (VAR_1 == ((void*)0))
        goto err;
    if (VAR_1->session_id_length == 0 || VAR_1->master_key_length == 0)
        goto err;






    if (FUNC_1(VAR_0, "RSA ") <= 0)
        goto err;

    if (FUNC_1(VAR_0, "Session-ID:") <= 0)
        goto err;
    for (VAR_2 = 0; VAR_2 < VAR_1->session_id_length; VAR_2++) {
        if (FUNC_0(VAR_0, "%02X", VAR_1->session_id[VAR_2]) <= 0)
            goto err;
    }
    if (FUNC_1(VAR_0, " Master-Key:") <= 0)
        goto err;
    for (VAR_2 = 0; VAR_2 < VAR_1->master_key_length; VAR_2++) {
        if (FUNC_0(VAR_0, "%02X", VAR_1->master_key[VAR_2]) <= 0)
            goto err;
    }
    if (FUNC_1(VAR_0, "\n") <= 0)
        goto err;

    return 1;
 err:
    return 0;
}
