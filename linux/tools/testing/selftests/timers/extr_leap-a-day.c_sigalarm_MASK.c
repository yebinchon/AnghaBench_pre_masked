
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tv_sec; int tv_usec; } ;
struct timex {int tai; TYPE_1__ time; scalar_t__ modes; } ;


 int VAR_0 ;
 int FUNC_0 (struct timex*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;

void FUNC_3(int VAR_3)
{
 struct timex VAR_4;
 int VAR_5;

 VAR_4.modes = 0;
 VAR_5 = FUNC_0(&VAR_4);

 if (VAR_4.time.tv_sec < VAR_2) {
  FUNC_1("Error: Early timer expiration! (Should be %ld)\n", VAR_2);
  VAR_1 = 1;
  FUNC_1("adjtimex: %10ld sec + %6ld us (%i)\t%s\n",
     VAR_4.time.tv_sec,
     VAR_4.time.tv_usec,
     VAR_4.tai,
     FUNC_2(VAR_5));
 }
 if (VAR_5 != VAR_0) {
  FUNC_1("Error: Timer seeing incorrect NTP state? (Should be TIME_WAIT)\n");
  VAR_1 = 1;
  FUNC_1("adjtimex: %10ld sec + %6ld us (%i)\t%s\n",
     VAR_4.time.tv_sec,
     VAR_4.time.tv_usec,
     VAR_4.tai,
     FUNC_2(VAR_5));
 }
}
