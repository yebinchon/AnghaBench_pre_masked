
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {int tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_2__ {int tz_minuteswest; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct timespec64*) ;

void FUNC_1(void)
{
 if (VAR_1.tz_minuteswest != 0) {
  struct timespec64 VAR_2;

  VAR_0 = 1;
  VAR_2.tv_sec = VAR_1.tz_minuteswest * 60;
  VAR_2.tv_nsec = 0;
  FUNC_0(&VAR_2);
 }
}
