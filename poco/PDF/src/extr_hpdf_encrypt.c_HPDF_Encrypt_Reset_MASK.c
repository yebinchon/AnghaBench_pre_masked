
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ key_len; int md5_encryption_key; int arc4ctx; } ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_1__* HPDF_Encrypt ;


 int FUNC_0 (int *,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;

void
FUNC_2 (HPDF_Encrypt VAR_1)
{
    HPDF_UINT VAR_2 = (VAR_1->key_len + 5 > VAR_0) ?
                    VAR_0 : VAR_1->key_len + 5;

    FUNC_1((" HPDF_Encrypt_Reset\n"));

    FUNC_0(&VAR_1->arc4ctx, VAR_1->md5_encryption_key, VAR_2);
}
