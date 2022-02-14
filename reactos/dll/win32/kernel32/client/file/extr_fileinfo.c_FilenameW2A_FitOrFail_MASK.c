
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int MaximumLength; int Length; scalar_t__ Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef scalar_t__ PWCHAR ;
typedef int LPSTR ;
typedef scalar_t__ LPCWSTR ;
typedef int INT ;
typedef int DWORD ;


 int FUNC_0 (int ,int,TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;

DWORD
FUNC_2(
   LPSTR VAR_0,
   INT VAR_1,
   LPCWSTR VAR_2,
   INT VAR_3
   )
{
   UNICODE_STRING VAR_4;

   if (VAR_3 < 0) VAR_3 = FUNC_1(VAR_2) + 1;

   VAR_4.Buffer = (PWCHAR)VAR_2;
   VAR_4.MaximumLength = VAR_3 * sizeof(WCHAR);
   VAR_4.Length = VAR_4.MaximumLength - sizeof(WCHAR);

   return FUNC_0(VAR_0, VAR_1, &VAR_4);
}
