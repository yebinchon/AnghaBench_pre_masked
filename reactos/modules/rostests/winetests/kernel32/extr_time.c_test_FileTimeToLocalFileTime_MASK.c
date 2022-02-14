
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ULONGLONG ;
typedef void* UINT ;
struct TYPE_11__ {void* dwLowDateTime; void* dwHighDateTime; } ;
struct TYPE_10__ {int wYear; int wMonth; int wDay; scalar_t__ wHour; scalar_t__ wMinute; int wSecond; scalar_t__ wMilliseconds; } ;
struct TYPE_9__ {int DaylightBias; int StandardBias; scalar_t__ Bias; } ;
typedef TYPE_1__ TIME_ZONE_INFORMATION ;
typedef TYPE_2__ SYSTEMTIME ;
typedef int LONGLONG ;
typedef TYPE_3__ FILETIME ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static void FUNC_6(void)
{
    FILETIME VAR_6, VAR_7;
    SYSTEMTIME VAR_8;
    TIME_ZONE_INFORMATION VAR_9;
    DWORD VAR_10 = FUNC_3(&VAR_9);
    ULONGLONG VAR_11 = (ULONGLONG)VAR_1 + VAR_2 +
        (LONGLONG)(VAR_9.Bias +
            ( VAR_10 == VAR_5 ? VAR_9.StandardBias :
            ( VAR_10 == VAR_3 ? VAR_9.DaylightBias : 0 ))) *
             VAR_0 *VAR_1;
    BOOL VAR_12;

    FUNC_5( VAR_10 != VAR_4 , "GetTimeZoneInformation failed\n");
    VAR_6.dwHighDateTime = (UINT)(VAR_11 >> 32);
    VAR_6.dwLowDateTime = (UINT)VAR_11;
    VAR_12 = FUNC_0(&VAR_6, &VAR_7);
    FUNC_5( VAR_12,
       "FileTimeToLocalFileTime() failed with Error %d\n",FUNC_2());
    FUNC_1(&VAR_7, &VAR_8);
    FUNC_5(((VAR_8.wYear == 1970) && (VAR_8.wMonth == 1) && (VAR_8.wDay == 1) &&
 (VAR_8.wHour == 0) && (VAR_8.wMinute == 0) && (VAR_8.wSecond == 1) &&
 (VAR_8.wMilliseconds == 0)),
       "Got Year %4d Month %2d Day %2d Hour %2d Min %2d Sec %2d mSec %3d\n",
       VAR_8.wYear, VAR_8.wMonth, VAR_8.wDay, VAR_8.wHour, VAR_8.wMinute, VAR_8.wSecond,
       VAR_8.wMilliseconds);

    FUNC_5(FUNC_4("TZ","GMT") != 0,
       "SetEnvironmentVariableA failed\n");
    FUNC_5(VAR_10 != VAR_4, "GetTimeZoneInformation failed\n");
    VAR_12 = FUNC_0(&VAR_6, &VAR_7);
    FUNC_5( VAR_12,
       "FileTimeToLocalFileTime() failed with Error %d\n",FUNC_2());
    FUNC_1(&VAR_7, &VAR_8);
    FUNC_5(((VAR_8.wYear == 1970) && (VAR_8.wMonth == 1) && (VAR_8.wDay == 1) &&
 (VAR_8.wHour == 0) && (VAR_8.wMinute == 0) && (VAR_8.wSecond == 1) &&
 (VAR_8.wMilliseconds == 0)),
       "Got Year %4d Month %2d Day %2d Hour %2d Min %2d Sec %2d mSec %3d\n",
       VAR_8.wYear, VAR_8.wMonth, VAR_8.wDay, VAR_8.wHour, VAR_8.wMinute, VAR_8.wSecond,
       VAR_8.wMilliseconds);
    FUNC_5(FUNC_4("TZ",((void*)0)) != 0,
       "SetEnvironmentVariableA failed\n");
}
