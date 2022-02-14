
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* png_timep ;
typedef int png_structp ;
typedef int png_size_t ;
typedef int png_byte ;
struct TYPE_3__ {int month; int day; int hour; int second; int minute; int year; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int*,int ) ;

void
FUNC_4(png_structp VAR_2, png_timep VAR_3)
{



   png_byte VAR_4[7];

   FUNC_0(1, "in png_write_tIME\n");
   if (VAR_3->month > 12 || VAR_3->month < 1 ||
       VAR_3->day > 31 || VAR_3->day < 1 ||
       VAR_3->hour > 23 || VAR_3->second > 60)
   {
      FUNC_2(VAR_2, "Invalid time specified for tIME chunk");
      return;
   }

   FUNC_1(VAR_4, VAR_3->year);
   VAR_4[2] = VAR_3->month;
   VAR_4[3] = VAR_3->day;
   VAR_4[4] = VAR_3->hour;
   VAR_4[5] = VAR_3->minute;
   VAR_4[6] = VAR_3->second;

   FUNC_3(VAR_2, VAR_1, VAR_4, (png_size_t)7);
}
