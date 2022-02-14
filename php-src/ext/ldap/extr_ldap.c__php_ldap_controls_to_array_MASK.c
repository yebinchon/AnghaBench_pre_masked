
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
struct TYPE_5__ {int ldctl_oid; } ;
typedef TYPE_1__ LDAPControl ;
typedef int LDAP ;


 int FUNC_0 (int *,TYPE_1__*,int *,int) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (TYPE_1__**) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(LDAP *VAR_0, LDAPControl** VAR_1, zval* VAR_2, int VAR_3)
{
 zval VAR_4;
 LDAPControl **VAR_5;

 VAR_2 = FUNC_3(VAR_2);
 if (!VAR_2) {
  return;
 }

 if (VAR_1 == ((void*)0)) {
  return;
 }
 VAR_5 = VAR_1;
 while (*VAR_5 != ((void*)0)) {
  FUNC_0(VAR_0, *VAR_5, &VAR_4, VAR_3);
  FUNC_1(VAR_2, (*VAR_5)->ldctl_oid, &VAR_4);
  VAR_5++;
 }
 FUNC_2(VAR_1);
}
