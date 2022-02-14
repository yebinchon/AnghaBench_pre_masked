
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {int tv_sec; } ;
struct TYPE_2__ {int tz_minuteswest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct timespec64*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int,struct timespec64*,struct timespec64*) ;
 int FUNC_3 (struct timespec64,long,int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_4 (struct timespec64) ;

__attribute__((used)) static bool FUNC_5(void)
{
 static bool VAR_6;
 struct timespec64 VAR_7;
 struct timespec64 VAR_8;
 int VAR_9 = -VAR_2;
 long VAR_10 = VAR_3 / 2;

 if (!FUNC_0(VAR_0))
  return 0;

 if (VAR_6)
  return 0;
 FUNC_1(&VAR_7);
 if (FUNC_2(-1 * VAR_10, &VAR_8, &VAR_7)) {
  if (VAR_4)
   VAR_8.tv_sec -= (VAR_5.tz_minuteswest * 60);
  VAR_9 = FUNC_4(VAR_8);




  if (VAR_9 == -VAR_1) {
   VAR_6 = 1;
   return 0;
  }
 }

 FUNC_3(VAR_7, VAR_10, VAR_9);
 return 1;
}
