
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef char* uint32 ;
typedef int * PCCERT_CONTEXT ;


 int * FUNC_0 (int,int *,char*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,...) ;

PCCERT_CONTEXT FUNC_3(uint8 * VAR_2, uint32 VAR_3)
{
    PCCERT_CONTEXT VAR_4;
    if (!VAR_2 || !VAR_3)
    {
        FUNC_2("rdssl_cert_read %p %ld\n", *VAR_2, VAR_3);
        return ((void*)0);
    }
    VAR_4 = FUNC_0(VAR_1 | VAR_0, VAR_2, VAR_3);
    if (!VAR_4)
    {
        FUNC_2("CertCreateCertificateContext call failed with %lx\n", FUNC_1());
    }
    return VAR_4;
}
