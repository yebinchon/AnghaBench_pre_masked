
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PWCHAR ;
typedef int PLDAP ;
typedef scalar_t__ PCWCHAR ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ,int *,int *,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ) ;

BOOL FUNC_6(PCWCHAR VAR_4, PCWCHAR VAR_5, PLDAP *VAR_6, PWCHAR *VAR_7)
{
 BOOL VAR_8 = VAR_0;
 DWORD VAR_9;

 if((*VAR_6 = FUNC_4((PWCHAR) VAR_4, VAR_2)))
 {
  if((*VAR_7 = FUNC_2(VAR_5, *VAR_6)))
  {
   VAR_9 = FUNC_3(*VAR_6, ((void*)0), ((void*)0), VAR_1);
   VAR_8 = (VAR_9 == VAR_3);
   if(!VAR_8)
   {
    FUNC_1(L"ldap_bind_s 0x%x (%u)\n", VAR_9, VAR_9);
    *VAR_7 = (PWCHAR) FUNC_0(*VAR_7);
   }
  }
  if(!VAR_8)
   FUNC_5(*VAR_6);
 }
 else FUNC_1(L"ldap_init\n");
 return VAR_8;
}
