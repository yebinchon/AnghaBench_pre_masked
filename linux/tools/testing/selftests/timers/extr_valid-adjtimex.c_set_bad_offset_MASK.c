
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long tv_sec; long tv_usec; } ;
struct timex {TYPE_1__ time; int modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct timex*) ;
 int FUNC_1 (char*,...) ;

int FUNC_2(long VAR_3, long VAR_4, int VAR_5)
{
 struct timex VAR_6 = {};
 int VAR_7;

 VAR_6.modes = VAR_1;
 if (VAR_5)
  VAR_6.modes |= VAR_0;

 VAR_6.time.tv_sec = VAR_3;
 VAR_6.time.tv_usec = VAR_4;
 VAR_7 = FUNC_0(VAR_2, &VAR_6);
 if (VAR_7 >= 0) {
  FUNC_1("Invalid (sec: %ld  usec: %ld) did not fail! ", VAR_6.time.tv_sec, VAR_6.time.tv_usec);
  FUNC_1("[FAIL]\n");
  return -1;
 }
 return 0;
}
