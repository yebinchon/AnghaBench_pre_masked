
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONGLONG ;
typedef void* UINT ;
struct TYPE_6__ {void* dwLowDateTime; void* dwHighDateTime; } ;
struct TYPE_5__ {int wYear; int wMonth; int wDay; scalar_t__ wHour; scalar_t__ wMinute; int wSecond; scalar_t__ wMilliseconds; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef TYPE_2__ FILETIME ;
typedef int BOOL ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,char*,int,...) ;

__attribute__((used)) static void FUNC_3(void)
{
    FILETIME VAR_2;
    SYSTEMTIME VAR_3;
    ULONGLONG VAR_4 = (ULONGLONG)VAR_0 + VAR_1;
    BOOL VAR_5;

    VAR_2.dwHighDateTime = 0;
    VAR_2.dwLowDateTime = 0;
    VAR_5 = FUNC_0(&VAR_2, &VAR_3);
    FUNC_2( VAR_5,
       "FileTimeToSystemTime() failed with Error %d\n",FUNC_1());
    FUNC_2(((VAR_3.wYear == 1601) && (VAR_3.wMonth == 1) && (VAR_3.wDay == 1) &&
 (VAR_3.wHour == 0) && (VAR_3.wMinute == 0) && (VAR_3.wSecond == 0) &&
 (VAR_3.wMilliseconds == 0)),
 "Got Year %4d Month %2d Day %2d\n", VAR_3.wYear, VAR_3.wMonth, VAR_3.wDay);

    VAR_2.dwHighDateTime = (UINT)(VAR_4 >> 32);
    VAR_2.dwLowDateTime = (UINT)VAR_4;
    VAR_5 = FUNC_0(&VAR_2, &VAR_3);
    FUNC_2( VAR_5,
       "FileTimeToSystemTime() failed with Error %d\n",FUNC_1());
    FUNC_2(((VAR_3.wYear == 1970) && (VAR_3.wMonth == 1) && (VAR_3.wDay == 1) &&
 (VAR_3.wHour == 0) && (VAR_3.wMinute == 0) && (VAR_3.wSecond == 1) &&
 (VAR_3.wMilliseconds == 0)),
       "Got Year %4d Month %2d Day %2d Hour %2d Min %2d Sec %2d mSec %3d\n",
       VAR_3.wYear, VAR_3.wMonth, VAR_3.wDay, VAR_3.wHour, VAR_3.wMinute, VAR_3.wSecond,
       VAR_3.wMilliseconds);
}
