
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_tm {int tm_hour; int tm_min; int tm_sec; } ;
typedef scalar_t__ fsec_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,scalar_t__*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* FUNC_3 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_4(char *VAR_10, int VAR_11, int VAR_12,
     int *VAR_13, struct pg_tm *VAR_14, fsec_t *VAR_15)
{
 char *VAR_16;
 int VAR_17;

 *VAR_13 = VAR_2;

 VAR_9 = 0;
 VAR_14->tm_hour = FUNC_3(VAR_10, &VAR_16, 10);
 if (VAR_9 == VAR_3)
  return VAR_1;
 if (*VAR_16 != ':')
  return VAR_0;
 VAR_9 = 0;
 VAR_14->tm_min = FUNC_3(VAR_16 + 1, &VAR_16, 10);
 if (VAR_9 == VAR_3)
  return VAR_1;
 if (*VAR_16 == '\0')
 {
  VAR_14->tm_sec = 0;
  *VAR_15 = 0;

  if (VAR_12 == (FUNC_1(VAR_5) | FUNC_1(VAR_6)))
  {
   VAR_14->tm_sec = VAR_14->tm_min;
   VAR_14->tm_min = VAR_14->tm_hour;
   VAR_14->tm_hour = 0;
  }
 }
 else if (*VAR_16 == '.')
 {

  VAR_17 = FUNC_2(VAR_16, VAR_15);
  if (VAR_17)
   return VAR_17;
  VAR_14->tm_sec = VAR_14->tm_min;
  VAR_14->tm_min = VAR_14->tm_hour;
  VAR_14->tm_hour = 0;
 }
 else if (*VAR_16 == ':')
 {
  VAR_9 = 0;
  VAR_14->tm_sec = FUNC_3(VAR_16 + 1, &VAR_16, 10);
  if (VAR_9 == VAR_3)
   return VAR_1;
  if (*VAR_16 == '\0')
   *VAR_15 = 0;
  else if (*VAR_16 == '.')
  {
   VAR_17 = FUNC_2(VAR_16, VAR_15);
   if (VAR_17)
    return VAR_17;
  }
  else
   return VAR_0;
 }
 else
  return VAR_0;


 if (VAR_14->tm_hour < 0 || VAR_14->tm_min < 0 || VAR_14->tm_min > VAR_4 - 1 ||
  VAR_14->tm_sec < 0 || VAR_14->tm_sec > VAR_7 ||
  *VAR_15 < FUNC_0(0) ||
  *VAR_15 > VAR_8)
  return VAR_1;

 return 0;
}
