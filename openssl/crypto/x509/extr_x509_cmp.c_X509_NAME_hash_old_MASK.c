
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* bytes; } ;
typedef TYPE_2__ X509_NAME ;
struct TYPE_5__ {int length; int data; } ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 scalar_t__ FUNC_0 (int *,unsigned char*,int *) ;
 scalar_t__ FUNC_1 (int *,int *,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int * FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int FUNC_7 (TYPE_2__*,int *) ;

unsigned long FUNC_8(X509_NAME *VAR_1)
{
    EVP_MD *VAR_2 = FUNC_5(((void*)0), VAR_0, "-fips");
    EVP_MD_CTX *VAR_3 = FUNC_4();
    unsigned long VAR_4 = 0;
    unsigned char VAR_5[16];

    if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
        goto end;


    FUNC_7(VAR_1, ((void*)0));
    if (FUNC_1(VAR_3, VAR_2, ((void*)0))
        && FUNC_2(VAR_3, VAR_1->bytes->data, VAR_1->bytes->length)
        && FUNC_0(VAR_3, VAR_5, ((void*)0)))
        VAR_4 = (((unsigned long)VAR_5[0]) | ((unsigned long)VAR_5[1] << 8L) |
               ((unsigned long)VAR_5[2] << 16L) | ((unsigned long)VAR_5[3] << 24L)
            ) & 0xffffffffL;

 end:
    FUNC_3(VAR_3);
    FUNC_6(VAR_2);

    return VAR_4;
}
