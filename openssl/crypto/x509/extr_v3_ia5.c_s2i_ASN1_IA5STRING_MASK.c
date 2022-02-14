
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509V3_EXT_METHOD ;
typedef int X509V3_CTX ;
struct TYPE_5__ {int length; int data; } ;
typedef int ASN1_STRING ;
typedef TYPE_1__ ASN1_IA5STRING ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int *,char const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char const*) ;

ASN1_IA5STRING *FUNC_6(X509V3_EXT_METHOD *VAR_3,
                                   X509V3_CTX *VAR_4, const char *VAR_5)
{
    ASN1_IA5STRING *VAR_6;
    if (!VAR_5) {
        FUNC_3(VAR_1,
                  VAR_2);
        return ((void*)0);
    }
    if ((VAR_6 = FUNC_1()) == ((void*)0))
        goto err;
    if (!FUNC_2((ASN1_STRING *)VAR_6, VAR_5, FUNC_5(VAR_5))) {
        FUNC_0(VAR_6);
        return ((void*)0);
    }



    return VAR_6;
 err:
    FUNC_3(VAR_1, VAR_0);
    return ((void*)0);
}
