
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pbData; int cbData; int * member_1; int member_0; } ;
typedef int LPCWSTR ;
typedef int HCERTSTORE ;
typedef TYPE_1__ CRYPT_DATA_BLOB ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*,int ,int *,int) ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 int FUNC_4 (int ,int *,int ) ;

BOOL FUNC_5(HCERTSTORE VAR_5, LPCWSTR VAR_6)
{
 BOOL VAR_7 = VAR_1;
 CRYPT_DATA_BLOB VAR_8 = {0, ((void*)0)};
 if(FUNC_2(VAR_5, &VAR_8, VAR_3, ((void*)0), VAR_0 | VAR_4))
 {
  if((VAR_8.pbData = (BYTE *) FUNC_0(VAR_2, VAR_8.cbData)))
  {
   if(FUNC_2(VAR_5, &VAR_8, VAR_3, ((void*)0), VAR_0 | VAR_4))
    VAR_7 = FUNC_4(VAR_6, VAR_8.pbData, VAR_8.cbData);
   FUNC_1(VAR_8.pbData);
  }
 }
 if(!VAR_7)
  FUNC_3(L"PFXExportCertStoreEx");
 return VAR_7;
}
