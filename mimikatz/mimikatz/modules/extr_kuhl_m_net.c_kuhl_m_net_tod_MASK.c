
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
typedef int WORD ;
struct TYPE_7__ {scalar_t__ tod_hunds; scalar_t__ tod_secs; scalar_t__ tod_mins; scalar_t__ tod_hours; scalar_t__ tod_day; scalar_t__ tod_weekday; scalar_t__ tod_month; scalar_t__ tod_year; } ;
struct TYPE_6__ {int wYear; int wMonth; int wDayOfWeek; int wDay; int wHour; int wMinute; int wSecond; int wMilliseconds; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef TYPE_2__* PTIME_OF_DAY_INFO ;
typedef int NTSTATUS ;
typedef scalar_t__ NET_API_STATUS ;
typedef int FILETIME ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__**) ;
 int FUNC_2 (char*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;

NTSTATUS FUNC_6(int VAR_2, wchar_t * VAR_3[])
{
 NET_API_STATUS VAR_4;
 PTIME_OF_DAY_INFO VAR_5 = ((void*)0);
 SYSTEMTIME VAR_6;
 FILETIME VAR_7;

 VAR_4 = FUNC_1(VAR_2 ? VAR_3[0] : ((void*)0), &VAR_5);
 if(VAR_4 == VAR_0)
 {
  VAR_6.wYear = (WORD) VAR_5->tod_year;
  VAR_6.wMonth = (WORD) VAR_5->tod_month;
  VAR_6.wDayOfWeek = (WORD) VAR_5->tod_weekday;
  VAR_6.wDay = (WORD) VAR_5->tod_day;
  VAR_6.wHour = (WORD) VAR_5->tod_hours;
  VAR_6.wMinute = (WORD) VAR_5->tod_mins;
  VAR_6.wSecond = (WORD) VAR_5->tod_secs;
  VAR_6.wMilliseconds = (WORD) VAR_5->tod_hunds * 10;
  FUNC_3(&VAR_6, &VAR_7);

  FUNC_4(L"Remote time (local): ");
  FUNC_5(&VAR_7);
  FUNC_4(L"\n");




  FUNC_0(VAR_5);
 }
 else FUNC_2(L"NetRemoteTOD: %08x\n", VAR_4);
 return VAR_1;
}
