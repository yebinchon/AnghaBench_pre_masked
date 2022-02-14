
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int valLen; scalar_t__ pVal; } ;
typedef scalar_t__ PWSTR ;
typedef scalar_t__ PUSER_PROPERTIES ;
typedef scalar_t__ PKERB_STORED_CREDENTIAL_NEW ;
typedef scalar_t__ PBYTE ;
typedef int DWORD ;
typedef int BOOL ;
typedef TYPE_1__ ATTRVAL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,scalar_t__,int,scalar_t__*,int *) ;
 scalar_t__ FUNC_5 (scalar_t__*,int *,int,char*,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_7 (scalar_t__) ;

BOOL FUNC_8(ATTRVAL* VAR_2, PWSTR VAR_3)
{
 BOOL VAR_4 = VAR_0;
 PWSTR VAR_5;
 PBYTE VAR_6, VAR_7;
 PKERB_STORED_CREDENTIAL_NEW VAR_8;
 DWORD VAR_9;
 PUSER_PROPERTIES VAR_10;
 DWORD VAR_11;

 FUNC_3(L"\n== Encoder helper for supplementalCredentials ==\n\n");
 if(FUNC_6(VAR_3, 4096, &VAR_5, &VAR_6, &VAR_7))
 {
  if(FUNC_4(VAR_5, VAR_6, VAR_7, 4096, &VAR_8, &VAR_9))
  {
   if(FUNC_5(&VAR_10, &VAR_11, 1, L"Primary:Kerberos-Newer-Keys", VAR_8, VAR_9))
   {
    FUNC_7(VAR_10);
    if((VAR_2->pVal = (PBYTE) FUNC_1(VAR_11)))
    {
     VAR_2->valLen = VAR_11;
     FUNC_2(VAR_2->pVal, VAR_10, VAR_2->valLen);
     VAR_4 = VAR_1;
    }
    FUNC_0(VAR_10);
   }
   FUNC_0(VAR_8);
  }
  if(VAR_5)
   FUNC_0(VAR_5);
  if(VAR_6)
   FUNC_0(VAR_6);
  if(VAR_7)
   FUNC_0(VAR_7);
 }
 return VAR_4;
}
