
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hashProperty ;
typedef int hash ;
typedef int PCCERT_CONTEXT ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;
typedef int ALG_ID ;


 int FUNC_0 (int ,int,int *,int*) ;
 int FUNC_1 (int ,int ,int ,int const*,int,int *,int*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int,char*,int,...) ;

__attribute__((used)) static void FUNC_6(const BYTE *VAR_0, DWORD VAR_1, ALG_ID VAR_2,
 PCCERT_CONTEXT VAR_3, DWORD VAR_4)
{
    BYTE VAR_5[20] = { 0 }, VAR_6[20];
    BOOL VAR_7;
    DWORD VAR_8;
    DWORD VAR_9;

    FUNC_4(VAR_5, 0, sizeof(VAR_5));
    FUNC_4(VAR_6, 0, sizeof(VAR_6));
    VAR_8 = sizeof(VAR_5);
    VAR_7 = FUNC_1(0, VAR_2, 0, VAR_0, VAR_1, VAR_5, &VAR_8);
    FUNC_5(VAR_7, "CryptHashCertificate failed: %08x\n", FUNC_2());
    VAR_7 = FUNC_0(VAR_3, VAR_4, ((void*)0),
     &VAR_9);
    FUNC_5(VAR_7, "algID %08x, propID %d: CertGetCertificateContextProperty failed: %08x\n",
     VAR_2, VAR_4, FUNC_2());
    VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_6,
     &VAR_8);
    FUNC_5(VAR_7, "CertGetCertificateContextProperty failed: %08x\n",
     FUNC_2());
    FUNC_5(!FUNC_3(VAR_5, VAR_6, VAR_8), "Unexpected hash for property %d\n",
     VAR_4);
    FUNC_5(VAR_8 == VAR_9, "Unexpected length of hash for property: received %d instead of %d\n",
     VAR_9,VAR_8);
}
