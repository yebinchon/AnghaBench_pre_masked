
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ks; } ;
struct TYPE_4__ {TYPE_1__ ks; } ;
typedef TYPE_2__ PROV_RC4_CTX ;
typedef int PROV_CIPHER_CTX ;


 int FUNC_0 (int *,size_t,unsigned char const*,unsigned char*) ;

__attribute__((used)) static int FUNC_1(PROV_CIPHER_CTX *VAR_0, unsigned char *VAR_1,
                                const unsigned char *VAR_2, size_t VAR_3)
{
    PROV_RC4_CTX *VAR_4 = (PROV_RC4_CTX *)VAR_0;

    FUNC_0(&VAR_4->ks.ks, VAR_3, VAR_2, VAR_1);
    return 1;
}
