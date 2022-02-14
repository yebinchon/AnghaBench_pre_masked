
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int info_len; int info; int key_len; int key; int salt; int digest; } ;
typedef TYPE_1__ KDF_HKDF ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_0)
{
    KDF_HKDF *VAR_1 = (KDF_HKDF *)VAR_0;

    FUNC_4(&VAR_1->digest);
    FUNC_2(VAR_1->salt);
    FUNC_1(VAR_1->key, VAR_1->key_len);
    FUNC_0(VAR_1->info, VAR_1->info_len);
    FUNC_3(VAR_1, 0, sizeof(*VAR_1));
}
