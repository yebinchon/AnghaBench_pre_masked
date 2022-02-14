
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* secret_a; size_t* outlen; int ** ecdh_ctx; } ;
typedef TYPE_1__ loopargs_t ;
typedef int EVP_PKEY_CTX ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned char*,size_t*) ;
 int ** VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static int FUNC_2(void *VAR_2)
{
    loopargs_t *VAR_3 = *(loopargs_t **) VAR_2;
    EVP_PKEY_CTX *VAR_4 = VAR_3->ecdh_ctx[VAR_1];
    unsigned char *VAR_5 = VAR_3->secret_a;
    int VAR_6;
    size_t *VAR_7 = &(VAR_3->outlen[VAR_1]);

    for (VAR_6 = 0; FUNC_0(VAR_0[VAR_1][0]); VAR_6++)
        FUNC_1(VAR_4, VAR_5, VAR_7);

    return VAR_6;
}
