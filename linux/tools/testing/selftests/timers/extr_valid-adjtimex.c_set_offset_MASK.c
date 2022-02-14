
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long tv_sec; long long tv_usec; } ;
struct timex {TYPE_1__ time; int modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long long VAR_3 ;
 long long VAR_4 ;
 int FUNC_0 (int ,struct timex*) ;
 int FUNC_1 (char*,...) ;

int FUNC_2(long long VAR_5, int VAR_6)
{
 struct timex VAR_7 = {};
 int VAR_8;

 VAR_7.modes = VAR_1;
 if (VAR_6) {
  VAR_7.modes |= VAR_0;

  VAR_7.time.tv_sec = VAR_5 / VAR_3;
  VAR_7.time.tv_usec = VAR_5 % VAR_3;

  if (VAR_5 < 0 && VAR_7.time.tv_usec) {
   VAR_7.time.tv_sec -= 1;
   VAR_7.time.tv_usec += VAR_3;
  }
 } else {
  VAR_7.time.tv_sec = VAR_5 / VAR_4;
  VAR_7.time.tv_usec = VAR_5 % VAR_4;

  if (VAR_5 < 0 && VAR_7.time.tv_usec) {
   VAR_7.time.tv_sec -= 1;
   VAR_7.time.tv_usec += VAR_4;
  }
 }

 VAR_8 = FUNC_0(VAR_2, &VAR_7);
 if (VAR_8 < 0) {
  FUNC_1("(sec: %ld  usec: %ld) ", VAR_7.time.tv_sec, VAR_7.time.tv_usec);
  FUNC_1("[FAIL]\n");
  return -1;
 }
 return 0;
}
