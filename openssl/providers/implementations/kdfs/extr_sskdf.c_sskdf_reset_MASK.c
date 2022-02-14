
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int salt_len; int salt; int info_len; int info; int secret_len; int secret; int digest; int macctx; } ;
typedef TYPE_1__ KDF_SSKDF ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
    KDF_SSKDF *VAR_1 = (KDF_SSKDF *)VAR_0;

    FUNC_0(VAR_1->macctx);
    FUNC_3(&VAR_1->digest);
    FUNC_1(VAR_1->secret, VAR_1->secret_len);
    FUNC_1(VAR_1->info, VAR_1->info_len);
    FUNC_1(VAR_1->salt, VAR_1->salt_len);
    FUNC_2(VAR_1, 0, sizeof(*VAR_1));
}
