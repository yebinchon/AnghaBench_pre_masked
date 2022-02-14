
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_usec; scalar_t__ tv_sec; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct timeval *VAR_0, long VAR_1) {
  struct timeval VAR_2;
  FUNC_0(VAR_1>=0);
  VAR_2= *VAR_0;
  VAR_2.tv_usec += (VAR_1%1000)*1000;
  VAR_2.tv_sec += VAR_1/1000;
  if (VAR_2.tv_usec >= 1000000) { VAR_2.tv_sec++; VAR_2.tv_usec -= 1000000; }
  *VAR_0= VAR_2;
}
