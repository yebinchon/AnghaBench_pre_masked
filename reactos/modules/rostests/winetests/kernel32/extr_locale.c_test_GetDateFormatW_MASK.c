
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int wYear; int wMonth; int wDay; int wDayOfWeek; int wHour; int wMinute; int wSecond; int wMilliseconds; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int LCID ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,TYPE_1__*,int *,int *,int ) ;
 int FUNC_2 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_9 ;
 int FUNC_5 (char*,char*) ;
 int VAR_10 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,char*,int,...) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
  int VAR_11;
  SYSTEMTIME VAR_12;
  WCHAR VAR_13[VAR_0], VAR_14[VAR_0], VAR_15[VAR_0];
  LCID VAR_16 = FUNC_4(FUNC_3(VAR_7, VAR_10), VAR_9);

  FUNC_5("","");
  VAR_11 = FUNC_1(VAR_8, VAR_1, ((void*)0),
                       VAR_14, VAR_13, FUNC_0(VAR_13));
  if (FUNC_2() == VAR_2)
  {
    FUNC_8("GetDateFormatW is not implemented\n");
    return;
  }
  FUNC_7(!VAR_11 && FUNC_2() == VAR_3,
     "Expected ERROR_INVALID_FLAGS, got %d\n", FUNC_2());
  VAR_5;

  FUNC_5("","");
  FUNC_6(0xdeadbeef);
  VAR_11 = FUNC_1 (VAR_16, 0, ((void*)0), VAR_14, ((void*)0), FUNC_0(VAR_13));
  FUNC_7( !VAR_11 && FUNC_2() == VAR_4,
      "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_2());

  FUNC_5("","");
  VAR_11 = FUNC_1 (VAR_16, 0, ((void*)0), VAR_14, ((void*)0), 0);
  FUNC_7(VAR_11, "Expected ret != 0, got %d, error %d\n", VAR_11, FUNC_2());
  VAR_6; VAR_5;

  VAR_12.wYear = 2002;
  VAR_12.wMonth = 10;
  VAR_12.wDay = 23;
  VAR_12.wDayOfWeek = 45612;
  VAR_12.wHour = 65432;
  VAR_12.wMinute = 34512;
  VAR_12.wSecond = 65535;
  VAR_12.wMilliseconds = 12345;
  FUNC_5("dddd d MMMM yyyy","Wednesday 23 October 2002");
  VAR_11 = FUNC_1 (VAR_16, 0, &VAR_12, VAR_14, VAR_13, FUNC_0(VAR_13));
  FUNC_7(VAR_11, "Expected ret != 0, got %d, error %d\n", VAR_11, FUNC_2());
  VAR_6; VAR_5;



  VAR_12.wYear = 1601;
  VAR_12.wMonth = 1;
  VAR_12.wDay = 1;
  VAR_12.wDayOfWeek = 0;
  VAR_12.wHour = 0;
  VAR_12.wMinute = 0;
  VAR_12.wSecond = 0;
  VAR_12.wMilliseconds = 0;
  FUNC_5("dddd d MMMM yyyy","Monday 1 January 1601");
  FUNC_6(0xdeadbeef);
  VAR_11 = FUNC_1 (VAR_16, 0, &VAR_12, VAR_14, VAR_13, FUNC_0(VAR_13));
  FUNC_7(VAR_11, "Expected ret != 0, got %d, error %d\n", VAR_11, FUNC_2());
  VAR_6; VAR_5;

  VAR_12.wYear = 1600;
  VAR_12.wMonth = 12;
  VAR_12.wDay = 31;
  VAR_12.wDayOfWeek = 0;
  VAR_12.wHour = 23;
  VAR_12.wMinute = 59;
  VAR_12.wSecond = 59;
  VAR_12.wMilliseconds = 999;
  FUNC_5("dddd d MMMM yyyy","Friday 31 December 1600");
  FUNC_6(0xdeadbeef);
  VAR_11 = FUNC_1 (VAR_16, 0, &VAR_12, VAR_14, VAR_13, FUNC_0(VAR_13));
  FUNC_7( !VAR_11 && FUNC_2() == VAR_4,
      "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_2());
}
