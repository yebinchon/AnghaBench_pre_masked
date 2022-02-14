
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct tomoyo_time {int sec; int min; int hour; int day; int month; int year; } ;
struct TYPE_2__ {int eof; } ;
struct tomoyo_io_buffer {TYPE_1__ r; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (scalar_t__,struct tomoyo_time*) ;
 int FUNC_1 (struct tomoyo_io_buffer*,char*,unsigned int,...) ;
 int * VAR_2 ;
 unsigned int* VAR_3 ;
 unsigned int* VAR_4 ;
 int * VAR_5 ;
 int FUNC_2 (struct tomoyo_io_buffer*) ;
 scalar_t__* VAR_6 ;
 int * VAR_7 ;

__attribute__((used)) static void FUNC_3(struct tomoyo_io_buffer *VAR_8)
{
 u8 VAR_9;
 unsigned int VAR_10 = 0;

 if (VAR_8->r.eof)
  return;
 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  FUNC_1(VAR_8, "Policy %-30s %10u",
     VAR_5[VAR_9],
     VAR_7[VAR_9]);
  if (VAR_6[VAR_9]) {
   struct tomoyo_time VAR_11;

   FUNC_0(VAR_6[VAR_9], &VAR_11);
   FUNC_1(VAR_8, " (Last: %04u/%02u/%02u %02u:%02u:%02u)",
      VAR_11.year, VAR_11.month, VAR_11.day,
      VAR_11.hour, VAR_11.min, VAR_11.sec);
  }
  FUNC_2(VAR_8);
 }
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  unsigned int VAR_12 = VAR_4[VAR_9];

  VAR_10 += VAR_12;
  FUNC_1(VAR_8, "Memory used by %-22s %10u",
     VAR_2[VAR_9], VAR_12);
  VAR_12 = VAR_3[VAR_9];
  if (VAR_12)
   FUNC_1(VAR_8, " (Quota: %10u)", VAR_12);
  FUNC_2(VAR_8);
 }
 FUNC_1(VAR_8, "Total memory used:                    %10u\n",
    VAR_10);
 VAR_8->r.eof = 1;
}
