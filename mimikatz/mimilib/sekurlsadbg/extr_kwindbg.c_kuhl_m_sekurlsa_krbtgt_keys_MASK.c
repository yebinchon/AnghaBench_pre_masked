
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ULONG_PTR ;
struct TYPE_13__ {int cbCred; TYPE_1__* credentials; } ;
struct TYPE_12__ {int size; scalar_t__ key; int type; } ;
typedef TYPE_2__* PVOID ;
typedef TYPE_2__* PKIWI_KRBTGT_CREDENTIALS_64 ;
typedef TYPE_2__* PKIWI_KRBTGT_CREDENTIALS_6 ;
typedef int LPCSTR ;
typedef int KIWI_KRBTGT_CREDENTIAL_64 ;
typedef int KIWI_KRBTGT_CREDENTIAL_6 ;
typedef TYPE_2__ KIWI_KRBTGT_CREDENTIALS_64 ;
typedef TYPE_2__ KIWI_KRBTGT_CREDENTIALS_6 ;
typedef size_t DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ,size_t) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*,size_t,int *) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,size_t,int ) ;

void FUNC_8(PVOID VAR_3, LPCSTR VAR_4)
{
 DWORD VAR_5, VAR_6;
 KIWI_KRBTGT_CREDENTIALS_64 VAR_7, *VAR_8;
 KIWI_KRBTGT_CREDENTIALS_6 VAR_9, *VAR_10;
 PVOID VAR_11;

 if(VAR_3)
 {
  FUNC_5("\n%s krbtgt: ", VAR_4);
  if(VAR_2 < VAR_0)
  {
   if(FUNC_4((ULONG_PTR) VAR_3, &VAR_9, sizeof(KIWI_KRBTGT_CREDENTIALS_6) - sizeof(KIWI_KRBTGT_CREDENTIAL_6), ((void*)0)))
   {
    VAR_5 = sizeof(KIWI_KRBTGT_CREDENTIALS_6) + (VAR_9 - 1) * sizeof(KIWI_KRBTGT_CREDENTIAL_6);
    if((VAR_10 = (PKIWI_KRBTGT_CREDENTIALS_6) FUNC_0(VAR_1, VAR_5)))
    {
     if(FUNC_4((ULONG_PTR) VAR_3, VAR_10, VAR_5, ((void*)0)))
     {
      FUNC_5("%u credentials\n", VAR_10->cbCred);
      for(VAR_6 = 0; VAR_6 < VAR_10->cbCred; VAR_6++)
      {
       FUNC_5("\t * %s : ", FUNC_6(FUNC_2(VAR_10->credentials[VAR_6].type)));
       if((VAR_11 = FUNC_0(VAR_1, FUNC_3(VAR_10->credentials[VAR_6].size))))
       {
        if(FUNC_4((ULONG_PTR) VAR_10->credentials[VAR_6].key, VAR_11, FUNC_3(VAR_10->credentials[VAR_6].size), ((void*)0)))
         FUNC_7(VAR_11, FUNC_3(VAR_10->credentials[VAR_6].size), 0);
        FUNC_1(VAR_11);
       }
       FUNC_5("\n");
      }
     }
     FUNC_1(VAR_10);
    }
   }
  }
  else
  {
   if(FUNC_4((ULONG_PTR) VAR_3, &VAR_7, sizeof(KIWI_KRBTGT_CREDENTIALS_64) - sizeof(KIWI_KRBTGT_CREDENTIAL_64), ((void*)0)))
   {
    VAR_5 = sizeof(KIWI_KRBTGT_CREDENTIALS_64) + (VAR_7 - 1) * sizeof(KIWI_KRBTGT_CREDENTIAL_64);
    if((VAR_8 = (PKIWI_KRBTGT_CREDENTIALS_64) FUNC_0(VAR_1, VAR_5)))
    {
     if(FUNC_4((ULONG_PTR) VAR_3, VAR_8, VAR_5, ((void*)0)))
     {
      FUNC_5("%u credentials\n", VAR_8->cbCred);
      for(VAR_6 = 0; VAR_6 < VAR_8->cbCred; VAR_6++)
      {
       FUNC_5("\t * %s : ", FUNC_6(FUNC_2(VAR_8->credentials[VAR_6].type)));
       if((VAR_11 = FUNC_0(VAR_1, FUNC_3(VAR_8->credentials[VAR_6].size))))
       {
        if(FUNC_4((ULONG_PTR) VAR_8->credentials[VAR_6].key, VAR_11, FUNC_3(VAR_8->credentials[VAR_6].size), ((void*)0)))
         FUNC_7(VAR_11, FUNC_3(VAR_8->credentials[VAR_6].size), 0);
        FUNC_1(VAR_11);
       }
       FUNC_5("\n");
      }
     }
     FUNC_1(VAR_8);
    }
   }
  }
 }
}
