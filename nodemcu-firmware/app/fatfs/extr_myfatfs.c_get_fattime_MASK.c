
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int year; int mon; int day; int hour; int min; int sec; } ;
typedef TYPE_1__ vfs_time ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

DWORD FUNC_1( void )
{
  DWORD VAR_4;
  vfs_time VAR_5;

  if (VAR_3 == FUNC_0( &VAR_5 )) {

    VAR_5.year = (VAR_5.year >= 1980) && (VAR_5.year < 2108) ? VAR_5.year : 1980;
    VAR_5.mon = (VAR_5.mon >= 1) && (VAR_5.mon <= 12) ? VAR_5.mon : 1;
    VAR_5.day = (VAR_5.day >= 1) && (VAR_5.day <= 31) ? VAR_5.day : 1;
    VAR_5.hour = (VAR_5.hour >= 0) && (VAR_5.hour <= 23) ? VAR_5.hour : 0;
    VAR_5.min = (VAR_5.min >= 0) && (VAR_5.min <= 59) ? VAR_5.min : 0;
    VAR_5.sec = (VAR_5.sec >= 0) && (VAR_5.sec <= 59) ? VAR_5.sec : 0;

    VAR_4 = (VAR_5.year-1980) << 25 | VAR_5.mon << 21 | VAR_5.day << 16 |
            VAR_5.hour << 11 | VAR_5.min << 5 | VAR_5.sec;
  } else {

    VAR_4 = ((DWORD)(VAR_2 - 1980) << 25 | (DWORD)VAR_1 << 21 | (DWORD)VAR_0 << 16);
  }

  return VAR_4;
}
