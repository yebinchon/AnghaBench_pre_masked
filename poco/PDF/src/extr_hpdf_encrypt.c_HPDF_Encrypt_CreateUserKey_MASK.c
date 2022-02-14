
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* encryption_key; int key_len; int* user_key; scalar_t__ mode; int* encrypt_id; } ;
typedef int HPDF_UINT ;
typedef int HPDF_MD5_CTX ;
typedef TYPE_1__* HPDF_Encrypt ;
typedef int HPDF_BYTE ;
typedef int HPDF_ARC4_Ctx_Rec ;


 int FUNC_0 (int *,int*,int*,int) ;
 int FUNC_1 (int *,int*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int*,int) ;
 int VAR_2 ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (int*,int ,int) ;
 int* VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (char*) ;

void
FUNC_8 (HPDF_Encrypt VAR_5)
{
    HPDF_ARC4_Ctx_Rec VAR_6;

    FUNC_7((" HPDF_Encrypt_CreateUserKey\n"));




    FUNC_1(&VAR_6, VAR_5->encryption_key, VAR_5->key_len);
    FUNC_0(&VAR_6, VAR_3, VAR_5->user_key, VAR_4);

    if (VAR_5->mode == VAR_0) {
        HPDF_MD5_CTX VAR_7;
        HPDF_BYTE VAR_8[VAR_2];
        HPDF_BYTE VAR_9[VAR_2];
        HPDF_UINT VAR_10;


        FUNC_3(&VAR_7);
        FUNC_4(&VAR_7, VAR_3, VAR_4);


        FUNC_4(&VAR_7, VAR_5->encrypt_id, VAR_1);
        FUNC_2(VAR_8, &VAR_7);

        FUNC_7(("@ Algorithm 3.5 step 3\n"));


        FUNC_1(&VAR_6, VAR_5->encryption_key, VAR_5->key_len);
        FUNC_0(&VAR_6, VAR_8, VAR_9, VAR_2);

        FUNC_7(("@ Algorithm 3.5 step 4\n"));


        for (VAR_10 = 1; VAR_10 <= 19; VAR_10++) {
            HPDF_UINT VAR_11;
            HPDF_BYTE VAR_12[VAR_2];

            FUNC_7(("@ Algorithm 3.5 step 5 loop %u\n", VAR_10));

            for (VAR_11 = 0; VAR_11 < VAR_5->key_len; VAR_11++)
                VAR_12[VAR_11] = (HPDF_BYTE)(VAR_5->encryption_key[VAR_11] ^ VAR_10);

            FUNC_5 (VAR_8, VAR_9, VAR_2);

            FUNC_1(&VAR_6, VAR_12, VAR_5->key_len);
            FUNC_0(&VAR_6, VAR_8, VAR_9, VAR_2);
        }


        FUNC_6 (VAR_5->user_key, 0, VAR_4);
        FUNC_5 (VAR_5->user_key, VAR_9, VAR_2);
    }
}
