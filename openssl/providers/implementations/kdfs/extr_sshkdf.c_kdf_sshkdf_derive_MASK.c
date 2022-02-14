
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int session_id_len; int * session_id; int xcghash_len; int * xcghash; int key_len; int * key; int digest; } ;
typedef TYPE_1__ KDF_SSHKDF ;
typedef int EVP_MD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int const*,int *,int ,int *,int ,int *,int ,scalar_t__,unsigned char*,size_t) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_6, unsigned char *VAR_7,
                             size_t VAR_8)
{
    KDF_SSHKDF *VAR_9 = (KDF_SSHKDF *)VAR_6;
    const EVP_MD *VAR_10 = FUNC_2(&VAR_9->digest);

    if (VAR_10 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    if (VAR_9->key == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    if (VAR_9->xcghash == ((void*)0)) {
        FUNC_0(VAR_0, VAR_5);
        return 0;
    }
    if (VAR_9->session_id == ((void*)0)) {
        FUNC_0(VAR_0, VAR_3);
        return 0;
    }
    if (VAR_9->type == 0) {
        FUNC_0(VAR_0, VAR_4);
        return 0;
    }
    return FUNC_1(VAR_10, VAR_9->key, VAR_9->key_len,
                  VAR_9->xcghash, VAR_9->xcghash_len,
                  VAR_9->session_id, VAR_9->session_id_len,
                  VAR_9->type, VAR_7, VAR_8);
}
