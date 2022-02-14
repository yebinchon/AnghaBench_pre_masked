
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int USHORT ;
struct TYPE_4__ {int Length; int Buffer; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int PVOID ;
typedef int LPWSTR ;
typedef int DWORD ;


 int FUNC_0 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int) ;

void FUNC_3(PVOID VAR_0, DWORD VAR_1)
{
 UNICODE_STRING VAR_2 = {(USHORT) VAR_1, (USHORT) VAR_1, (LPWSTR) VAR_0};
 if(FUNC_1(&VAR_2))
  FUNC_0(L"%wZ", &VAR_2);
 else
  FUNC_2(VAR_2.Buffer, VAR_2.Length, 1);
}
