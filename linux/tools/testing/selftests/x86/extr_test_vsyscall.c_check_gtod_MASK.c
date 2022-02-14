
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timezone {scalar_t__ tz_minuteswest; scalar_t__ tz_dsttime; } ;
struct timeval {int dummy; } ;


 int FUNC_0 (char*,char const*,...) ;
 double FUNC_1 (struct timeval const*,struct timeval const*) ;

__attribute__((used)) static int FUNC_2(const struct timeval *VAR_0,
        const struct timeval *VAR_1,
        const struct timezone *VAR_2,
        const char *VAR_3,
        const struct timeval *VAR_4,
        const struct timezone *VAR_5)
{
 int VAR_6 = 0;
 double VAR_7, VAR_8;

 if (VAR_5 && (VAR_2->tz_minuteswest != VAR_5->tz_minuteswest || VAR_2->tz_dsttime != VAR_5->tz_dsttime)) {
  FUNC_0("[FAIL] %s tz mismatch\n", VAR_3);
  VAR_6++;
 }

 VAR_7 = FUNC_1(VAR_4, VAR_0);
 VAR_8 = FUNC_1(VAR_1, VAR_4);
 FUNC_0("\t%s time offsets: %lf %lf\n", VAR_3, VAR_7, VAR_8);

 if (VAR_7 < 0 || VAR_8 < 0) {
  FUNC_0("[FAIL]\t%s time was inconsistent with the syscall\n", VAR_3);
  VAR_6++;
 } else {
  FUNC_0("[OK]\t%s gettimeofday()'s timeval was okay\n", VAR_3);
 }

 return VAR_6;
}
