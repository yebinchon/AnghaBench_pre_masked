
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO_ASN1_BUF_CTX ;
typedef int BIO ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(BIO *VAR_1)
{
    BIO_ASN1_BUF_CTX *VAR_2 = FUNC_3(sizeof(*VAR_2));

    if (VAR_2 == ((void*)0))
        return 0;
    if (!FUNC_4(VAR_2, VAR_0)) {
        FUNC_2(VAR_2);
        return 0;
    }
    FUNC_0(VAR_1, VAR_2);
    FUNC_1(VAR_1, 1);

    return 1;
}
