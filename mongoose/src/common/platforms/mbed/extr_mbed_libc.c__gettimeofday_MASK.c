
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; int tv_sec; } ;


 int FUNC_0 (int *) ;

int FUNC_1(struct timeval *VAR_0, void *VAR_1) {
  VAR_0->tv_sec = FUNC_0(((void*)0));
  VAR_0->tv_usec = 0;
  return 0;
}
