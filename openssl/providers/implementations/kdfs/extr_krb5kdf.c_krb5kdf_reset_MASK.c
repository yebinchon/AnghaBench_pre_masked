
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int constant_len; int constant; int key_len; int key; int cipher; } ;
typedef TYPE_1__ KRB5KDF_CTX ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
    KRB5KDF_CTX *VAR_1 = (KRB5KDF_CTX *)VAR_0;

    FUNC_2(&VAR_1->cipher);
    FUNC_0(VAR_1->key, VAR_1->key_len);
    FUNC_0(VAR_1->constant, VAR_1->constant_len);
    FUNC_1(VAR_1, 0, sizeof(*VAR_1));
}
