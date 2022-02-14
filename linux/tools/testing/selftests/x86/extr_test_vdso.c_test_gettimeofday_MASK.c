
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timezone {int tz_minuteswest; scalar_t__ tz_dsttime; } ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct timeval*,struct timezone*) ;
 int FUNC_2 (struct timeval*,struct timeval*) ;
 int FUNC_3 (struct timeval*,struct timezone*) ;

__attribute__((used)) static void FUNC_4(void)
{
 struct timeval VAR_2, VAR_3, VAR_4;
 struct timezone VAR_5, VAR_6;
 int VAR_7, VAR_8;

 if (!&FUNC_3)
  return;

 FUNC_0("[RUN]\tTesting gettimeofday...\n");

 if (FUNC_1(&VAR_2, &VAR_5) < 0) {
  FUNC_0("[FAIL]\tsys_gettimeofday failed (%d)\n", VAR_0);
  VAR_1++;
  return;
 }

 VAR_7 = FUNC_3(&VAR_3, &VAR_6);
 VAR_8 = FUNC_1(&VAR_4, ((void*)0));

 if (VAR_7 != 0 || VAR_8 != 0) {
  FUNC_0("[FAIL]\tvDSO returned %d, syscall errno=%d\n",
         VAR_7, VAR_0);
  VAR_1++;
  return;
 }

 FUNC_0("\t%llu.%06ld %llu.%06ld %llu.%06ld\n",
        (unsigned long long)VAR_2.tv_sec, VAR_2.tv_usec,
        (unsigned long long)VAR_3.tv_sec, VAR_3.tv_usec,
        (unsigned long long)VAR_4.tv_sec, VAR_4.tv_usec);

 if (!FUNC_2(&VAR_2, &VAR_3) || !FUNC_2(&VAR_3, &VAR_4)) {
  FUNC_0("[FAIL]\tTimes are out of sequence\n");
  VAR_1++;
 }

 if (VAR_5.tz_minuteswest == VAR_6.tz_minuteswest &&
     VAR_5.tz_dsttime == VAR_6.tz_dsttime) {
  FUNC_0("[OK]\ttimezones match: minuteswest=%d, dsttime=%d\n",
         VAR_5.tz_minuteswest, VAR_5.tz_dsttime);
 } else {
  FUNC_0("[FAIL]\ttimezones do not match\n");
  VAR_1++;
 }


 FUNC_3(&VAR_3, ((void*)0));
}
