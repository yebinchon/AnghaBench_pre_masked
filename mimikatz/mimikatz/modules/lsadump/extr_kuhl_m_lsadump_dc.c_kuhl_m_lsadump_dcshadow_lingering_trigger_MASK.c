
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_4__ {char* member_1; int ** member_2; int member_0; } ;
typedef int * PWSTR ;
typedef TYPE_1__* PLDAPMod ;
typedef TYPE_1__ LDAPMod ;
typedef int LDAP ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ FUNC_2 (int **,char*,int *,int *) ;
 int FUNC_3 (int *,char*,TYPE_1__**) ;

ULONG FUNC_4(LDAP* VAR_1, PWSTR VAR_2, PWSTR VAR_3)
{
 DWORD VAR_4;
 PWSTR VAR_5[] = {((void*)0), ((void*)0)};
 LDAPMod VAR_6 = {VAR_0 , L"removeLingeringObject", VAR_5};
 PLDAPMod VAR_7[] = {&VAR_6, ((void*)0)};

 if(FUNC_2(VAR_5, L"%s:%s", VAR_2, VAR_3))
 {
  if ((VAR_4 = FUNC_3(VAR_1, L"", VAR_7)))
   FUNC_1(L"removeLingeringObject 0x%x (%u)\n", VAR_4, VAR_4);
  FUNC_0(VAR_5[0]);
 }
 return VAR_4;
}
