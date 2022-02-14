
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long long tv_usec; long long tv_sec; } ;


 long long VAR_0 ;
 long long VAR_1 ;
 long long FUNC_0 (long long) ;
 int FUNC_1 (char*,long long) ;

__attribute__((used)) static int FUNC_2(struct timeval VAR_2, struct timeval VAR_3)
{
 long long VAR_4;

 VAR_4 = VAR_3.tv_usec - VAR_2.tv_usec;
 VAR_4 += (VAR_3.tv_sec - VAR_2.tv_sec) * VAR_1;

 if (FUNC_0(VAR_4 - VAR_0 * VAR_1) > VAR_1 / 2) {
  FUNC_1("Diff too high: %lld..", VAR_4);
  return -1;
 }

 return 0;
}
