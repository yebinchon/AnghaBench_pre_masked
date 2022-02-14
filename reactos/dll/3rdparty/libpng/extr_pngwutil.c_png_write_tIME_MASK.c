
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int png_structrp ;
typedef TYPE_1__* png_const_timep ;
typedef int png_byte ;
struct TYPE_3__ {int month; int day; int hour; int second; int minute; int year; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int*,int) ;

void
FUNC_4(png_structrp VAR_1, png_const_timep VAR_2)
{
   png_byte VAR_3[7];

   FUNC_0(1, "in png_write_tIME");

   if (VAR_2->month > 12 || VAR_2->month < 1 ||
       VAR_2->day > 31 || VAR_2->day < 1 ||
       VAR_2->hour > 23 || VAR_2->second > 60)
   {
      FUNC_2(VAR_1, "Invalid time specified for tIME chunk");
      return;
   }

   FUNC_1(VAR_3, VAR_2->year);
   VAR_3[2] = VAR_2->month;
   VAR_3[3] = VAR_2->day;
   VAR_3[4] = VAR_2->hour;
   VAR_3[5] = VAR_2->minute;
   VAR_3[6] = VAR_2->second;

   FUNC_3(VAR_1, VAR_0, VAR_3, 7);
}
