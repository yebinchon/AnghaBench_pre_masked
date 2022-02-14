
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long time_t ;
struct tm {int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_isdst; int tm_year; } ;
typedef long longest_int ;


 int FUNC_0 (char*) ;
 char* VAR_0 ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (char*,char const* const,size_t) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct tm*,int ,int) ;
 long FUNC_9 (struct tm*) ;
 int FUNC_10 (char*,char*,long*) ;
 char* FUNC_11 (char*,char*) ;
 scalar_t__ FUNC_12 (char*,int *,int ) ;

__attribute__((used)) static int
FUNC_13( char *const VAR_1,
  const char *const VAR_2,
  size_t VAR_3,
  char *VAR_4,
  size_t VAR_5,
  char *VAR_6,
  size_t VAR_7,
  int *VAR_8,
  longest_int *VAR_9,
  time_t *VAR_10,
  time_t VAR_11,
  int VAR_12,
  int *VAR_13)
{
 char *VAR_14;
 int VAR_15 = 0, VAR_16 = 0, VAR_17 = 0, VAR_18 = 0, VAR_19 = 0;
 char *VAR_20, *VAR_21, *VAR_22, *VAR_23, *VAR_24;
 char *VAR_25, *VAR_26 = ((void*)0);
 char *VAR_27;
 char *VAR_28;
 struct tm VAR_29;
 for (VAR_14 = VAR_1; *VAR_14 != '\0'; VAR_14++) {
  if ( (FUNC_4((int) *VAR_14))
   && (FUNC_6((int) VAR_14[1]))
   && (FUNC_7((int) VAR_14[2]))
   && (FUNC_5((int) VAR_14[3]))

   && (FUNC_6((int) VAR_14[5]))
   && (
((FUNC_4((int) VAR_14[6])) && (FUNC_4((int) VAR_14[7])))
|| ((FUNC_4((int) VAR_14[6])) && (FUNC_6((int) VAR_14[7])))
|| ((FUNC_6((int) VAR_14[6])) && (FUNC_4((int) VAR_14[7])))
   )
   && (FUNC_6((int) VAR_14[8]))
  ) {
   VAR_20 = VAR_14 + 2;
   VAR_21 = VAR_14 + 6;
   if ( ((FUNC_6((int) VAR_14[9])) || (FUNC_4((int) VAR_14[9])))
    && (FUNC_4((int) VAR_14[10]))
    && (FUNC_4((int) VAR_14[11]))
    && (FUNC_4((int) VAR_14[12]))
    && ((FUNC_4((int) VAR_14[13])) || (FUNC_6((int) VAR_14[13])))
   ) {

    VAR_24 = VAR_14 + 9;
    if (FUNC_6((int) *VAR_24))
     VAR_24++;
    VAR_22 = ((void*)0);
    VAR_23 = ((void*)0);
    VAR_26 = VAR_14 + 15;
    VAR_14[1] = '\0';
    VAR_14[5] = '\0';
    VAR_14[8] = '\0';
    VAR_14[14] = '\0';
    VAR_15 = FUNC_0(VAR_20);
    VAR_16 = FUNC_3(VAR_21);
    VAR_17 = 23;
    VAR_18 = 59;
    VAR_19 = FUNC_3(VAR_24);

    VAR_28 = VAR_14;
    while (FUNC_4((int) *VAR_28))
     VAR_28--;
    while (FUNC_6((int) *VAR_28))
     VAR_28--;
    *VAR_13 = (int) (VAR_28 - VAR_1) + 1;
    break;
   } else if (



    (FUNC_4((int) VAR_14[10]))
    && (VAR_14[11] == ':')
    && (FUNC_4((int) VAR_14[12]))
    && (FUNC_4((int) VAR_14[13]))
   ) {

    VAR_24 = ((void*)0);
    VAR_22 = VAR_14 + 9;
    VAR_23 = VAR_14 + 12;
    VAR_26 = VAR_14 + 15;
    VAR_14[1] = '\0';
    VAR_14[5] = '\0';
    VAR_14[8] = '\0';
    VAR_14[11] = '\0';
    VAR_14[14] = '\0';
    VAR_15 = FUNC_0(VAR_20);
    VAR_16 = FUNC_3(VAR_21);
    VAR_17 = FUNC_3(VAR_22);
    VAR_18 = FUNC_3(VAR_23);
    VAR_19 = 0;

    VAR_28 = VAR_14;
    while (FUNC_4((int) *VAR_28))
     VAR_28--;
    while (FUNC_6((int) *VAR_28))
     VAR_28--;
    *VAR_13 = (int) (VAR_28 - VAR_1) + 1;
    break;
   }
  }
 }

 if (*VAR_14 == '\0')
  return (-1);

 VAR_25 = FUNC_11(VAR_26, " -> ");
 if (VAR_25 != ((void*)0)) {
  *VAR_25 = '\0';
  VAR_25 += 4;
  (void) FUNC_2(VAR_6, VAR_25, VAR_7);
 } else {
  *VAR_6 = '\0';
 }

 if (VAR_3 == 0) {
  (void) FUNC_2(VAR_4, VAR_26, VAR_5);
 } else {
  (void) FUNC_2(VAR_4, VAR_2, VAR_5);
  (void) FUNC_1(VAR_4, VAR_26, VAR_5);
 }

 if (VAR_10 != ((void*)0)) {
  (void) FUNC_8(&VAR_29, 0, sizeof(struct tm));
  VAR_29.tm_mon = VAR_15;
  VAR_29.tm_mday = VAR_16;
  VAR_29.tm_hour = VAR_17;
  VAR_29.tm_min = VAR_18;
  VAR_29.tm_isdst = -1;
  if (VAR_19 == 0) {






   VAR_29.tm_year = VAR_12 - 1900;
   *VAR_10 = FUNC_9(&VAR_29);
   if (*VAR_10 == (time_t) -1) {

   } else if (*VAR_10 > (VAR_11 + (15552000L + 86400L))) {
    --VAR_29.tm_year;
    *VAR_10 = FUNC_9(&VAR_29);
   } else if (*VAR_10 < (VAR_11 - (15552000L + 86400L))) {
    ++VAR_29.tm_year;
    *VAR_10 = FUNC_9(&VAR_29);
   }
  } else {
   VAR_29.tm_year = VAR_19 - 1900;
   *VAR_10 = FUNC_9(&VAR_29);
  }
 }

 if (VAR_9 != ((void*)0)) {
  while ((VAR_14 > VAR_1) && (FUNC_4((int) *VAR_14)))
   --VAR_14;
  VAR_27 = VAR_14 + 1;





  {
   long VAR_30 = 0L;

   (void) FUNC_10(VAR_27, "%ld", &VAR_30);
   *VAR_9 = (longest_int) VAR_30;
  }

 }

 switch (VAR_1[0]) {
  case 'd':
  case 'l':
   *VAR_8 = (int) VAR_1[0];
   break;
  case 'b':
  case 'c':
  case 's':
   *VAR_8 = (int) VAR_1[0];
   return (-1);
  default:
   *VAR_8 = '-';
 }

 return (0);
}
