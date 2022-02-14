
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
typedef int VOID ;
struct TYPE_9__ {int cbBlob; int pbBlob; } ;
struct TYPE_8__ {int cbSize; int rgbHashOfCert; } ;
struct TYPE_7__ {scalar_t__ Length; scalar_t__ Buffer; } ;
struct TYPE_6__ {int UserName; } ;
typedef scalar_t__ PWSTR ;
typedef int PVOID ;
typedef TYPE_1__* PUSERNAME_TARGET_CREDENTIAL_INFO ;
typedef TYPE_2__* PCUNICODE_STRING ;
typedef TYPE_3__* PCERT_CREDENTIAL_INFO ;
typedef TYPE_4__* PBINARY_BLOB_CREDENTIAL_INFO ;
typedef int CRED_MARSHAL_TYPE ;
typedef int CERT_CREDENTIAL_INFO ;



 int VAR_0 ;

 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__) ;


 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ,int ,int) ;

VOID FUNC_9(PCUNICODE_STRING VAR_2)
{
 PWSTR VAR_3;
 CRED_MARSHAL_TYPE VAR_4;
 PVOID VAR_5;

 if(VAR_2->Length && VAR_2->Buffer)
 {
  if((VAR_3 = (PWSTR) FUNC_2(VAR_1, VAR_2->Length + sizeof(wchar_t))))
  {
   FUNC_6(VAR_3, VAR_2->Buffer, VAR_2->Length);
   if(FUNC_0(VAR_3))
   {
    FUNC_7(L"\n\t * Marshaled: ");
    if(FUNC_1(VAR_3, &VAR_4, &VAR_5))
    {
     switch(VAR_4)
     {
     case 130:
      if(((PCERT_CREDENTIAL_INFO) VAR_5)->cbSize == sizeof(CERT_CREDENTIAL_INFO))
      {
       FUNC_7(L"[Cert] SHA1:");
       FUNC_8(((PCERT_CREDENTIAL_INFO) VAR_5)->rgbHashOfCert, VAR_0, 0);
      }
      else FUNC_4(L"Credential->cbSize is %u\n", ((PCERT_CREDENTIAL_INFO) VAR_5)->cbSize);
      break;
     case 128:
      FUNC_7(L"[UsernameTarget] %s\n", ((PUSERNAME_TARGET_CREDENTIAL_INFO) VAR_5)->UserName);
      break;
     case 131:
      FUNC_7(L"[BinaryBlob] ");
      FUNC_8(((PBINARY_BLOB_CREDENTIAL_INFO) VAR_5)->pbBlob, ((PBINARY_BLOB_CREDENTIAL_INFO) VAR_5)->cbBlob, 1);
      break;
     case 129:
      FUNC_7(L"[UsernameForPacked] ?");
      break;
     default:
      FUNC_7(L"[?] ?");
     }
    }
    else FUNC_5(L"CredUnmarshalCredential");
   }
   FUNC_3(VAR_3);
  }
 }
}
