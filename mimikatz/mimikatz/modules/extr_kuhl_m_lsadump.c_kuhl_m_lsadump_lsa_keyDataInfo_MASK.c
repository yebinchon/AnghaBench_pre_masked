
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t USHORT ;
struct TYPE_4__ {int KeyLength; scalar_t__ KeyOffset; int KeyType; } ;
typedef scalar_t__ PVOID ;
typedef TYPE_1__* PKERB_KEY_DATA ;
typedef scalar_t__ PCWSTR ;
typedef scalar_t__ PBYTE ;
typedef int KERB_KEY_DATA ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ,int ) ;

PKERB_KEY_DATA FUNC_3(PVOID VAR_0, PKERB_KEY_DATA VAR_1, USHORT VAR_2, PCWSTR VAR_3)
{
 USHORT VAR_4;
 if(VAR_2)
 {
  if(VAR_3)
   FUNC_0(L"    %s\n", VAR_3);
  for(VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  {
   FUNC_0(L"      %s : ", FUNC_1(VAR_1[VAR_4].KeyType));
   FUNC_2((PBYTE) VAR_0 + VAR_1[VAR_4].KeyOffset, VAR_1[VAR_4].KeyLength, 0);
   FUNC_0(L"\n");
  }
 }
 return (PKERB_KEY_DATA) ((PBYTE) VAR_1 + VAR_2 * sizeof(KERB_KEY_DATA));
}
