
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_min; int tm_sec; void* tm_hour; } ;
typedef scalar_t__ fsec_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (char*,char**,int) ;

int
FUNC_1(char *VAR_2, int *VAR_3, struct tm *VAR_4, fsec_t *VAR_5)
{
 char *VAR_6;

 *VAR_3 = VAR_0;

 VAR_4->tm_hour = FUNC_0(VAR_2, &VAR_6, 10);
 if (*VAR_6 != ':')
  return -1;
 VAR_2 = VAR_6 + 1;
 VAR_4->tm_min = FUNC_0(VAR_2, &VAR_6, 10);
 if (*VAR_6 == '\0')
 {
  VAR_4->tm_sec = 0;
  *VAR_5 = 0;
 }
 else if (*VAR_6 != ':')
  return -1;
 else
 {
  VAR_2 = VAR_6 + 1;
  VAR_4->tm_sec = FUNC_0(VAR_2, &VAR_6, 10);
  if (*VAR_6 == '\0')
   *VAR_5 = 0;
  else if (*VAR_6 == '.')
  {
   char VAR_7[7];
   int VAR_8;

   VAR_6++;
   for (VAR_8 = 0; VAR_8 < 6; VAR_8++)
    VAR_7[VAR_8] = *VAR_6 != '\0' ? *VAR_6++ : '0';
   VAR_7[VAR_8] = '\0';
   *VAR_5 = FUNC_0(VAR_7, &VAR_6, 10);
   if (*VAR_6 != '\0')
    return -1;
  }
  else
   return -1;
 }


 if (VAR_4->tm_hour < 0 || VAR_4->tm_min < 0 || VAR_4->tm_min > 59 ||
  VAR_4->tm_sec < 0 || VAR_4->tm_sec > 59 || *VAR_5 >= VAR_1)
  return -1;

 return 0;
}
