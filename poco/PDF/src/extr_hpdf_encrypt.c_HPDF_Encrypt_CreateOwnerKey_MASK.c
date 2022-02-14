
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* owner_passwd; scalar_t__ mode; int key_len; int* user_passwd; int* owner_key; } ;
typedef int HPDF_UINT ;
typedef int HPDF_MD5_CTX ;
typedef TYPE_1__* HPDF_Encrypt ;
typedef int HPDF_BYTE ;
typedef int HPDF_ARC4_Ctx_Rec ;


 int FUNC_0 (int *,int*,int*,int) ;
 int FUNC_1 (int *,int*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int*,int) ;
 int VAR_1 ;
 int FUNC_5 (int*,int*,int) ;
 int VAR_2 ;
 int FUNC_6 (char*) ;

void
FUNC_7 (HPDF_Encrypt VAR_3)
{
    HPDF_ARC4_Ctx_Rec VAR_4;
    HPDF_MD5_CTX VAR_5;
    HPDF_BYTE VAR_6[VAR_1];
    HPDF_BYTE VAR_7[VAR_2];

    FUNC_6((" HPDF_Encrypt_CreateOwnerKey\n"));




    FUNC_3(&VAR_5);
    FUNC_4(&VAR_5, VAR_3->owner_passwd, VAR_2);

    FUNC_6(("@ Algorithm 3.3 step 2\n"));

    FUNC_2(VAR_6, &VAR_5);


    if (VAR_3->mode == VAR_0) {
        HPDF_UINT VAR_8;

        for (VAR_8 = 0; VAR_8 < 50; VAR_8++) {
            FUNC_3(&VAR_5);


            FUNC_4 (&VAR_5, VAR_6, VAR_3->key_len);
            FUNC_2(VAR_6, &VAR_5);

            FUNC_6(("@ Algorithm 3.3 step 3 loop %u\n", VAR_8));
        }
    }


    FUNC_6(("@ Algorithm 3.3 step 7 loop 0\n"));

    FUNC_1 (&VAR_4, VAR_6, VAR_3->key_len);

    FUNC_6(("@ Algorithm 3.3 step 5\n"));


    FUNC_6(("@ Algorithm 3.3 step 6\n"));
    FUNC_0 (&VAR_4, VAR_3->user_passwd, VAR_7, VAR_2);


    FUNC_6(("@ Algorithm 3.3 step 7\n"));
    if (VAR_3->mode == VAR_0) {
        HPDF_BYTE VAR_9[VAR_2];
        HPDF_UINT VAR_10;

        for (VAR_10 = 1; VAR_10 <= 19; VAR_10++) {
            HPDF_UINT VAR_11;
            HPDF_BYTE VAR_12[VAR_1];

            for (VAR_11 = 0; VAR_11 < VAR_3->key_len; VAR_11++)
                VAR_12[VAR_11] = (HPDF_BYTE)(VAR_6[VAR_11] ^ VAR_10);

            FUNC_6(("@ Algorithm 3.3 step 7 loop %u\n", VAR_10));

            FUNC_5 (VAR_9, VAR_7, VAR_2);
            FUNC_1(&VAR_4, VAR_12, VAR_3->key_len);
            FUNC_0(&VAR_4, VAR_9, VAR_7, VAR_2);
        }
    }


    FUNC_6(("@ Algorithm 3.3 step 8\n"));
    FUNC_5 (VAR_3->owner_key, VAR_7, VAR_2);
}
