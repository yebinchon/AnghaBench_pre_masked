
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lower_bound_checks; int iter; int salt_len; int * salt; int pass_len; int * pass; int digest; } ;
typedef TYPE_1__ KDF_PBKDF2 ;
typedef int EVP_MD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int *,int ,int ,int const*,unsigned char*,size_t,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_3, unsigned char *VAR_4,
                             size_t VAR_5)
{
    KDF_PBKDF2 *VAR_6 = (KDF_PBKDF2 *)VAR_3;
    const EVP_MD *VAR_7 = FUNC_1(&VAR_6->digest);

    if (VAR_6->pass == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    if (VAR_6->salt == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }

    return FUNC_2((char *)VAR_6->pass, VAR_6->pass_len,
                         VAR_6->salt, VAR_6->salt_len, VAR_6->iter,
                         VAR_7, VAR_4, VAR_5, VAR_6->lower_bound_checks);
}
