
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_tm {int tm_isdst; int tm_gmtoff; char* tm_zone; int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
typedef int pg_tz ;
typedef scalar_t__ pg_time_t ;
typedef scalar_t__ fsec_t ;
typedef scalar_t__ Timestamp ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (scalar_t__,int *,int *,int *,scalar_t__*) ;
 int FUNC_3 (int,scalar_t__*,scalar_t__*,int *) ;
 struct pg_tm* FUNC_4 (scalar_t__*,int *) ;
 int * VAR_6 ;

int
FUNC_5(Timestamp VAR_7, int *VAR_8, struct pg_tm *VAR_9, fsec_t *VAR_10, const char **VAR_11, pg_tz *VAR_12)
{
 Timestamp VAR_13;
 Timestamp VAR_14;
 pg_time_t VAR_15;


 if (VAR_12 == ((void*)0))
  VAR_12 = VAR_6;

 VAR_14 = VAR_7;
 FUNC_1(VAR_14, VAR_13, VAR_4);

 if (VAR_14 < FUNC_0(0))
 {
  VAR_14 += VAR_4;
  VAR_13 -= 1;
 }


 VAR_13 += VAR_1;


 if (VAR_13 < 0 || VAR_13 > (Timestamp) VAR_0)
  return -1;

 FUNC_3((int) VAR_13, &VAR_9->tm_year, &VAR_9->tm_mon, &VAR_9->tm_mday);
 FUNC_2(VAR_14, &VAR_9->tm_hour, &VAR_9->tm_min, &VAR_9->tm_sec, VAR_10);


 if (VAR_8 == ((void*)0))
 {
  VAR_9->tm_isdst = -1;
  VAR_9->tm_gmtoff = 0;
  VAR_9->tm_zone = ((void*)0);
  if (VAR_11 != ((void*)0))
   *VAR_11 = ((void*)0);
  return 0;
 }
 VAR_7 = (VAR_7 - *VAR_10) / VAR_5 +
  (VAR_1 - VAR_3) * VAR_2;
 VAR_15 = (pg_time_t) VAR_7;
 if ((Timestamp) VAR_15 == VAR_7)
 {
  struct pg_tm *VAR_16 = FUNC_4(&VAR_15, VAR_12);

  VAR_9->tm_year = VAR_16->tm_year + 1900;
  VAR_9->tm_mon = VAR_16->tm_mon + 1;
  VAR_9->tm_mday = VAR_16->tm_mday;
  VAR_9->tm_hour = VAR_16->tm_hour;
  VAR_9->tm_min = VAR_16->tm_min;
  VAR_9->tm_sec = VAR_16->tm_sec;
  VAR_9->tm_isdst = VAR_16->tm_isdst;
  VAR_9->tm_gmtoff = VAR_16->tm_gmtoff;
  VAR_9->tm_zone = VAR_16->tm_zone;
  *VAR_8 = -VAR_9->tm_gmtoff;
  if (VAR_11 != ((void*)0))
   *VAR_11 = VAR_9->tm_zone;
 }
 else
 {



  *VAR_8 = 0;

  VAR_9->tm_isdst = -1;
  VAR_9->tm_gmtoff = 0;
  VAR_9->tm_zone = ((void*)0);
  if (VAR_11 != ((void*)0))
   *VAR_11 = ((void*)0);
 }

 return 0;
}
