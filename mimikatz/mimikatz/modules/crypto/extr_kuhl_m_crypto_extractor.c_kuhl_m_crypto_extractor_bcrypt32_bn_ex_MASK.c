
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tag; } ;
typedef scalar_t__ PVOID ;
typedef TYPE_1__* PKIWI_BCRYPT_BIGNUM_Header ;
typedef scalar_t__ PBYTE ;
typedef int LPCWSTR ;
typedef scalar_t__ DWORD32 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(PVOID VAR_0, DWORD32 VAR_1, DWORD32 VAR_2, LPCWSTR VAR_3)
{
 PKIWI_BCRYPT_BIGNUM_Header VAR_4;
 if(VAR_2)
 {
  VAR_4 = (PKIWI_BCRYPT_BIGNUM_Header) ((PBYTE) VAR_0 + (VAR_2 - VAR_1));
  if(VAR_4->tag)
  {
   FUNC_0(L"%s: ", VAR_3);
   FUNC_1(VAR_4);
   FUNC_0(L"\n");
  }
 }
}
