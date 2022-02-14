
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {unsigned long long tv_sec; scalar_t__ tv_nsec; } ;
typedef scalar_t__ pid_t ;
typedef int clockid_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,struct timespec*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,unsigned long long,scalar_t__,unsigned long long,scalar_t__,unsigned long long) ;
 scalar_t__ FUNC_4 (int ) ;

unsigned long long FUNC_5(clockid_t VAR_1, unsigned long long VAR_2)
{
 pid_t VAR_3, VAR_4;
 unsigned long long VAR_5;
 struct timespec VAR_6, VAR_7;

 VAR_3 = FUNC_2();
 FUNC_0(FUNC_1(VAR_1, &VAR_6) == 0);
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = FUNC_4(VAR_0);
  FUNC_0(VAR_3 == VAR_4);
 }
 FUNC_0(FUNC_1(VAR_1, &VAR_7) == 0);

 VAR_5 = VAR_7.tv_sec - VAR_6.tv_sec;
 VAR_5 *= 1000000000;
 VAR_5 += VAR_7.tv_nsec - VAR_6.tv_nsec;

 FUNC_3("%lu.%09lu - %lu.%09lu = %llu\n",
  VAR_7.tv_sec, VAR_7.tv_nsec,
  VAR_6.tv_sec, VAR_6.tv_nsec,
  VAR_5);

 return VAR_5;
}
