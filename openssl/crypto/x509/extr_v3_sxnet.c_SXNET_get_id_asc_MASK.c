
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SXNET ;
typedef int ASN1_OCTET_STRING ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int * FUNC_3 (int *,char const*) ;

ASN1_OCTET_STRING *FUNC_4(SXNET *VAR_2, const char *VAR_3)
{
    ASN1_INTEGER *VAR_4;
    ASN1_OCTET_STRING *VAR_5;

    if ((VAR_4 = FUNC_3(((void*)0), VAR_3)) == ((void*)0)) {
        FUNC_2(VAR_0, VAR_1);
        return ((void*)0);
    }
    VAR_5 = FUNC_1(VAR_2, VAR_4);
    FUNC_0(VAR_4);
    return VAR_5;
}
