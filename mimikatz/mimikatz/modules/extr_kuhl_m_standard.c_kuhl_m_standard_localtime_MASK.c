
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_3__ {int DaylightName; int StandardName; } ;
typedef TYPE_1__ TIME_ZONE_INFORMATION ;
typedef int NTSTATUS ;
typedef int FILETIME ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

NTSTATUS FUNC_5(int VAR_4, wchar_t * VAR_5[])
{
 FILETIME VAR_6;
 TIME_ZONE_INFORMATION VAR_7;
 DWORD VAR_8;
 FUNC_0(&VAR_6);
 VAR_8 = FUNC_1(&VAR_7);
 FUNC_2(L"Local: "); FUNC_4(&VAR_6); FUNC_2(L"\n");
 if(VAR_8 != VAR_1 && VAR_8 != VAR_3)
  FUNC_2(L"Zone : %.32s\n", (VAR_8 == VAR_2) ? VAR_7.StandardName : VAR_7.DaylightName);
 FUNC_2(L"UTC  : "); FUNC_3(&VAR_6); FUNC_2(L"\n");
 return VAR_0;
}
