
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timex {int freq; scalar_t__ tick; scalar_t__ offset; scalar_t__ modes; } ;
struct timespec {int dummy; } ;


 int VAR_0 ;
 long long VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct timex*) ;
 scalar_t__ FUNC_2 (int ,struct timespec*) ;
 long long FUNC_3 (struct timespec,struct timespec) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct timespec*,struct timespec*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 (long long) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ,int *) ;
 long long FUNC_12 (long long,int) ;
 int FUNC_13 (int) ;
 int VAR_2 ;

int FUNC_14(int VAR_3, char **VAR_4)
{
 struct timespec VAR_5, VAR_6, VAR_7, VAR_8;
 long long VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 struct timex VAR_14, VAR_15;

 FUNC_11(VAR_2, ((void*)0));

 if (FUNC_2(VAR_0, &VAR_6)) {
  FUNC_10("ERR: NO CLOCK_MONOTONIC_RAW\n");
  return -1;
 }

 VAR_14 = 0;
 FUNC_1(&VAR_14);
 FUNC_5(&VAR_5, &VAR_6);
 VAR_7 = VAR_5;
 VAR_9 = FUNC_3(VAR_5, VAR_6);

 if (VAR_14)
  FUNC_10("WARNING: ADJ_OFFSET in progress, this will cause inaccurate results\n");

 FUNC_10("Estimating clock drift: ");
 FUNC_4(VAR_2);
 FUNC_13(120);

 FUNC_5(&VAR_5, &VAR_6);
 VAR_8 = VAR_5;
 VAR_15 = 0;
 FUNC_1(&VAR_15);
 VAR_10 = FUNC_3(VAR_5, VAR_6);

 VAR_11 = FUNC_3(VAR_7, VAR_8);


 VAR_12 = ((VAR_10-VAR_9)*VAR_1)/VAR_11;
 VAR_12 = -VAR_12;
 FUNC_10("%lld.%i(est)", VAR_12/1000, FUNC_0((int)(VAR_12%1000)));


 VAR_13 = (VAR_14 + VAR_15) * 1000 / 2;
 VAR_13 = (long long)VAR_14 * 1000;
 VAR_13 = FUNC_12(VAR_13, 16);
 FUNC_10(" %lld.%i(act)", VAR_13/1000, FUNC_0((int)(VAR_13%1000)));

 if (FUNC_9(VAR_12 - VAR_13) > 1000) {
  if (VAR_14 || VAR_15 ||
      VAR_14 != VAR_15 || VAR_14 != VAR_15) {
   FUNC_10("	[SKIP]\n");
   return FUNC_8("The clock was adjusted externally. Shutdown NTPd or other time sync daemons\n");
  }
  FUNC_10("	[FAILED]\n");
  return FUNC_6();
 }
 FUNC_10("	[OK]\n");
 return FUNC_7();
}
