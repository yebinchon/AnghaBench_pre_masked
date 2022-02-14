
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bv_len; scalar_t__ bv_val; } ;
typedef int SID_NAME_USE ;
typedef scalar_t__ PWCHAR ;
typedef scalar_t__ PLDAPMessage ;
typedef int PLDAP ;
typedef TYPE_1__* PBERVAL ;
typedef int LPGUID ;
typedef size_t DWORD ;
typedef int BerElement ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__*,scalar_t__*,int *,int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,scalar_t__,int **) ;
 scalar_t__ FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int ,scalar_t__) ;
 TYPE_1__** FUNC_12 (int ,scalar_t__,scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (int ,scalar_t__,int *) ;
 scalar_t__ FUNC_15 (int ,scalar_t__) ;
 int FUNC_16 (TYPE_1__**) ;

void FUNC_17(PLDAP VAR_0, PLDAPMessage VAR_1)
{
 PLDAPMessage VAR_2;
 PWCHAR VAR_3, VAR_4, VAR_5;
 BerElement* VAR_6 = ((void*)0);
 PBERVAL *VAR_7;
 DWORD VAR_8;
 SID_NAME_USE VAR_9;

 for(VAR_2 = FUNC_10(VAR_0, VAR_1); VAR_2; VAR_2 = FUNC_15(VAR_0, VAR_2))
 {
  FUNC_3(L"\n%s\n", FUNC_11(VAR_0, VAR_2));
  for(VAR_3 = FUNC_9(VAR_0, VAR_2, &VAR_6); VAR_3; VAR_3 = FUNC_14(VAR_0, VAR_2, VAR_6))
  {
   FUNC_3(L"  %s: ", VAR_3);
   if((VAR_7 = FUNC_12(VAR_0, VAR_2, VAR_3)))
   {
    if(
     (FUNC_1(VAR_3, L"name") == 0) ||
     (FUNC_1(VAR_3, L"sAMAccountName") == 0)
     )
    {
     FUNC_3(L"%*S\n", VAR_7[0]->bv_len, VAR_7[0]->bv_val);
    }
    else if((FUNC_1(VAR_3, L"objectSid") == 0))
    {
     FUNC_5(VAR_7[0]->bv_val);
     FUNC_3(L"\n");
    }
    else if((FUNC_1(VAR_3, L"objectGUID") == 0))
    {
     FUNC_4((LPGUID) VAR_7[0]->bv_val);
     FUNC_3(L"\n");
    }
    else
    {
     for(VAR_8 = 0; VAR_7[VAR_8]; VAR_8++)
     {
      FUNC_3(L"\n   [%u] ", VAR_8);
      if((FUNC_1(VAR_3, L"sIDHistory") == 0))
      {
       FUNC_5(VAR_7[VAR_8]->bv_val);
       if(FUNC_7(VAR_7[VAR_8]->bv_val, &VAR_4, &VAR_5, &VAR_9, ((void*)0)))
       {
        FUNC_3(L" ( %s -- %s\\%s )", FUNC_8(VAR_9), VAR_5, VAR_4);
        FUNC_0(VAR_4);
        FUNC_0(VAR_5);
       }
      }
      else FUNC_6(VAR_7[VAR_8]->bv_val, VAR_7[VAR_8]->bv_len, 1);
     }
     FUNC_3(L"\n");
    }
    FUNC_16(VAR_7);
   }
   FUNC_13(VAR_3);
  }
  if(VAR_6)
   FUNC_2(VAR_6, 0);
 }
}
