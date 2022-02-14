
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct berval {int bv_len; int bv_val; } ;
struct TYPE_3__ {int* pbSchemaSignature; int ld; int szSchemaNamingContext; } ;
typedef int * PWSTR ;
typedef int * PLDAPMessage ;
typedef TYPE_1__* PDCSHADOW_DOMAIN_INFO ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (int*,int) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int*,int,int ) ;
 struct berval** FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int *,int **,int ,int **) ;

BOOL FUNC_8(PDCSHADOW_DOMAIN_INFO VAR_3)
{
 DWORD VAR_4;
 PWSTR VAR_5[] = {FUNC_2("schemaInfo"), ((void*)0)};
 PLDAPMessage VAR_6 = ((void*)0);
 struct berval** VAR_7 = ((void*)0);

 VAR_4 = FUNC_7(VAR_3->ld, VAR_3->szSchemaNamingContext, VAR_1, ((void*)0), VAR_5, VAR_0, &VAR_6);
 if(VAR_4 == VAR_2)
 {
  VAR_7 = FUNC_5(VAR_3->ld, VAR_6,VAR_5[0]);
  if(!VAR_7 || (*VAR_7)->bv_len != 21)
  {

   VAR_3->pbSchemaSignature[0] = 0xFF;
   FUNC_1(VAR_3->pbSchemaSignature + 1, 20);
  }
  else
   FUNC_0(VAR_3->pbSchemaSignature, (*VAR_7)->bv_val, 21);
  FUNC_6(VAR_6);
  FUNC_3(L"schema signature:");
  FUNC_4(VAR_3->pbSchemaSignature, 21, 0);
  FUNC_3(L"\n");
 }
 return (VAR_4 == VAR_2);
}
