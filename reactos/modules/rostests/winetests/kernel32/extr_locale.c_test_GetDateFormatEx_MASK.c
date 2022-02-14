
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int wYear; int wMonth; int wDay; int wDayOfWeek; int wHour; int wMinute; int wSecond; int wMilliseconds; } ;
typedef TYPE_1__ SYSTEMTIME ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int) ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int,char*,int,...) ;
 int FUNC_5 (int ,int,TYPE_1__*,int *,int *,int ,int *) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
  int VAR_9;
  SYSTEMTIME VAR_10;
  WCHAR VAR_11[VAR_0], VAR_12[VAR_0], VAR_13[VAR_0];

  if (!&FUNC_5)
  {
      FUNC_6("GetDateFormatEx not supported\n");
      return;
  }

  FUNC_2("","");
  FUNC_3(0xdeadbeef);
  VAR_9 = FUNC_5(VAR_8, VAR_1, ((void*)0),
                       VAR_12, VAR_11, FUNC_0(VAR_11), ((void*)0));
  FUNC_4(!VAR_9 && FUNC_1() == VAR_3,
     "Expected ERROR_INVALID_FLAGS, got %d\n", FUNC_1());
  VAR_5;

  FUNC_2("","");
  FUNC_3(0xdeadbeef);
  VAR_9 = FUNC_5(VAR_8, 0, ((void*)0), VAR_12, ((void*)0), FUNC_0(VAR_11), ((void*)0));
  FUNC_4( !VAR_9 && FUNC_1() == VAR_4,
      "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_1());

  FUNC_2("","");
  VAR_9 = FUNC_5(VAR_8, 0, ((void*)0), VAR_12, ((void*)0), 0, ((void*)0));
  FUNC_4(VAR_9, "Expected ret != 0, got %d, error %d\n", VAR_9, FUNC_1());
  VAR_6; VAR_5;

  FUNC_2("","");
  FUNC_3(0xdeadbeef);
  VAR_9 = FUNC_5(VAR_8, VAR_1|VAR_2, ((void*)0),
                       VAR_12, ((void*)0), 0, ((void*)0));
  FUNC_4(!VAR_9 && FUNC_1() == VAR_3,
     "Expected ERROR_INVALID_FLAGS, got %d\n", FUNC_1());
  VAR_5;

  VAR_10.wYear = 2002;
  VAR_10.wMonth = 10;
  VAR_10.wDay = 23;
  VAR_10.wDayOfWeek = 45612;
  VAR_10.wHour = 65432;
  VAR_10.wMinute = 34512;
  VAR_10.wSecond = 65535;
  VAR_10.wMilliseconds = 12345;
  FUNC_2("dddd d MMMM yyyy","Wednesday 23 October 2002");
  VAR_9 = FUNC_5(VAR_8, 0, &VAR_10, VAR_12, VAR_11, FUNC_0(VAR_11), ((void*)0));
  FUNC_4(VAR_9, "Expected ret != 0, got %d, error %d\n", VAR_9, FUNC_1());
  VAR_6; VAR_5;

  VAR_10.wYear = 2002;
  VAR_10.wMonth = 10;
  VAR_10.wDay = 23;
  VAR_10.wDayOfWeek = 45612;
  VAR_10.wHour = 65432;
  VAR_10.wMinute = 34512;
  VAR_10.wSecond = 65535;
  VAR_10.wMilliseconds = 12345;
  FUNC_2("dddd d MMMM yyyy","Wednesday 23 October 2002");
  VAR_9 = FUNC_5(VAR_8, 0, &VAR_10, VAR_12, VAR_11, FUNC_0(VAR_11), VAR_7);
  FUNC_4( !VAR_9 && FUNC_1() == VAR_4,
      "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_1());



  VAR_10.wYear = 1601;
  VAR_10.wMonth = 1;
  VAR_10.wDay = 1;
  VAR_10.wDayOfWeek = 0;
  VAR_10.wHour = 0;
  VAR_10.wMinute = 0;
  VAR_10.wSecond = 0;
  VAR_10.wMilliseconds = 0;
  FUNC_2("dddd d MMMM yyyy","Monday 1 January 1601");
  FUNC_3(0xdeadbeef);
  VAR_9 = FUNC_5(VAR_8, 0, &VAR_10, VAR_12, VAR_11, FUNC_0(VAR_11), ((void*)0));
  FUNC_4(VAR_9, "Expected ret != 0, got %d, error %d\n", VAR_9, FUNC_1());
  VAR_6; VAR_5;

  VAR_10.wYear = 1600;
  VAR_10.wMonth = 12;
  VAR_10.wDay = 31;
  VAR_10.wDayOfWeek = 0;
  VAR_10.wHour = 23;
  VAR_10.wMinute = 59;
  VAR_10.wSecond = 59;
  VAR_10.wMilliseconds = 999;
  FUNC_2("dddd d MMMM yyyy","Friday 31 December 1600");
  FUNC_3(0xdeadbeef);
  VAR_9 = FUNC_5(VAR_8, 0, &VAR_10, VAR_12, VAR_11, FUNC_0(VAR_11), ((void*)0));
  FUNC_4( !VAR_9 && FUNC_1() == VAR_4,
      "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_1());
}
