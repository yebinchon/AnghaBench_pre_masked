
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {scalar_t__ DomainControllerName; } ;
typedef TYPE_1__* PDOMAIN_CONTROLLER_INFO ;
typedef int * LPWSTR ;
typedef int LPCWSTR ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int *,int *,scalar_t__,TYPE_1__**) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (scalar_t__) ;

BOOL FUNC_6(LPCWSTR VAR_6, DWORD VAR_7, LPWSTR * VAR_8)
{
 BOOL VAR_9 = VAR_3;
 DWORD VAR_10, VAR_11;
 PDOMAIN_CONTROLLER_INFO VAR_12 = ((void*)0);
 VAR_10 = FUNC_0(((void*)0), VAR_6, ((void*)0), ((void*)0), VAR_7 | VAR_0 | VAR_1, &VAR_12);
 if(VAR_10 == VAR_2)
 {
  VAR_11 = (DWORD) (FUNC_5(VAR_12->DomainControllerName + 2) + 1) * sizeof(wchar_t);
  if((*VAR_8 = (wchar_t *) FUNC_1(VAR_4, VAR_11)))
  {
   VAR_9 = VAR_5;
   FUNC_4(*VAR_8, VAR_12->DomainControllerName + 2, VAR_11);
  }
  FUNC_2(VAR_12);
 }
 else FUNC_3(L"DsGetDcName: %u\n", VAR_10);
 return VAR_9;
}
