
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
typedef int USHORT ;
struct TYPE_7__ {int Length; int MaximumLength; scalar_t__ Buffer; } ;
struct TYPE_6__ {int Length; int MaximumLength; scalar_t__ Buffer; } ;
typedef TYPE_1__ STRING ;
typedef scalar_t__ PWSTR ;
typedef TYPE_2__* PUNICODE_STRING ;
typedef int * PDWORD ;
typedef scalar_t__ PCHAR ;
typedef scalar_t__ PBYTE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (int ) ;

BOOL FUNC_5(PBYTE *VAR_2, PUNICODE_STRING VAR_3)
{
 BOOL VAR_4 = VAR_0;
 STRING VAR_5;
 VAR_5.Length = VAR_5.MaximumLength = (USHORT) FUNC_4(*(PDWORD) *VAR_2); *VAR_2 += sizeof(DWORD);
 VAR_5.Buffer = (PCHAR) *VAR_2; *VAR_2 += VAR_5.Length;
 VAR_3->Length = VAR_5.Length * sizeof(wchar_t);
 VAR_3->MaximumLength = VAR_3->Length + sizeof(wchar_t);
 if((VAR_3->Buffer = (PWSTR) FUNC_0(VAR_1, VAR_3->MaximumLength)))
 {
  if(!(VAR_4 = FUNC_2(FUNC_3(VAR_3, &VAR_5, VAR_0))))
   FUNC_1(VAR_3->Buffer);
 }
 return VAR_4;
}
