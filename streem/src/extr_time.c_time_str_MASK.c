
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tm {scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct TYPE_2__ {scalar_t__ tv_usec; int tv_sec; } ;
struct strm_time {int utc_offset; TYPE_1__ tv; } ;
typedef int strm_value ;
typedef int strm_stream ;
typedef int strm_int ;
typedef int sbuf ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct strm_time* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,struct tm*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int,char*,char,...) ;
 size_t FUNC_4 (char*,int,char*,struct tm*) ;
 size_t FUNC_5 (char*) ;
 int FUNC_6 (int *,int,int *,char*,int *,char**,int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (char*,size_t) ;
 int FUNC_9 (char*,char*,size_t) ;

__attribute__((used)) static int
FUNC_10(strm_stream* VAR_4, int VAR_5, strm_value* VAR_6, strm_value* VAR_7)
{
  struct strm_time *VAR_8;
  struct tm VAR_9;
  int VAR_10;
  char VAR_11[256];
  char *VAR_12;
  size_t VAR_13;

  if (VAR_5 == 1) {
    VAR_8 = FUNC_0(VAR_6[0]);
    VAR_10 = VAR_8->utc_offset;
  }
  else {
    strm_value VAR_14;
    char* VAR_15;
    strm_int VAR_16;

    FUNC_6(VAR_4, VAR_5, VAR_6, "v|s", &VAR_14, &VAR_15, &VAR_16);
    VAR_8 = FUNC_0(VAR_14);
    VAR_10 = FUNC_2(VAR_15, VAR_16);
    if (VAR_10 == VAR_2) {
      FUNC_7(VAR_4, "wrong timezeone");
      return VAR_0;
    }
  }
  if (VAR_10 == VAR_3) {
    FUNC_1(VAR_8->tv.tv_sec, 0, &VAR_9);
    if (VAR_9.tm_hour == 0 && VAR_9.tm_min == 0 && VAR_9.tm_sec == 0) {
      VAR_13 = FUNC_4(VAR_11, sizeof(VAR_11), "%Y.%m.%d", &VAR_9);
      *VAR_7 = FUNC_8(VAR_11, VAR_13);
      return VAR_1;
    }
    VAR_10 = 0;
  }
  FUNC_1(VAR_8->tv.tv_sec, VAR_10, &VAR_9);
  VAR_13 = FUNC_4(VAR_11, sizeof(VAR_11), "%Y.%m.%dT%H:%M:%S", &VAR_9);
  VAR_12 = VAR_11+VAR_13;
  if (VAR_8->tv.tv_usec != 0) {
    char VAR_17[20];
    double VAR_18 = VAR_8->tv.tv_usec / 1000000.0;
    char *VAR_19;
    size_t VAR_20;

    FUNC_3(VAR_17, sizeof(VAR_17), "%.3f", VAR_18);
    VAR_19 = VAR_17+1;
    VAR_20 = FUNC_5(VAR_19);
    FUNC_9(VAR_12, VAR_19, VAR_20);
    VAR_12 += VAR_20;
  }
  if (VAR_10 == 0) {
    VAR_12[0] = 'Z';
    VAR_12[1] = '\0';
  }
  else {
    int VAR_21 = VAR_10 / 60;
    char VAR_22 = VAR_21 > 0 ? '+' : '-';

    if (VAR_21 < 0) VAR_21 = -VAR_21;
    FUNC_3(VAR_12, sizeof(VAR_11)-(VAR_12-VAR_11), "%c%02d:%02d", VAR_22, VAR_21/60, VAR_21%60);
  }
  *VAR_7 = FUNC_8(VAR_11, FUNC_5(VAR_11));
  return VAR_1;
}
