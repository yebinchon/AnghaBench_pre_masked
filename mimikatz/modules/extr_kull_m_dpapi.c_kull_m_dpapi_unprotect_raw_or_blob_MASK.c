
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ pbData; scalar_t__ cbData; int member_1; scalar_t__ member_0; } ;
struct TYPE_9__ {scalar_t__ dwDescriptionLen; scalar_t__ szDescription; } ;
typedef TYPE_1__* PKULL_M_DPAPI_BLOB ;
typedef int PBYTE ;
typedef scalar_t__ LPWSTR ;
typedef scalar_t__ LPVOID ;
typedef int LPCWSTR ;
typedef scalar_t__ LPCVOID ;
typedef scalar_t__ DWORD ;
typedef TYPE_2__ DATA_BLOB ;
typedef int CRYPTPROTECT_PROMPTSTRUCT ;
typedef int BOOL ;


 int FUNC_0 (TYPE_2__*,scalar_t__*,TYPE_2__*,int *,int *,scalar_t__,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__*,scalar_t__*) ;

BOOL FUNC_7(LPCVOID VAR_2, DWORD VAR_3, LPWSTR *VAR_4, LPCVOID VAR_5, DWORD VAR_6, CRYPTPROTECT_PROMPTSTRUCT* VAR_7, DWORD VAR_8, LPVOID *VAR_9, DWORD *VAR_10, LPCVOID VAR_11, DWORD VAR_12, LPCWSTR VAR_13)
{
 BOOL VAR_14 = VAR_0;
 DATA_BLOB VAR_15 = {VAR_3, (PBYTE) VAR_2}, VAR_16 = {VAR_6, (PBYTE) VAR_5}, VAR_17;
 PKULL_M_DPAPI_BLOB VAR_18;

 if(VAR_11 && VAR_12)
 {
  if((VAR_18 = FUNC_4(VAR_2)))
  {
   if((VAR_14 = FUNC_6(VAR_18, VAR_11, VAR_12, VAR_5, VAR_6, VAR_13, VAR_9, VAR_10)))
    if(VAR_4 && VAR_18->szDescription && VAR_18->dwDescriptionLen)
     if((*VAR_4 = (LPWSTR) FUNC_1(VAR_1, VAR_18->dwDescriptionLen)))
      FUNC_3(*VAR_4, VAR_18->szDescription, VAR_18->dwDescriptionLen);
   FUNC_5(VAR_18);
  }
 }
 else
 {
  if((VAR_14 = FUNC_0(&VAR_15, VAR_4, &VAR_16, ((void*)0), VAR_7, VAR_8, &VAR_17)))
  {
   *VAR_10 = VAR_17.cbData;
   if((*VAR_9 = FUNC_1(VAR_1, *VAR_10)))
    FUNC_3(*VAR_9, VAR_17.pbData, *VAR_10);
   FUNC_2(VAR_17.pbData);
  }
 }
 return VAR_14;
}
