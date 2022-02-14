
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timex {int tick; scalar_t__ freq; scalar_t__ offset; int modes; } ;
struct timespec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct timex*) ;
 scalar_t__ FUNC_1 (long) ;
 scalar_t__ FUNC_2 (int ,struct timespec*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int *) ;
 int VAR_6 ;
 int FUNC_7 (int ) ;
 int VAR_7 ;

int FUNC_8(int VAR_8, char **VAR_9)
{
 struct timespec VAR_10;
 long VAR_11, VAR_12, VAR_13, VAR_14;
 struct timex VAR_15;

 VAR_14 = 0;
 FUNC_6(VAR_6, ((void*)0));

 if (FUNC_2(VAR_3, &VAR_10)) {
  FUNC_5("ERR: NO CLOCK_MONOTONIC_RAW\n");
  return -1;
 }

 FUNC_5("Each iteration takes about 15 seconds\n");

 VAR_7 = FUNC_7(VAR_5);
 VAR_7 = VAR_4/FUNC_7(VAR_5);
 VAR_12 = VAR_7/10;
 VAR_13 = VAR_12/4;

 for (VAR_11 = (VAR_7 - VAR_12); VAR_11 < (VAR_7 + VAR_12); VAR_11 += VAR_13) {
  if (FUNC_1(VAR_11)) {
   VAR_14 = 1;
   break;
  }
 }


 VAR_15 = VAR_2;
 VAR_15 |= VAR_1;
 VAR_15 |= VAR_0;

 VAR_15 = 0;
 VAR_15 = 0;
 VAR_15 = VAR_7;

 FUNC_0(&VAR_15);

 if (VAR_14)
  return FUNC_3();

 return FUNC_4();
}
