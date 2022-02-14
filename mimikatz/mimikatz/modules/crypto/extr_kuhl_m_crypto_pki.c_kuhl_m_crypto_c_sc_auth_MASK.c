
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_17__ {char* pwszProvName; } ;
struct TYPE_16__ {int member_0; } ;
struct TYPE_15__ {char* member_5; int member_7; char* cn; TYPE_4__* cdp; int * member_12; TYPE_4__* member_11; TYPE_4__* member_10; scalar_t__ member_9; int member_8; int * member_6; int member_4; int * member_3; int * member_2; int * member_1; int * member_0; } ;
struct TYPE_13__ {int member_6; int * member_5; int member_4; int member_3; int member_2; int member_1; int * member_0; } ;
struct TYPE_14__ {int member_3; int * pin; int hProv; TYPE_5__ keyInfos; int member_2; int * member_1; TYPE_1__ member_0; } ;
typedef int PCCERT_CONTEXT ;
typedef int * PBYTE ;
typedef int NTSTATUS ;
typedef char* LPCWSTR ;
typedef TYPE_2__ KIWI_KEY_INFO ;
typedef TYPE_3__ KIWI_CERT_INFO ;
typedef int HCRYPTPROV_LEGACY ;
typedef int HCERTSTORE ;
typedef int DWORD ;
typedef TYPE_4__ CERT_EXTENSION ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int ,int ,char*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int,char*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 char* VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_8 (TYPE_2__*,TYPE_3__*,int ,int *,int **,int *,int *) ;
 int FUNC_9 (char*,char*,...) ;
 scalar_t__ FUNC_10 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_11 (TYPE_4__*,int,char*) ;
 scalar_t__ FUNC_12 (TYPE_4__*,int,int ,int ) ;
 int FUNC_13 (TYPE_4__*) ;
 scalar_t__ FUNC_14 (int *,int ,TYPE_5__*,char*) ;
 scalar_t__ FUNC_15 (int *,int ,TYPE_5__*,int ,char*,scalar_t__) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*) ;
 scalar_t__ FUNC_18 (int,int **,char*,char**,char*) ;
 int * FUNC_19 (char*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

NTSTATUS FUNC_20(int VAR_22, wchar_t * VAR_23[])
{
 LPCWSTR VAR_24, VAR_25, VAR_26 = ((void*)0), VAR_27, VAR_28;
 HCERTSTORE VAR_29;
 PCCERT_CONTEXT VAR_30;
 BOOL VAR_31 = VAR_11, VAR_32 = VAR_11;
 CERT_EXTENSION VAR_33 = {0}, VAR_34 = {0}, VAR_35 = {0};
 DWORD VAR_36 = 0;
 PBYTE VAR_37 = ((void*)0);
 KIWI_KEY_INFO VAR_38 = {{((void*)0), VAR_13, VAR_16, VAR_10, 0, ((void*)0), VAR_0}, ((void*)0), VAR_9, 2048};
 KIWI_CERT_INFO VAR_39 = {((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_12, L"FR", ((void*)0), VAR_2 | VAR_4, VAR_20 , VAR_11, &VAR_33, &VAR_34, ((void*)0)};

 if(FUNC_18(VAR_22, VAR_23, L"hw", ((void*)0), ((void*)0)))
 {
  FUNC_18(VAR_22, VAR_23, L"csp", &VAR_38.keyInfos.pwszProvName, VAR_14);
  if(FUNC_18(VAR_22, VAR_23, L"pin", &VAR_27, ((void*)0)))
   VAR_38.pin = FUNC_19(VAR_27);
 }
 VAR_32 = FUNC_18(VAR_22, VAR_23, L"nostore", ((void*)0), ((void*)0));
 FUNC_18(VAR_22, VAR_23, L"castore", &VAR_24, L"LOCAL_MACHINE");
 if(FUNC_18(VAR_22, VAR_23, L"caname", &VAR_25, ((void*)0)))
 {
  if(FUNC_18(VAR_22, VAR_23, L"upn", &VAR_39.cn, ((void*)0)))
  {
   FUNC_9(L"CA store       : %s\n", VAR_24);
   if((VAR_29 = FUNC_3(VAR_6, 0, (HCRYPTPROV_LEGACY) ((void*)0), FUNC_17(VAR_24) | VAR_5 | VAR_7, L"My")))
   {
    FUNC_9(L"CA name        : %s\n", VAR_25);
    if((VAR_30 = FUNC_1(VAR_29, VAR_18 | VAR_15, 0, VAR_3, VAR_25, ((void*)0))))
    {
     if(FUNC_12(&VAR_33, 2, VAR_19, VAR_21))
     {
      if(FUNC_10(&VAR_34, VAR_39.cn))
      {
       if(FUNC_18(VAR_22, VAR_23, L"crldp", &VAR_28, ((void*)0)))
        if(FUNC_11(&VAR_35, 1, VAR_28))
         VAR_39.cdp = &VAR_35;

       if(FUNC_8(&VAR_38, &VAR_39, VAR_30, ((void*)0), &VAR_37, &VAR_36, ((void*)0)))
       {
        if(FUNC_18(VAR_22, VAR_23, L"pfx", &VAR_26, ((void*)0)))
        {
         VAR_31 = FUNC_14(VAR_37, VAR_36, &VAR_38.keyInfos, VAR_26);
         FUNC_9(L"Private Export : %s - %s\n", VAR_26, VAR_31 ? L"OK" : L"KO");
        }
        else if(!VAR_32)
        {
         VAR_31 = FUNC_15(VAR_37, VAR_36, &VAR_38.keyInfos, VAR_8, L"My", VAR_11);
         FUNC_9(L"Private Store  : CERT_SYSTEM_STORE_CURRENT_USER/My - %s\n", VAR_31 ? L"OK" : L"KO");
        }

        if(!VAR_31 || VAR_26)
         FUNC_16(VAR_38.hProv);
        else
         FUNC_4(VAR_38.hProv, 0);
        FUNC_5(VAR_37);
       }
       if(VAR_39.cdp)
        FUNC_13(VAR_39.cdp);
       FUNC_13(&VAR_34);
      }
      else FUNC_7(L"Unable to generate SAN extension - kuhl_m_crypto_c_sc_auth_Ext_AltUPN");
      FUNC_13(&VAR_33);
     }
     else FUNC_7(L"Unable to generate EKU extension - kuhl_m_crypto_c_sc_auth_Ext_EKU");
     FUNC_2(VAR_30);
    }
    else FUNC_7(L"CertFindCertificateInStore");
    FUNC_0(VAR_29, VAR_1);
   }
   else FUNC_7(L"CertOpenStore");
  }
  else FUNC_6(L"/upn:user@domain.local needed\n");
 }
 else FUNC_6(L"/caname:CA-KIWI needed\n");

 if(VAR_38.pin)
  FUNC_5(VAR_38.pin);
 return VAR_17;
}
