
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct timespec*,int *) ;

char FUNC_2(void) {
 struct timespec VAR_1;
 int VAR_2 = 50;
 int VAR_3;

 VAR_1.tv_sec = VAR_2 / 1000;
 VAR_1.tv_nsec = (VAR_2 % 1000) * 1000000;

 while ((VAR_3 = FUNC_0()) == VAR_0) {
  FUNC_1(&VAR_1, ((void*)0));
 }

 return (char)VAR_3;
}
