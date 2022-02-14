
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timex {long tick; scalar_t__ freq; scalar_t__ offset; int modes; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct timex*) ;
 int FUNC_1 (int ) ;
 long long FUNC_2 () ;
 int FUNC_3 (long long) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int) ;
 int VAR_6 ;
 long long VAR_7 ;

int FUNC_6(long VAR_8)
{
 long long VAR_9, VAR_10;
 struct timex VAR_11;

 VAR_11 = VAR_3;
 VAR_11 |= VAR_1;
 VAR_11 |= VAR_0;
 VAR_11 |= VAR_2;

 VAR_11 = VAR_5;
 VAR_11 = 0;
 VAR_11 = 0;
 VAR_11 = VAR_8;

 FUNC_0(&VAR_11);

 FUNC_5(1);

 VAR_10 = ((long long)VAR_8 * VAR_4)/VAR_7 - VAR_4;
 FUNC_4("Estimating tick (act: %ld usec, %lld ppm): ", VAR_8, VAR_10);

 VAR_9 = FUNC_2();
 FUNC_4("%lld usec, %lld ppm", VAR_7 + (VAR_7 * VAR_9 / VAR_4), VAR_9);
 FUNC_1(VAR_6);

 VAR_11 = 0;
 FUNC_0(&VAR_11);

 if (VAR_11 || VAR_11 || VAR_11 != VAR_8) {
  FUNC_4("	[ERROR]\n");
  FUNC_4("\tUnexpected adjtimex return values, make sure ntpd is not running.\n");
  return -1;
 }
 if (FUNC_3(VAR_9 - VAR_10) > 100) {
  FUNC_4("	[FAILED]\n");
  return -1;
 }
 FUNC_4("	[OK]\n");

 return 0;
}
