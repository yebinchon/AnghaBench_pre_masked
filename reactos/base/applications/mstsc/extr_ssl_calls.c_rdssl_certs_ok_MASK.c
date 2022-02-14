
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RD_BOOL ;
typedef int PCCERT_CONTEXT ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,scalar_t__) ;

RD_BOOL FUNC_3(PCCERT_CONTEXT VAR_1, PCCERT_CONTEXT VAR_2)
{

    DWORD VAR_3 = VAR_0;
    BOOL VAR_4 = FUNC_0(VAR_1,
                                                   VAR_2,
                                                   &VAR_3);
    if (!VAR_4)
    {
        FUNC_2("CertVerifySubjectCertificateContext call failed with %lx\n", FUNC_1());
    }
    if (VAR_3)
    {
        FUNC_2("CertVerifySubjectCertificateContext check failed %lx\n", VAR_3);
    }
    return (VAR_3 == 0);
}
