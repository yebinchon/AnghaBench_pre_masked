
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef scalar_t__ uint32_t ;
struct timeval {unsigned long long tv_sec; unsigned long long tv_usec; } ;
struct _reent {int dummy; } ;


 scalar_t__ FUNC_0 () ;

int FUNC_1(struct _reent *VAR_0, struct timeval *VAR_1, void *VAR_2) {
  static uint32_t VAR_3 = 0;
  static uint32_t VAR_4 = 0;
  uint32_t VAR_5 = FUNC_0();
  uint64_t VAR_6 = VAR_5;
  if (VAR_3 > 0 && VAR_5 < VAR_3) VAR_4++;
  VAR_6 += (((uint64_t) VAR_4) * (1ULL << 32));
  VAR_1->tv_sec = VAR_6 / 1000000ULL;
  VAR_1->tv_usec = VAR_6 % 1000000ULL;
  VAR_3 = VAR_5;
  return 0;
  (void) VAR_0;
  (void) VAR_2;
}
