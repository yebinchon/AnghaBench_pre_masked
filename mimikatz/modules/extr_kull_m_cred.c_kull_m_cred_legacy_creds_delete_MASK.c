
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t __count; struct TYPE_5__* Credentials; } ;
typedef TYPE_1__* PKULL_M_CRED_LEGACY_CREDS_BLOB ;
typedef size_t DWORD ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__) ;

void FUNC_2(PKULL_M_CRED_LEGACY_CREDS_BLOB VAR_0)
{
 DWORD VAR_1;
 if(VAR_0)
 {
  if(VAR_0->Credentials)
  {
   for(VAR_1 = 0; VAR_1 < VAR_0->__count; VAR_1++)
    FUNC_1(VAR_0->Credentials[VAR_1]);
   FUNC_0(VAR_0->Credentials);
  }
  FUNC_0(VAR_0);
 }
}
