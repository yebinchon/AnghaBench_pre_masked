
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {int tv_sec; } ;
struct TYPE_2__ {int tz_minuteswest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct timespec64*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct timespec64,unsigned long*) ;
 int FUNC_3 (struct timespec64,unsigned long,int) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_4(void)
{
 unsigned long VAR_4;
 struct timespec64 VAR_5, VAR_6;
 int VAR_7;

 if (!FUNC_0(VAR_0))
  return;

 FUNC_1(&VAR_6);

 VAR_5 = VAR_6;
 if (VAR_2)
  VAR_5.tv_sec -= (VAR_3.tz_minuteswest * 60);





 VAR_7 = FUNC_2(VAR_5, &VAR_4);
 if (VAR_7 == -VAR_1)
  return;

 FUNC_3(VAR_6, VAR_4, VAR_7);
}
