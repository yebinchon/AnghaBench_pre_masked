
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
typedef int USHORT ;
struct TYPE_5__ {int member_0; int member_1; char* member_2; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_6__ {int valLen; void* pVal; } ;
typedef char* PWSTR ;
typedef void* PBYTE ;
typedef int GUID ;
typedef int DWORD ;
typedef int BOOL ;
typedef TYPE_2__ ATTRVAL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (void*,int *,int) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (char*,void*,int) ;
 int FUNC_7 (char*) ;

BOOL FUNC_8(ATTRVAL* VAR_2, PWSTR VAR_3)
{
 DWORD VAR_4 = FUNC_7(VAR_3);

 if(VAR_4 == 38 && VAR_3[0] == '{' && VAR_3[37] == '}')
 {
  GUID VAR_5;
  UNICODE_STRING VAR_6 = {(USHORT)VAR_4*sizeof(WCHAR),(USHORT)VAR_4*sizeof(WCHAR), VAR_3};
  if(FUNC_1(FUNC_5(&VAR_6, &VAR_5)))
  {
   VAR_2->valLen = sizeof(GUID);
   VAR_2->pVal = (PBYTE) FUNC_0(VAR_2->valLen);
   if(!VAR_2->pVal)
    return VAR_0;
   FUNC_4(VAR_2->pVal, &VAR_5, sizeof(GUID));
   return VAR_1;
  }
  else FUNC_2(L"RtlGUIDFromString %s\n", VAR_3);

 }
 else
 {
  VAR_2->valLen = (ULONG) (VAR_4/2);
  VAR_2->pVal = (PBYTE) FUNC_0(VAR_2->valLen);
  if(!VAR_2->pVal)
   return VAR_0;
  if(FUNC_6(VAR_3, VAR_2->pVal, VAR_2->valLen))
   return VAR_1;
  FUNC_3(L"kull_m_string_stringToHex");
 }
 return VAR_0;
}
