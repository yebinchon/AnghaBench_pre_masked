
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_tm {int tm_sec; int tm_min; int tm_hour; int tm_isdst; int tm_mday; int tm_mon; int tm_year; } ;
typedef int pg_tz ;
typedef int pg_time_t ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int*,long*,int*,int*,long*,int*,int *) ;

__attribute__((used)) static int
FUNC_3(struct pg_tm *VAR_4, pg_tz *VAR_5, pg_time_t *VAR_6)
{
 int VAR_7,
    VAR_8;
 pg_time_t VAR_9,
    VAR_10,
    VAR_11,
    VAR_12,
    VAR_13,
    VAR_14;
 long int VAR_15,
    VAR_16;
 int VAR_17,
    VAR_18;
 int VAR_19;







 if (!FUNC_0(VAR_4->tm_year, VAR_4->tm_mon, VAR_4->tm_mday))
  goto overflow;
 VAR_7 = FUNC_1(VAR_4->tm_year, VAR_4->tm_mon, VAR_4->tm_mday) - VAR_3;

 VAR_9 = ((pg_time_t) VAR_7) * VAR_1;
 if (VAR_9 / VAR_1 != VAR_7)
  goto overflow;
 VAR_8 = VAR_4->tm_sec + (VAR_4->tm_min + VAR_4->tm_hour * VAR_0) * VAR_2;
 VAR_10 = VAR_9 + VAR_8;

 if (VAR_10 < 0 && VAR_9 > 0)
  goto overflow;







 VAR_11 = VAR_10 - VAR_1;
 if (VAR_10 < 0 && VAR_11 > 0)
  goto overflow;

 VAR_19 = FUNC_2(&VAR_11,
          &VAR_15, &VAR_17,
          &VAR_12,
          &VAR_16, &VAR_18,
          VAR_5);
 if (VAR_19 < 0)
  goto overflow;

 if (VAR_19 == 0)
 {

  VAR_4->tm_isdst = VAR_17;
  *VAR_6 = VAR_10 - VAR_15;
  return -(int) VAR_15;
 }




 VAR_13 = VAR_10 - VAR_15;
 if ((VAR_15 > 0 &&
   VAR_10 < 0 && VAR_13 > 0) ||
  (VAR_15 <= 0 &&
   VAR_10 > 0 && VAR_13 < 0))
  goto overflow;
 VAR_14 = VAR_10 - VAR_16;
 if ((VAR_16 > 0 &&
   VAR_10 < 0 && VAR_14 > 0) ||
  (VAR_16 <= 0 &&
   VAR_10 > 0 && VAR_14 < 0))
  goto overflow;






 if (VAR_13 < VAR_12 && VAR_14 < VAR_12)
 {
  VAR_4->tm_isdst = VAR_17;
  *VAR_6 = VAR_13;
  return -(int) VAR_15;
 }
 if (VAR_13 > VAR_12 && VAR_14 >= VAR_12)
 {
  VAR_4->tm_isdst = VAR_18;
  *VAR_6 = VAR_14;
  return -(int) VAR_16;
 }
 if (VAR_13 > VAR_14)
 {
  VAR_4->tm_isdst = VAR_17;
  *VAR_6 = VAR_13;
  return -(int) VAR_15;
 }
 VAR_4->tm_isdst = VAR_18;
 *VAR_6 = VAR_14;
 return -(int) VAR_16;

overflow:

 VAR_4->tm_isdst = 0;
 *VAR_6 = 0;
 return 0;
}
