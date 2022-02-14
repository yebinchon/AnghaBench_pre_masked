
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_sec; int tm_min; int tm_hour; int member_0; } ;
struct timeval {long tv_sec; long tv_usec; int member_0; } ;
typedef int strm_value ;
typedef int strm_string ;
typedef int strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct timeval*,int *) ;
 void* FUNC_1 (struct tm*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int,int *,char*,char**,int*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int,long*,long*,int*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct timeval*,int,int *) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int
FUNC_12(strm_stream* VAR_3, int VAR_4, strm_value* VAR_5, strm_value* VAR_6)
{
  struct timeval VAR_7 = {0};
  struct tm VAR_8 = {0};
  time_t VAR_9;
  int VAR_10 = 0;

  switch (VAR_4) {
  case 1:
    {
      char* VAR_11;
      int VAR_12;
      long VAR_13, VAR_14;

      FUNC_3(VAR_3, VAR_4, VAR_5, "s", &VAR_11, &VAR_12);
      if (FUNC_7(VAR_11, VAR_12, &VAR_13, &VAR_14, &VAR_10) < 0) {
        FUNC_4(VAR_3, "bad time format");
        return VAR_0;
      }
      VAR_7.tv_sec = VAR_13;
      VAR_7.tv_usec = VAR_14;
      return FUNC_10(&VAR_7, VAR_10, VAR_6);
    }
    break;
  case 3:
    VAR_8.tm_year = FUNC_8(VAR_5[0]);
    VAR_8.tm_mon = FUNC_8(VAR_5[1])-1;
    VAR_8.tm_mday = FUNC_8(VAR_5[2]);
    VAR_7.tv_sec = FUNC_1(&VAR_8);
    VAR_7.tv_sec += FUNC_11(1);
    VAR_10 = VAR_2;
    return FUNC_10(&VAR_7, VAR_10, VAR_6);
  case 8:
    {
      strm_string VAR_15 = FUNC_9(VAR_5[7]);
      VAR_10 = FUNC_2(FUNC_6(VAR_15), FUNC_5(VAR_15));
      if (VAR_10 == VAR_1) {
        FUNC_4(VAR_3, "wrong timezeone");
        return VAR_0;
      }
    }
  case 7:
    VAR_7.tv_usec = FUNC_8(VAR_5[6])/1000;
  case 6:
    VAR_8.tm_sec = FUNC_8(VAR_5[5]);
  case 5:
    VAR_8.tm_min = FUNC_8(VAR_5[4]);
  case 4:
    VAR_8.tm_year = FUNC_8(VAR_5[0]);
    VAR_8.tm_mon = FUNC_8(VAR_5[1]);
    VAR_8.tm_mday = FUNC_8(VAR_5[2]);
    VAR_8.tm_hour = FUNC_8(VAR_5[3]);
    VAR_9 = FUNC_1(&VAR_8);
    VAR_7.tv_sec = VAR_9;
    if (VAR_4 == 8) {
      VAR_7.tv_sec += FUNC_11(1);
      VAR_7.tv_sec -= VAR_10;
    }
    else {
      VAR_10 = FUNC_11(0);
    }
    return FUNC_10(&VAR_7, VAR_10, VAR_6);
  default:
    FUNC_4(VAR_3, "wrong # of arguments");
    return VAR_0;
  }
  FUNC_0(&VAR_7, ((void*)0));
  return FUNC_10(&VAR_7, VAR_10, VAR_6);
}
