
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int info ;
struct TYPE_7__ {int ex_issuer; int ex_subject; } ;
typedef TYPE_1__ cert_struct_test_t ;
struct TYPE_8__ {int lpszSubjectInfo; int lpszIssuerInfo; int lpszSignatureAlgName; int lpszEncryptionAlgName; int lpszProtocolName; int dwKeySize; } ;
typedef TYPE_2__ INTERNET_CERTIFICATE_INFOA ;
typedef int HINTERNET ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,TYPE_2__*,int*) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(HINTERNET VAR_1, const cert_struct_test_t *VAR_2)
{
    INTERNET_CERTIFICATE_INFOA VAR_3;
    DWORD VAR_4;
    BOOL VAR_5;

    FUNC_2(&VAR_3, 0x5, sizeof(VAR_3));

    VAR_4 = sizeof(VAR_3);
    VAR_5 = FUNC_1(VAR_1, VAR_0, &VAR_3, &VAR_4);
    FUNC_3(VAR_5, "InternetQueryOption failed: %u\n", FUNC_0());
    FUNC_3(VAR_4 == sizeof(VAR_3), "size = %u\n", VAR_4);

    FUNC_3(!FUNC_5(VAR_3.lpszSubjectInfo, VAR_2->ex_subject), "lpszSubjectInfo = %s\n", VAR_3.lpszSubjectInfo);
    FUNC_3(!FUNC_5(VAR_3.lpszIssuerInfo, VAR_2->ex_issuer), "lpszIssuerInfo = %s\n", VAR_3.lpszIssuerInfo);
    FUNC_3(!VAR_3.lpszSignatureAlgName, "lpszSignatureAlgName = %s\n", VAR_3.lpszSignatureAlgName);
    FUNC_3(!VAR_3.lpszEncryptionAlgName, "lpszEncryptionAlgName = %s\n", VAR_3.lpszEncryptionAlgName);
    FUNC_3(!VAR_3.lpszProtocolName, "lpszProtocolName = %s\n", VAR_3.lpszProtocolName);
    FUNC_3(VAR_3.dwKeySize >= 128 && VAR_3.dwKeySize <= 256, "dwKeySize = %u\n", VAR_3.dwKeySize);

    FUNC_4(&VAR_3);
}
