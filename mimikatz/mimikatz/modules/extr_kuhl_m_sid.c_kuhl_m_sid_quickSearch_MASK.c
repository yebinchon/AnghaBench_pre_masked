
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef char* PWCHAR ;
typedef int * PLDAPMessage ;
typedef int PLDAP ;
typedef int PCWCHAR ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__,...) ;
 int FUNC_2 (int ,int *) ;
 char* FUNC_3 (int,int **) ;
 scalar_t__ FUNC_4 (int ,int *,int *,char**) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,char*,int ,char*,char**,int,int **) ;
 int FUNC_8 (int ) ;

BOOL FUNC_9(int VAR_3, wchar_t * VAR_4[], BOOL VAR_5, PCWCHAR VAR_6, PLDAP *VAR_7, PLDAPMessage *VAR_8)
{
 BOOL VAR_9 = VAR_0;
 DWORD VAR_10;
 PWCHAR VAR_11[] = {L"name", L"sAMAccountName", L"objectSid", L"sIDHistory", L"objectGUID", ((void*)0)}, VAR_12, VAR_13;
 if((VAR_13 = FUNC_3(VAR_3, VAR_4)))
 {
  if(FUNC_4(VAR_6, ((void*)0), VAR_7, &VAR_12))
  {
   *VAR_8 = ((void*)0);
   VAR_10 = FUNC_7(*VAR_7, VAR_12, VAR_1, VAR_13, VAR_11, VAR_0, VAR_8);
   if((VAR_9 = (VAR_10 == VAR_2)))
   {
    switch(FUNC_5(*VAR_7, *VAR_8))
    {
    case 0:
     VAR_9 = VAR_0;
     FUNC_1(L"No result! - filter was \'%s\'\n", VAR_13);
     break;
    case 1:
     break;
    default:
     if(VAR_5)
     {
      FUNC_1(L"Not unique - Please: don\'t brick your AD! - filter was \'%s\'\n", VAR_13);
      VAR_9 = VAR_0;
     }
     break;
    }
   }
   else FUNC_1(L"ldap_search_s 0x%x (%u)\n", VAR_10, VAR_10);

   if(VAR_9)
    FUNC_2(*VAR_7, *VAR_8);
   else
   {
    if(*VAR_8)
     FUNC_6(*VAR_8);
    FUNC_8(*VAR_7);
   }
   FUNC_0(VAR_12);
  }
  FUNC_0(VAR_13);
 }
 return VAR_9;
}
