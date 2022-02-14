
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ offsetToPreviousAuthenticationInformation; scalar_t__ offsetToAuthenticationInformation; scalar_t__ count; } ;
typedef int SCHEMA_PREFIX_TABLE ;
typedef TYPE_1__* PNTDS_LSA_AUTH_INFORMATIONS ;
typedef int PNTDS_LSA_AUTH_INFORMATION ;
typedef int PCUNICODE_STRING ;
typedef scalar_t__ PBYTE ;
typedef char* LPCWSTR ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;
typedef int ATTRBLOCK ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,char*,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int ,scalar_t__*,int *) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_3(SCHEMA_PREFIX_TABLE *VAR_4, ATTRBLOCK *VAR_5, PCUNICODE_STRING VAR_6, PCUNICODE_STRING VAR_7, BOOL VAR_8)
{
 PBYTE VAR_9;
 DWORD VAR_10;
 PNTDS_LSA_AUTH_INFORMATIONS VAR_11;
 LPCWSTR VAR_12, VAR_13;
 PCUNICODE_STRING VAR_14, VAR_15;

 if(FUNC_2(VAR_4, VAR_5, VAR_8 ? VAR_2 : VAR_3, &VAR_9, &VAR_10))
 {
  if(VAR_8)
  {
   VAR_12 = L"  In ";
   VAR_13 = L" In-1";
   VAR_14 = VAR_6;
   VAR_15 = VAR_7;
  }
  else
  {
   VAR_12 = L" Out ";
   VAR_13 = L"Out-1";
   VAR_14 = VAR_7;
   VAR_15 = VAR_6;
  }
  VAR_11 = (PNTDS_LSA_AUTH_INFORMATIONS) VAR_9;
  if(VAR_11->count)
  {
   if(VAR_11->offsetToAuthenticationInformation)
    FUNC_1(((void*)0), 0, (PNTDS_LSA_AUTH_INFORMATION) ((PBYTE) VAR_11 + FUNC_0(VAR_0, VAR_1) + VAR_11->offsetToAuthenticationInformation), VAR_12, VAR_14, VAR_15);
   if(VAR_11->offsetToPreviousAuthenticationInformation)
    FUNC_1(((void*)0), 0, (PNTDS_LSA_AUTH_INFORMATION) ((PBYTE) VAR_11 + FUNC_0(VAR_0, VAR_1) + VAR_11->offsetToPreviousAuthenticationInformation), VAR_13, VAR_14, VAR_15);
  }
 }
}
