
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_isdst; scalar_t__ tm_mon; int tm_year; int tm_hour; void* tm_min; void* tm_mday; } ;
typedef long longest_int ;


 char* VAR_0 ;
 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char*,char const* const,size_t) ;
 void* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char) ;
 int FUNC_6 (char*,char*,scalar_t__) ;
 int FUNC_7 (struct tm*,int ,int) ;
 int FUNC_8 (struct tm*) ;
 int FUNC_9 (char*,char*,long*) ;
 scalar_t__ FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,int *,int ) ;

__attribute__((used)) static int
FUNC_12( char *const VAR_1,
  const char *const VAR_2,
  size_t VAR_3,
  char *VAR_4,
  size_t VAR_5,
  int *VAR_6,
  longest_int *VAR_7,
  time_t *VAR_8)
{
 char *VAR_9;
 int VAR_10, VAR_11;
 char *VAR_12;
 char *VAR_13;
 struct tm VAR_14;
 VAR_9 = VAR_1;
 if (
  FUNC_3((int) VAR_9[0])
  && FUNC_3((int) VAR_9[1])
  && FUNC_4((int) VAR_9[2])
  && FUNC_3((int) VAR_9[3])
  && FUNC_3((int) VAR_9[4])
  && FUNC_4((int) VAR_9[5])
  && FUNC_3((int) VAR_9[6])
  && FUNC_3((int) VAR_9[7])
 ) {
  (void) FUNC_7(&VAR_14, 0, sizeof(struct tm));
  VAR_14.tm_isdst = -1;
  VAR_9[2] = '\0';
  VAR_14.tm_mon = FUNC_2(VAR_9 + 0);
  if (VAR_14.tm_mon > 0)
   VAR_14.tm_mon -= 1;
  VAR_9[5] = '\0';
  VAR_14.tm_mday = FUNC_2(VAR_9 + 3);
  if ((FUNC_3((int) VAR_9[8])) && (FUNC_3((int) VAR_9[9]))) {

   VAR_9[10] = '\0';
   VAR_11 = FUNC_2(VAR_9 + 6);
   if (VAR_11 > 1900)
    VAR_11 -= 1900;
   VAR_14.tm_year = VAR_11;
   VAR_9 += 11;
  } else {

   VAR_9[8] = '\0';
   VAR_11 = FUNC_2(VAR_9 + 6);
   if (VAR_11 < 98)
    VAR_11 += 100;
   VAR_14.tm_year = VAR_11;
   VAR_9 += 9;
  }

  for (;;) {
   if (*VAR_9 == '\0')
    return (-1);
   if (FUNC_3(*VAR_9))
    break;
   VAR_9++;
  }

  VAR_9[2] = '\0';
  VAR_10 = FUNC_2(VAR_9);
  if (((VAR_9[5] == 'P') || (VAR_9[5] == 'p')) && (VAR_10 < 12))
   VAR_10 += 12;
  else if (((VAR_9[5] == 'A') || (VAR_9[5] == 'a')) && (VAR_10 == 12))
   VAR_10 -= 12;
  VAR_14.tm_hour = VAR_10;
  VAR_9[5] = '\0';
  VAR_14.tm_min = FUNC_2(VAR_9 + 3);
  *VAR_8 = FUNC_8(&VAR_14);
  if (*VAR_6 == (time_t) -1)
   return (-1);

  VAR_9 += 6;
  *VAR_6 = '-';
  for (;;) {
   if (*VAR_9 == '\0')
    return (-1);
   if ((*VAR_9 == '<') && (VAR_9[1] == 'D')) {

    *VAR_6 = 'd';
    VAR_9 += 5;
    break;
   } else if ((*VAR_9 == '<') && (VAR_9[1] == 'J')) {







    *VAR_6 = 'd';
    VAR_9 += 10;
    break;
   } else if (FUNC_3(*VAR_9)) {
    break;
   } else {
    VAR_9++;
   }
  }

  VAR_13 = VAR_9;
  for (;;) {
   if (*VAR_9 == '\0')
    return (-1);






   if (!FUNC_3(*VAR_9)) {
    *VAR_9++ = '\0';
    break;
   }
   VAR_9++;
  }

  if (VAR_7 != ((void*)0)) {
   *VAR_7 = (longest_int) 0;
   if (*VAR_6 != 'd') {
    long VAR_15 = 0L;

    (void) FUNC_9(VAR_13, "%ld", &VAR_15);
    *VAR_7 = (longest_int) VAR_15;
   }

  }

  for (;;) {
   if (*VAR_9 == '\0')
    return (-1);
   if (!FUNC_5(*VAR_9)) {
    break;
   }
   VAR_9++;
  }

  VAR_12 = VAR_9;
  if (VAR_3 == 0) {
   (void) FUNC_1(VAR_4, VAR_12, VAR_5);
  } else {
   (void) FUNC_1(VAR_4, VAR_2, VAR_5);
   (void) FUNC_0(VAR_4, VAR_12, VAR_5);
  }

  return (0);
 }
 return (-1);
}
