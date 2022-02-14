
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int permission; scalar_t__ mode; int key_len; scalar_t__* encryption_key; scalar_t__* encrypt_id; scalar_t__* owner_key; scalar_t__* user_passwd; } ;
typedef int HPDF_UINT ;
typedef int HPDF_MD5_CTX ;
typedef TYPE_1__* HPDF_Encrypt ;
typedef scalar_t__ HPDF_BYTE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__*,int) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;

void
FUNC_4 (HPDF_Encrypt VAR_3)
{
    HPDF_MD5_CTX VAR_4;
    HPDF_BYTE VAR_5[4];

    FUNC_3((" HPDF_Encrypt_CreateEncryptionKey\n"));


    FUNC_1(&VAR_4);
    FUNC_2(&VAR_4, VAR_3->user_passwd, VAR_2);


    FUNC_2(&VAR_4, VAR_3->owner_key, VAR_2);



    FUNC_3(("@@@ permission =%d\n", VAR_3->permission));
    VAR_5[0] = (HPDF_BYTE)(VAR_3->permission);
    VAR_5[1] = (HPDF_BYTE)(VAR_3->permission >> 8);
    VAR_5[2] = (HPDF_BYTE)(VAR_3->permission >> 16);
    VAR_5[3] = (HPDF_BYTE)(VAR_3->permission >> 24);

    FUNC_2(&VAR_4, VAR_5, 4);


    FUNC_3(("@ Algorithm 3.2 step 5\n"));

    FUNC_2(&VAR_4, VAR_3->encrypt_id, VAR_1);
    FUNC_0(VAR_3->encryption_key, &VAR_4);


    if (VAR_3->mode == VAR_0) {
        HPDF_UINT VAR_6;

        for (VAR_6 = 0; VAR_6 < 50; VAR_6++) {
            FUNC_3(("@ Algorithm 3.3 step 6 loop %u\n", VAR_6));
            FUNC_1(&VAR_4);
            FUNC_2 (&VAR_4, VAR_3->encryption_key, VAR_3->key_len);
            FUNC_0(VAR_3->encryption_key, &VAR_4);
        }
    }
}
