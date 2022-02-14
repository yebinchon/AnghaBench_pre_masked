
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int year; int month; int day; int second; int minute; int hour; } ;
struct TYPE_4__ {TYPE_1__ date_and_time; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (char*,char*,int,int,int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(char *VAR_1)
{
    FUNC_0(VAR_1, "%04d%02d%02d%02d%02d%02d00",
            VAR_0.date_and_time.year,
            VAR_0.date_and_time.month,
            VAR_0.date_and_time.day,
            VAR_0.date_and_time.hour,
            VAR_0.date_and_time.minute,
            VAR_0.date_and_time.second);
}
