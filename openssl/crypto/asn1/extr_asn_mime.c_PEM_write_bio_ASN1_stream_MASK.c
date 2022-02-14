
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;
typedef int ASN1_VALUE ;
typedef int ASN1_ITEM ;


 int FUNC_0 (int *,int *,int *,int,int const*) ;
 int FUNC_1 (int *,char*,char const*) ;

int FUNC_2(BIO *VAR_0, ASN1_VALUE *VAR_1, BIO *VAR_2, int VAR_3,
                              const char *VAR_4, const ASN1_ITEM *VAR_5)
{
    int VAR_6;
    FUNC_1(VAR_0, "-----BEGIN %s-----\n", VAR_4);
    VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5);
    FUNC_1(VAR_0, "-----END %s-----\n", VAR_4);
    return VAR_6;
}
