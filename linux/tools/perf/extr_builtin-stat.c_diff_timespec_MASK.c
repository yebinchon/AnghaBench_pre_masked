
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct timespec *VAR_1, struct timespec *VAR_2,
     struct timespec *VAR_3)
{
 VAR_1->tv_sec = VAR_2->tv_sec - VAR_3->tv_sec;
 if (VAR_2->tv_nsec < VAR_3->tv_nsec) {
  VAR_1->tv_nsec = VAR_2->tv_nsec + VAR_0 - VAR_3->tv_nsec;
  VAR_1->tv_sec--;
 } else {
  VAR_1->tv_nsec = VAR_2->tv_nsec - VAR_3->tv_nsec ;
 }
}
