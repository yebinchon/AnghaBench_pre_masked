
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_mon; int tm_year; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct stat {int st_mtime; scalar_t__ st_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 scalar_t__ VAR_3 ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const**) ;
 struct tm* FUNC_6 (int *) ;
 int FUNC_7 (char const) ;
 scalar_t__ FUNC_8 (char) ;
 int * VAR_4 ;
 int FUNC_9 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 char** VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char*,char const*,char const*,char const*,int) ;
 char* VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_13 (char*,char*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_14 (char const*,struct stat*) ;
 int VAR_12 ;
 int FUNC_15 (int *,char*) ;
 size_t FUNC_16 (int *) ;
 int VAR_13 ;

int FUNC_17(int VAR_14, const char *VAR_15[], int VAR_16, const char *VAR_17)
{
 int VAR_18 = 0;
 const char *VAR_19, *VAR_20;

 if (VAR_14 == 2) {
  VAR_14++;
  VAR_15[2] = VAR_15[1];
  VAR_18++;
 }
 if (VAR_14 < 2) {
  (void) FUNC_15(VAR_4, " ");
  FUNC_11("(remote-file) ");
  (void) FUNC_3(VAR_12);
  (void) FUNC_4(&VAR_4[FUNC_16(VAR_4)]);
  FUNC_9();
  VAR_14 = VAR_6;
  VAR_15 = VAR_7;
 }
 if (VAR_14 < 2) {
usage:
  FUNC_11("usage: %s remote-file [ local-file ]\n", VAR_15[0]);
  (void) FUNC_3(VAR_12);
  VAR_2 = -1;
  return (0);
 }
 if (VAR_14 < 3) {
  (void) FUNC_15(VAR_4, " ");
  FUNC_11("(local-file) ");
  (void) FUNC_3(VAR_12);
  (void) FUNC_4(&VAR_4[FUNC_16(VAR_4)]);
  FUNC_9();
  VAR_14 = VAR_6;
  VAR_15 = VAR_7;
 }
 if (VAR_14 < 3)
  goto usage;
 VAR_19 = VAR_15[1];
 VAR_20 = VAR_15[2];
 if (!FUNC_5(&VAR_15[2])) {
  VAR_2 = -1;
  return (0);
 }
 if (VAR_18 && VAR_8) {
  const char *VAR_21 = VAR_15[1];
        char *VAR_22, VAR_23[VAR_1];

  while (*VAR_21 && !FUNC_7(*VAR_21)) {
   VAR_21++;
  }
  if (!*VAR_21) {
   VAR_21 = VAR_15[2];
   VAR_22 = VAR_23;
   while ((*VAR_22 = *VAR_21)) {
    if (FUNC_8(*VAR_22)) {
     *VAR_22 = 'a' + *VAR_22 - 'A';
    }
    VAR_21++;
    VAR_22++;
   }
   VAR_15[2] = VAR_23;
  }
 }
 if (VAR_18 && VAR_9)
  VAR_15[2] = FUNC_2(VAR_15[2]);
 if (VAR_18 && VAR_5)
  VAR_15[2] = FUNC_1(VAR_15[2]);
 if (VAR_16) {
  struct stat VAR_24;
  int VAR_25;

  VAR_25 = FUNC_14(VAR_15[2], &VAR_24);
  if (VAR_16 == 1) {
   if (VAR_25 < 0) {
    FUNC_10(VAR_15[2]);
    return (0);
   }
   VAR_11 = VAR_24.st_size;
  } else {
   if (VAR_25 == 0) {
    int VAR_26;

    VAR_26 = VAR_13;
    if (VAR_3 == 0)
     VAR_13 = -1;
    if (FUNC_0("MDTM %s", VAR_15[1]) == VAR_0) {
     int VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
     struct tm *VAR_33;
     VAR_13 = VAR_26;
     FUNC_13(VAR_10,
         "%*s %04d%02d%02d%02d%02d%02d",
         &VAR_27, &VAR_28, &VAR_29, &VAR_30, &VAR_31, &VAR_32);
     VAR_33 = FUNC_6(&VAR_24.st_mtime);
     VAR_33->tm_mon++;
     if (VAR_33->tm_year > VAR_27%100)
      return (1);
     else if (VAR_33->tm_year == VAR_27%100) {
      if (VAR_33->tm_mon > VAR_28)
       return (1);
     } else if (VAR_33->tm_mon == VAR_28) {
      if (VAR_33->tm_mday > VAR_29)
       return (1);
     } else if (VAR_33->tm_mday == VAR_29) {
      if (VAR_33->tm_hour > VAR_30)
       return (1);
     } else if (VAR_33->tm_hour == VAR_30) {
      if (VAR_33->tm_min > VAR_31)
       return (1);
     } else if (VAR_33->tm_min == VAR_31) {
      if (VAR_33->tm_sec > VAR_32)
       return (1);
     }
    } else {
     FUNC_11("%s\n", VAR_10);
     (void) FUNC_3(VAR_12);
     VAR_13 = VAR_26;
     return (0);
    }
   }
  }
 }

 FUNC_12("RETR", VAR_15[2], VAR_15[1], VAR_17,
     VAR_15[1] != VAR_19 || VAR_15[2] != VAR_20);
 VAR_11 = 0;
 return (0);
}
