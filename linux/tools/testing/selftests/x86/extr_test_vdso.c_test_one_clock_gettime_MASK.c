
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,struct timespec*) ;
 int FUNC_2 (struct timespec*,struct timespec*) ;
 int FUNC_3 (int,struct timespec*) ;

__attribute__((used)) static void FUNC_4(int VAR_3, const char *VAR_4)
{
 struct timespec VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9;

 FUNC_0("[RUN]\tTesting clock_gettime for clock %s (%d)...\n", VAR_4, VAR_3);

 if (FUNC_1(VAR_3, &VAR_5) < 0) {
  if (VAR_1 == VAR_0) {
   VAR_8 = FUNC_3(VAR_3, &VAR_6);
   if (VAR_8 == -VAR_0) {
    FUNC_0("[OK]\tNo such clock.\n");
   } else {
    FUNC_0("[FAIL]\tNo such clock, but __vdso_clock_gettime returned %d\n", VAR_8);
    VAR_2++;
   }
  } else {
   FUNC_0("[WARN]\t clock_gettime(%d) syscall returned error %d\n", VAR_3, VAR_1);
  }
  return;
 }

 VAR_8 = FUNC_3(VAR_3, &VAR_6);
 VAR_9 = FUNC_1(VAR_3, &VAR_7);

 if (VAR_8 != 0 || VAR_9 != 0) {
  FUNC_0("[FAIL]\tvDSO returned %d, syscall errno=%d\n",
         VAR_8, VAR_1);
  VAR_2++;
  return;
 }

 FUNC_0("\t%llu.%09ld %llu.%09ld %llu.%09ld\n",
        (unsigned long long)VAR_5.tv_sec, VAR_5.tv_nsec,
        (unsigned long long)VAR_6.tv_sec, VAR_6.tv_nsec,
        (unsigned long long)VAR_7.tv_sec, VAR_7.tv_nsec);

 if (!FUNC_2(&VAR_5, &VAR_6) || !FUNC_2(&VAR_6, &VAR_7)) {
  FUNC_0("[FAIL]\tTimes are out of sequence\n");
  VAR_2++;
 }
}
