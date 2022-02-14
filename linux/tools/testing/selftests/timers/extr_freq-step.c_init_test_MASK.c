
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;
struct sample {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,struct timespec*) ;
 double FUNC_1 (struct sample*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*) ;
 int VAR_6 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int,double,double) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_9(void)
{
 struct timespec VAR_8;
 struct sample VAR_9;

 if (FUNC_0(VAR_1, &VAR_8)) {
  FUNC_4("[FAIL] clock_gettime(CLOCK_MONOTONIC_RAW)");
  FUNC_2();
 }

 VAR_5 = VAR_8.tv_sec;

 if (FUNC_0(VAR_0, &VAR_8)) {
  FUNC_4("[FAIL] clock_gettime(CLOCK_MONOTONIC)");
  FUNC_2();
 }

 VAR_4 = VAR_8.tv_sec;

 VAR_7 = FUNC_8(VAR_3);

 VAR_6 = FUNC_1(&VAR_9) / 2.0;
 FUNC_5("CLOCK_MONOTONIC_RAW+CLOCK_MONOTONIC precision: %.0f ns\t\t",
        1e9 * VAR_6);

 if (VAR_6 > VAR_2)
  FUNC_3("precision: %.0f ns > MAX_PRECISION: %.0f ns\n",
    1e9 * VAR_6, 1e9 * VAR_2);

 FUNC_5("[OK]\n");
 FUNC_7(VAR_8.tv_sec ^ VAR_8.tv_nsec);

 FUNC_6(1, 0.0, 0.0);
}
