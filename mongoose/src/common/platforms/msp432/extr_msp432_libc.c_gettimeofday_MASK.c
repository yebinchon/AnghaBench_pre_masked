
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timeval {int tv_sec; int tv_usec; } ;


 int FUNC_0 () ;

int FUNC_1(struct timeval *VAR_0, void *VAR_1) {
  uint32_t VAR_2 = FUNC_0();
  VAR_0->tv_sec = VAR_2 / 1000;
  VAR_0->tv_usec = (VAR_2 % 1000) * 1000;
  return 0;
}
