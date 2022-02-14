
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_5__ {scalar_t__ size; int dwPropId; scalar_t__ data; int flags; } ;
struct TYPE_4__ {int offsetRgProvParam; int cProvParam; int dwFlags; int dwKeySpec; int dwProvType; scalar_t__ offsetProvName; scalar_t__ offsetContainerName; } ;
typedef TYPE_1__* PKUHL_M_CRYPTO_CRYPT_KEY_PROV_INFO ;
typedef TYPE_2__* PKUHL_M_CRYPTO_CERT_PROP ;
typedef char* PCWCHAR ;
typedef scalar_t__ PBYTE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int,int ) ;

BOOL FUNC_7(PBYTE VAR_2, DWORD VAR_3, PCWCHAR VAR_4, BOOL VAR_5)
{
 BOOL VAR_6 = VAR_0;
 PCWCHAR VAR_7;
 PKUHL_M_CRYPTO_CERT_PROP VAR_8;
 PKUHL_M_CRYPTO_CRYPT_KEY_PROV_INFO VAR_9;

 for(VAR_8 = (PKUHL_M_CRYPTO_CERT_PROP) VAR_2; (PBYTE) VAR_8 < (VAR_2 + VAR_3); VAR_8 = (PKUHL_M_CRYPTO_CERT_PROP) ((PBYTE) VAR_8 + FUNC_0(VAR_1, VAR_2) + VAR_8->size))
 {
  VAR_7 = FUNC_3(VAR_8->dwPropId);
  FUNC_1(L"[%04x/%x] %s\n", VAR_8->dwPropId, VAR_8->flags, VAR_7 ? VAR_7 : L"?");
  if(VAR_8->size)
  {
   FUNC_1(L"  ");
   switch(VAR_8->dwPropId)
   {
   case 138:
    FUNC_1(L"Provider info:\n");
    VAR_9 = (PKUHL_M_CRYPTO_CRYPT_KEY_PROV_INFO) VAR_8->data;
    if(VAR_9->offsetContainerName)
     FUNC_1(L"\tKey Container  : %s\n", VAR_8->data + VAR_9->offsetContainerName);
    if(VAR_9->offsetProvName)
     FUNC_1(L"\tProvider       : %s\n", VAR_8->data + VAR_9->offsetProvName);
    VAR_7 = FUNC_5(VAR_9->dwProvType);
    FUNC_1(L"\tProvider type  : %s (%u)\n", VAR_7 ? VAR_7 : L"?", VAR_9->dwProvType);
    FUNC_1(L"\tType           : %s (0x%08x)\n", FUNC_4(VAR_9->dwKeySpec), VAR_9->dwKeySpec);
    FUNC_1(L"\tFlags          : %08x\n", VAR_9->dwFlags);
    FUNC_1(L"\tParam (todo)   : %08x / %08x\n", VAR_9->cProvParam, VAR_9->offsetRgProvParam);
    break;
   case 142:
   case 136:
   case 101:
    FUNC_1(L"%.*s", VAR_8->size / sizeof(wchar_t), VAR_8->data);
    break;
   case 131:
   case 130:
   case 129:
   case 128:
    FUNC_2(VAR_8, VAR_4, VAR_5);
    break;
   case 135:
   case 137 :
   case 134:
   case 141:
   case 132:
   case 140:
   case 133:
   case 139:

   default:
    FUNC_6(VAR_8->data, VAR_8->size, 0);
    break;
   }
   FUNC_1(L"\n");
  }
 }

 return VAR_6;
}
