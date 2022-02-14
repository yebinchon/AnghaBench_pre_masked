
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int session_id_len; int session_id; int xcghash_len; int xcghash; int key_len; int key; int digest; } ;
typedef TYPE_1__ KDF_SSHKDF ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
    KDF_SSHKDF *VAR_1 = (KDF_SSHKDF *)VAR_0;

    FUNC_2(&VAR_1->digest);
    FUNC_0(VAR_1->key, VAR_1->key_len);
    FUNC_0(VAR_1->xcghash, VAR_1->xcghash_len);
    FUNC_0(VAR_1->session_id, VAR_1->session_id_len);
    FUNC_1(VAR_1, 0, sizeof(*VAR_1));
}
