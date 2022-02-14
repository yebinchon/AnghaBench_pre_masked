
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_4__ {int bv_len; int bv_val; } ;
typedef scalar_t__ PWSTR ;
typedef char* PWCHAR ;
typedef int * PLDAPMessage ;
typedef int PLDAP ;
typedef TYPE_1__* PBERVAL ;
typedef int GUID ;
typedef size_t DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,size_t) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int) ;
 int VAR_4 ;
 char** FUNC_5 (scalar_t__,int ) ;
 TYPE_1__** FUNC_6 (int ,int *,char*) ;
 int FUNC_7 (int *) ;
 size_t FUNC_8 (int ,scalar_t__,int ,char*,char**,int ,int **) ;
 int FUNC_9 (char**) ;
 int FUNC_10 (TYPE_1__**) ;
 scalar_t__ FUNC_11 (char*) ;
 int FUNC_12 (scalar_t__,size_t,char*) ;
 scalar_t__ FUNC_13 (scalar_t__,char*,int) ;

BOOL FUNC_14(PLDAP VAR_5, PWSTR VAR_6, GUID* VAR_7)
{
 BOOL VAR_8 = VAR_0;
 PWSTR VAR_9;
 DWORD VAR_10, VAR_11, VAR_12;
 WCHAR** VAR_13;
 PWCHAR VAR_14[] = {L"objectGUID", ((void*)0)};
 PBERVAL *VAR_15;
 PLDAPMessage VAR_16 = ((void*)0);

 if (FUNC_13(VAR_6, L"DC=", 3) == 0)
 {
  FUNC_4(VAR_7, sizeof(GUID));
  return VAR_4;
 }

 if ((VAR_13 = FUNC_5(VAR_6, 0)) == ((void*)0))
 {
  FUNC_2(L"Unable to parse DN (%s)\n", VAR_6);
  return VAR_0;
 }
 VAR_11 = 1;
 for(VAR_12 = 1; VAR_13[VAR_12] != ((void*)0); VAR_12++)
 {
  VAR_11 += (2 + FUNC_11(VAR_13[VAR_12]));
 }
 VAR_9 = (PWSTR) FUNC_0(VAR_3, VAR_11 * sizeof(WCHAR));
 if (VAR_9)
 {
  for(VAR_12 = 1; VAR_13[VAR_12] != ((void*)0); VAR_12++)
  {
   if (VAR_12 > 1)
    FUNC_12(VAR_9, VAR_11, L",");
   FUNC_12(VAR_9, VAR_11, VAR_13[VAR_12]);
  }
 }
 FUNC_9(VAR_13);
 if (!VAR_9)
  return VAR_0;

 VAR_10 = FUNC_8(VAR_5, VAR_9, VAR_1, L"(objectclass=*)", VAR_14, VAR_0, &VAR_16);
 if(VAR_10 == VAR_2)
 {
  if((VAR_15 = FUNC_6(VAR_5, VAR_16, VAR_14[0])) != ((void*)0) && ((*VAR_15)->bv_len == sizeof(GUID)))
  {
   FUNC_3(VAR_7, (*VAR_15)->bv_val, (*VAR_15)->bv_len);
   VAR_8 = VAR_4;
   FUNC_10(VAR_15);
  }
  FUNC_7(VAR_16);
 }
 else
 {
  FUNC_2(L"Parent DN (%s) not found\n", VAR_9);
 }
 FUNC_1(VAR_9);
 return VAR_8;
}
