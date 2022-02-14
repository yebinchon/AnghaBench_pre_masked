
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_3__ {int Length; char* Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int UNICODE_NULL ;
typedef int NTSTATUS ;
typedef char* LPWSTR ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,char*,char*) ;

int FUNC_7(int VAR_0, WCHAR * VAR_1[])
{
   NTSTATUS VAR_2;
   UNICODE_STRING VAR_3;

   if (VAR_0 != 2)
   {
      FUNC_5(L"Usage: load <ServiceName>\n");
      return 0;
   }
   VAR_3.Length = (FUNC_4(VAR_1[1]) + 52) * sizeof(WCHAR);
   VAR_3.Buffer = (LPWSTR)FUNC_3(VAR_3.Length + sizeof(UNICODE_NULL));
   FUNC_6(VAR_3.Buffer,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\%S",
      VAR_1[1]);
   FUNC_5(L"%s %u %Id\n", VAR_3.Buffer, VAR_3.Length, FUNC_4(VAR_3.Buffer));
   VAR_2 = FUNC_1(&VAR_3);
   FUNC_2(VAR_3.Buffer);
   if (!FUNC_0(VAR_2))
   {
      FUNC_5(L"Failed: %x\n", VAR_2);
      return 1;
   }
   return 0;
}
