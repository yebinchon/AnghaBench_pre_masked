
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pwszContainerName; int dwProvType; int pwszProvName; int member_6; int * member_5; int member_4; int member_3; int member_2; int member_1; int * member_0; } ;
typedef int LPCWSTR ;
typedef scalar_t__ LPCVOID ;
typedef int LPCBYTE ;
typedef int HCRYPTPROV ;
typedef int HCRYPTKEY ;
typedef int DWORD ;
typedef TYPE_1__ CRYPT_KEY_PROV_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 int VAR_5 ;
 int FUNC_5 (scalar_t__,int ,TYPE_1__*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;

BOOL FUNC_8(LPCVOID VAR_6, DWORD VAR_7, LPCVOID VAR_8, DWORD VAR_9, BOOL VAR_10, LPCWSTR VAR_11)
{
 BOOL VAR_12 = VAR_3;
 CRYPT_KEY_PROV_INFO VAR_13 = {((void*)0), VAR_4, VAR_5, 0, 0, ((void*)0), VAR_0};
 HCRYPTPROV VAR_14;
 HCRYPTKEY VAR_15;
 if((VAR_13.pwszContainerName = FUNC_7()))
 {
  if(FUNC_0(&VAR_14, VAR_13.pwszContainerName, VAR_13.pwszProvName, VAR_13.dwProvType, VAR_2))
  {
   if(FUNC_2(VAR_14, (LPCBYTE) VAR_8, VAR_9, 0, VAR_1, &VAR_15))
   {
    VAR_12 = FUNC_5(VAR_6, VAR_7, &VAR_13, VAR_11);
    FUNC_1(VAR_15);
   }
   else FUNC_4(L"CryptImportKey");
   FUNC_6(VAR_14);



  }
  else FUNC_4(L"CryptAcquireContext");
  FUNC_3(VAR_13.pwszContainerName);
 }
 return VAR_12;
}
