
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int QuadPart; } ;
struct TYPE_9__ {int Milliseconds; int Second; int Minute; int Hour; int Month; int Day; int Year; } ;
struct TYPE_8__ {int Year; int Month; int Day; int Hour; int Minute; int Milliseconds; scalar_t__ Second; } ;
typedef TYPE_1__ TIME_FIELDS ;
typedef TYPE_2__* PTIME_FIELDS ;
typedef TYPE_3__* PLARGE_INTEGER ;
typedef int BOOLEAN ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t FUNC_1 (int) ;
 int** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int) ;

__attribute__((used)) static BOOLEAN FUNC_3(PTIME_FIELDS VAR_8, PLARGE_INTEGER VAR_9)
{
 int VAR_10;
 TIME_FIELDS VAR_11;

 FUNC_2(&VAR_11,
  VAR_8,
  sizeof(TIME_FIELDS));

 if (VAR_8->Milliseconds < 0 || VAR_8->Milliseconds > 999 ||
  VAR_8->Second < 0 || VAR_8->Second > 59 ||
  VAR_8->Minute < 0 || VAR_8->Minute > 59 ||
  VAR_8->Hour < 0 || VAR_8->Hour > 23 ||
  VAR_8->Month < 1 || VAR_8->Month > 12 ||
  VAR_8->Day < 1 ||
  VAR_8->Day >
  VAR_1[FUNC_1(VAR_8->Year)][VAR_8->Month - 1] ||
  VAR_8->Year < 1601) {
  return VAR_0;
 }


 VAR_9->QuadPart = FUNC_0(VAR_11.Year);
 for (VAR_10 = 1; VAR_10 < VAR_11.Month; VAR_10++) {
  VAR_9->QuadPart += VAR_1[FUNC_1(VAR_11.Year)][VAR_10 - 1];
 }
 VAR_9->QuadPart += VAR_11.Day - 1;
 VAR_9->QuadPart *= VAR_2;
 VAR_9->QuadPart += VAR_11.Hour * VAR_3 + VAR_11.Minute * VAR_4 +
  VAR_11.Second;
 VAR_9->QuadPart *= VAR_6;
 VAR_9->QuadPart += VAR_11.Milliseconds * VAR_5;

 return VAR_7;
}
