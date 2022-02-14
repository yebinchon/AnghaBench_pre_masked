
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t key_len; int md5_encryption_key; int arc4ctx; void** encryption_key; } ;
typedef int HPDF_UINT32 ;
typedef int HPDF_UINT16 ;
typedef size_t HPDF_UINT ;
typedef int HPDF_MD5_CTX ;
typedef int HPDF_INT ;
typedef TYPE_1__* HPDF_Encrypt ;
typedef void* HPDF_BYTE ;


 int FUNC_0 (int *,int ,size_t) ;
 size_t VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,void**,size_t) ;
 int FUNC_4 (char*) ;

void
FUNC_5 (HPDF_Encrypt VAR_1,
                       HPDF_UINT32 VAR_2,
                       HPDF_UINT16 VAR_3)
{
    HPDF_MD5_CTX VAR_4;
    HPDF_UINT VAR_5;

    FUNC_4((" HPDF_Encrypt_Init\n"));

    VAR_1->encryption_key[VAR_1->key_len] = (HPDF_BYTE)VAR_2;
    VAR_1->encryption_key[VAR_1->key_len + 1] = (HPDF_BYTE)(VAR_2 >> 8);
    VAR_1->encryption_key[VAR_1->key_len + 2] = (HPDF_BYTE)(VAR_2 >> 16);
    VAR_1->encryption_key[VAR_1->key_len + 3] = (HPDF_BYTE)VAR_3;
    VAR_1->encryption_key[VAR_1->key_len + 4] = (HPDF_BYTE)(VAR_3 >> 8);

    FUNC_4(("@@@ OID=%u, gen_no=%u\n", (HPDF_INT)VAR_2, VAR_3));

    FUNC_2(&VAR_4);
    FUNC_3(&VAR_4, VAR_1->encryption_key, VAR_1->key_len + 5);
    FUNC_1(VAR_1->md5_encryption_key, &VAR_4);

    VAR_5 = (VAR_1->key_len + 5 > VAR_0) ?
                    VAR_0 : VAR_1->key_len + 5;

    FUNC_0(&VAR_1->arc4ctx, VAR_1->md5_encryption_key, VAR_5);
}
