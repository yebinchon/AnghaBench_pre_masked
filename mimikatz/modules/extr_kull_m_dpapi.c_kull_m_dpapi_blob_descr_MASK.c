
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwSignLen; int pbSign; int dwDataLen; int pbData; int dwHmac2KeyLen; int pbHmack2Key; int dwAlgHashLen; int algHash; int dwHmacKeyLen; int pbHmackKey; int dwSaltLen; int pbSalt; int dwAlgCryptLen; int algCrypt; int szDescription; int dwDescriptionLen; int dwFlags; int guidMasterKey; int dwMasterKeyVersion; int guidProvider; int dwVersion; } ;
typedef TYPE_1__* PKULL_M_DPAPI_BLOB ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;

void FUNC_5(DWORD VAR_0, PKULL_M_DPAPI_BLOB VAR_1)
{
 FUNC_0(L"%*s" L"**BLOB**\n", VAR_0 << 1, L"");
 if(VAR_1)
 {
  FUNC_0(L"%*s" L"  dwVersion          : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwVersion, VAR_1->dwVersion);
  FUNC_0(L"%*s" L"  guidProvider       : ", VAR_0 << 1, L""); FUNC_3(&VAR_1->guidProvider); FUNC_0(L"\n");
  FUNC_0(L"%*s" L"  dwMasterKeyVersion : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwMasterKeyVersion, VAR_1->dwMasterKeyVersion);
  FUNC_0(L"%*s" L"  guidMasterKey      : ", VAR_0 << 1, L""); FUNC_3(&VAR_1->guidMasterKey); FUNC_0(L"\n");
  FUNC_0(L"%*s" L"  dwFlags            : %08x - %u (", VAR_0 << 1, L"", VAR_1->dwFlags, VAR_1->dwFlags);
  FUNC_2(VAR_1->dwFlags);
  FUNC_0(L")\n");
  FUNC_0(L"%*s" L"  dwDescriptionLen   : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwDescriptionLen, VAR_1->dwDescriptionLen);
  FUNC_0(L"%*s" L"  szDescription      : %s\n", VAR_0 << 1, L"", VAR_1->szDescription);
  FUNC_0(L"%*s" L"  algCrypt           : %08x - %u (%s)\n", VAR_0 << 1, L"", VAR_1->algCrypt, VAR_1->algCrypt, FUNC_1(VAR_1->algCrypt));
  FUNC_0(L"%*s" L"  dwAlgCryptLen      : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwAlgCryptLen, VAR_1->dwAlgCryptLen);
  FUNC_0(L"%*s" L"  dwSaltLen          : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwSaltLen, VAR_1->dwSaltLen);
  FUNC_0(L"%*s" L"  pbSalt             : ", VAR_0 << 1, L""); FUNC_4(VAR_1->pbSalt, VAR_1->dwSaltLen, 0); FUNC_0(L"\n");
  FUNC_0(L"%*s" L"  dwHmacKeyLen       : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwHmacKeyLen, VAR_1->dwHmacKeyLen);
  FUNC_0(L"%*s" L"  pbHmackKey         : ", VAR_0 << 1, L""); FUNC_4(VAR_1->pbHmackKey, VAR_1->dwHmacKeyLen, 0); FUNC_0(L"\n");
  FUNC_0(L"%*s" L"  algHash            : %08x - %u (%s)\n", VAR_0 << 1, L"", VAR_1->algHash, VAR_1->algHash, FUNC_1(VAR_1->algHash));
  FUNC_0(L"%*s" L"  dwAlgHashLen       : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwAlgHashLen, VAR_1->dwAlgHashLen);
  FUNC_0(L"%*s" L"  dwHmac2KeyLen      : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwHmac2KeyLen, VAR_1->dwHmac2KeyLen);
  FUNC_0(L"%*s" L"  pbHmack2Key        : ", VAR_0 << 1, L""); FUNC_4(VAR_1->pbHmack2Key, VAR_1->dwHmac2KeyLen, 0); FUNC_0(L"\n");
  FUNC_0(L"%*s" L"  dwDataLen          : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwDataLen, VAR_1->dwDataLen);
  FUNC_0(L"%*s" L"  pbData             : ", VAR_0 << 1, L""); FUNC_4(VAR_1->pbData, VAR_1->dwDataLen, 0); FUNC_0(L"\n");
  FUNC_0(L"%*s" L"  dwSignLen          : %08x - %u\n", VAR_0 << 1, L"", VAR_1->dwSignLen, VAR_1->dwSignLen);
  FUNC_0(L"%*s" L"  pbSign             : ", VAR_0 << 1, L""); FUNC_4(VAR_1->pbSign, VAR_1->dwSignLen, 0); FUNC_0(L"\n\n");
 }
}
