
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int szObjectDN; } ;
typedef int PWSTR ;
typedef int * PLDAPMessage ;
typedef int PLDAP ;
typedef TYPE_1__* PDCSHADOW_PUSH_REQUEST_OBJECT ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ,int *,int ,int **) ;

BOOL FUNC_6(PLDAP VAR_4, PWSTR VAR_5, PDCSHADOW_PUSH_REQUEST_OBJECT VAR_6)
{
 BOOL VAR_7 = VAR_0;
 DWORD VAR_8;
 PLDAPMessage VAR_9 = ((void*)0);
 PWSTR VAR_10, VAR_11;

 if(FUNC_2(&VAR_10, L"(sAMAccountName=%s)", VAR_6->szObjectDN))
 {
  VAR_8 = FUNC_5(VAR_4, VAR_5, VAR_1, VAR_10, ((void*)0), VAR_0, &VAR_9);
  if(VAR_8 == VAR_2)
  {
   if((VAR_11 = FUNC_3(VAR_4, VAR_9)))
   {
    FUNC_0(VAR_6->szObjectDN);
    if(FUNC_1(&VAR_6->szObjectDN, VAR_11))
     VAR_7 = VAR_3;
   }
   FUNC_4(VAR_9);
  }
  FUNC_0(VAR_10);
 }
 return VAR_7;
}
