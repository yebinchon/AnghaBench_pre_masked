
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; int member_0; } ;
typedef size_t strm_int ;


 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int*,struct tm*) ;
 int FUNC_3 (double) ;
 char* FUNC_4 (size_t) ;
 int FUNC_5 (char*,char const*,size_t) ;
 int FUNC_6 (struct tm*) ;
 int FUNC_7 (char const*,size_t) ;
 double FUNC_8 (double,double) ;
 long FUNC_9 (char const**,char const*) ;
 char* FUNC_10 (char const*,char*,struct tm*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int) ;

int
FUNC_13(const char* VAR_2, strm_int VAR_3, long* VAR_4, long* VAR_5, int* VAR_6)
{
  const char* VAR_7 = VAR_2;
  const char* VAR_8;
  const char* VAR_9;
  const char* VAR_10;
  struct tm VAR_11 = {0};
  int VAR_12 = FUNC_12(1);
  time_t VAR_13;

  if (VAR_7[VAR_3] != '\0') {
    char* VAR_14 = FUNC_4(VAR_3+1);
    FUNC_5(VAR_14, VAR_2, VAR_3);
    VAR_14[VAR_3] = '\0';
    VAR_7 = (const char*)VAR_14;
  }
  VAR_10 = VAR_7 + VAR_3;
  *VAR_5 = 0;
  VAR_8 = FUNC_10(VAR_7, "%Y.%m.%d", &VAR_11);
  if (VAR_8 == ((void*)0)) {
    VAR_8 = FUNC_10(VAR_7, "%Y-%m-%d", &VAR_11);
  }
  if (VAR_8 == ((void*)0)) {
    VAR_8 = FUNC_10(VAR_7, "%Y/%m/%d", &VAR_11);
  }
  if (VAR_8 == ((void*)0)) {
    VAR_8 = FUNC_10(VAR_7, "%Y%m%d", &VAR_11);
    if (VAR_8 && !(VAR_8[0] == 'T' || VAR_8[0] == ' ')) {
      VAR_8 = ((void*)0);
    }
  }
  if (VAR_8 == ((void*)0)) {
    VAR_8 = FUNC_10(VAR_7, "%b %d %Y", &VAR_11);

    if (VAR_8 && VAR_8[0] == ':') {
      VAR_8 = ((void*)0);
    }
  }
  if (VAR_8 == ((void*)0)) {
    struct tm VAR_15;
    VAR_13 = FUNC_11(((void*)0));
    FUNC_2(&VAR_13, &VAR_15);
    VAR_11.tm_year = VAR_15;
    VAR_8 = FUNC_10(VAR_7, "%b %d", &VAR_11);
  }
  if (VAR_8 == ((void*)0)) goto bad;
  if (VAR_8 == VAR_10) {
    VAR_13 = FUNC_6(&VAR_11);
    VAR_13 += VAR_12;
    *VAR_4 = VAR_13;
    *VAR_5 = 0;
    *VAR_6 = VAR_1;
    goto good;
  }

  switch (*VAR_8++) {
  case 'T':
    break;
  case ' ':
    while (*VAR_8 == ' ')
      VAR_8++;
    break;
  default:
    goto bad;
  }

  VAR_9 = FUNC_10(VAR_8, "%H:%M:%S", &VAR_11);
  if (VAR_9 == ((void*)0)) {
    VAR_9 = FUNC_10(VAR_8, "%H%M%S", &VAR_11);
  }
  if (VAR_9 == ((void*)0)) {
    VAR_9 = FUNC_10(VAR_8, "%H:%M", &VAR_11);
    if (VAR_9 == ((void*)0))
      goto bad;
  }
  VAR_8 = VAR_9;
  VAR_13 = FUNC_6(&VAR_11);
  if (VAR_8[0] == '.') {
    VAR_8++;
    long VAR_16 = FUNC_9(&VAR_8, VAR_10);
    if (VAR_16 < 0) goto bad;
    if (VAR_16 > 0) {
      double VAR_17 = FUNC_0(FUNC_3((double)VAR_16));
      VAR_17 = ((double)VAR_16 / FUNC_8(10.0, VAR_17));
      *VAR_5 = VAR_17 * 1000000;
    }
  }
  if (VAR_8[0] == 'Z') {
    VAR_13 += VAR_12;
    *VAR_6 = 0;
  }
  else if (VAR_8 == VAR_10) {
    *VAR_6 = VAR_12;
  }
  else {
    int VAR_18;

    switch (VAR_8[0]) {
    case '+':
    case '-':
      VAR_18 = FUNC_7(VAR_8, (strm_int)(VAR_10-VAR_8));
      if (VAR_18 == VAR_0) goto bad;
      VAR_13 += VAR_12;
      VAR_13 -= VAR_18;
      *VAR_6 = VAR_18;
      break;
    default:
      goto bad;
    }
  }
  *VAR_4 = VAR_13;
 good:
  if (VAR_7 != VAR_2) FUNC_1((char*)VAR_7);
  return 0;
 bad:
  if (VAR_7 != VAR_2) FUNC_1((char*)VAR_7);
  return -1;
}
