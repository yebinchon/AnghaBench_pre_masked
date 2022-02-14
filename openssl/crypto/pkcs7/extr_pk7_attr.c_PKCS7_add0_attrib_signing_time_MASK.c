
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PKCS7_SIGNER_INFO ;
typedef int ASN1_TIME ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int * FUNC_2 (int *,int ) ;

int FUNC_3(PKCS7_SIGNER_INFO *VAR_4, ASN1_TIME *VAR_5)
{
    if (VAR_5 == ((void*)0) && (VAR_5 = FUNC_2(((void*)0), 0)) == ((void*)0)) {
        FUNC_1(VAR_2,
                 VAR_0);
        return 0;
    }
    return FUNC_0(VAR_4, VAR_1,
                                      VAR_3, VAR_5);
}
