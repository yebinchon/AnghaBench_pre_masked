
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_year; double tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
typedef int fsec_t ;


 int FUNC_0 (double,struct tm*,int *,int) ;
 int FUNC_1 (double,struct tm*,int *,int) ;
 int FUNC_2 (struct tm*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char**,int*,double*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(char *VAR_6,
       int *VAR_7, struct tm *VAR_8, fsec_t *VAR_9)
{
 bool VAR_10 = 1;
 bool VAR_11 = 0;

 *VAR_7 = VAR_2;
 FUNC_2(VAR_8, VAR_9);

 if (FUNC_5(VAR_6) < 2 || VAR_6[0] != 'P')
  return VAR_1;

 VAR_6++;
 while (*VAR_6)
 {
  char *VAR_12;
  int VAR_13;
  double VAR_14;
  char VAR_15;
  int VAR_16;

  if (*VAR_6 == 'T')
  {
   VAR_10 = 0;
   VAR_11 = 0;
   VAR_6++;
   continue;
  }

  VAR_12 = VAR_6;
  VAR_16 = FUNC_4(VAR_6, &VAR_6, &VAR_13, &VAR_14);
  if (VAR_16)
   return VAR_16;





  VAR_15 = *VAR_6++;

  if (VAR_10)
  {
   switch (VAR_15)
   {
    case 'Y':
     VAR_8->tm_year += VAR_13;
     VAR_8->tm_mon += (VAR_14 * 12);
     break;
    case 'M':
     VAR_8->tm_mon += VAR_13;
     FUNC_0(VAR_14, VAR_8, VAR_9, VAR_0);
     break;
    case 'W':
     VAR_8->tm_mday += VAR_13 * 7;
     FUNC_0(VAR_14, VAR_8, VAR_9, 7);
     break;
    case 'D':
     VAR_8->tm_mday += VAR_13;
     FUNC_1(VAR_14, VAR_8, VAR_9, VAR_3);
     break;
    case 'T':
    case '\0':
     if (FUNC_3(VAR_12) == 8 && !VAR_11)
     {
      VAR_8->tm_year += VAR_13 / 10000;
      VAR_8->tm_mon += (VAR_13 / 100) % 100;
      VAR_8->tm_mday += VAR_13 % 100;
      FUNC_1(VAR_14, VAR_8, VAR_9, VAR_3);
      if (VAR_15 == '\0')
       return 0;
      VAR_10 = 0;
      VAR_11 = 0;
      continue;
     }


    case '-':

     if (VAR_11)
      return VAR_1;

     VAR_8->tm_year += VAR_13;
     VAR_8->tm_mon += (VAR_14 * 12);
     if (VAR_15 == '\0')
      return 0;
     if (VAR_15 == 'T')
     {
      VAR_10 = 0;
      VAR_11 = 0;
      continue;
     }

     VAR_16 = FUNC_4(VAR_6, &VAR_6, &VAR_13, &VAR_14);
     if (VAR_16)
      return VAR_16;
     VAR_8->tm_mon += VAR_13;
     FUNC_0(VAR_14, VAR_8, VAR_9, VAR_0);
     if (*VAR_6 == '\0')
      return 0;
     if (*VAR_6 == 'T')
     {
      VAR_10 = 0;
      VAR_11 = 0;
      continue;
     }
     if (*VAR_6 != '-')
      return VAR_1;
     VAR_6++;

     VAR_16 = FUNC_4(VAR_6, &VAR_6, &VAR_13, &VAR_14);
     if (VAR_16)
      return VAR_16;
     VAR_8->tm_mday += VAR_13;
     FUNC_1(VAR_14, VAR_8, VAR_9, VAR_3);
     if (*VAR_6 == '\0')
      return 0;
     if (*VAR_6 == 'T')
     {
      VAR_10 = 0;
      VAR_11 = 0;
      continue;
     }
     return VAR_1;
    default:

     return VAR_1;
   }
  }
  else
  {
   switch (VAR_15)
   {
    case 'H':
     VAR_8->tm_hour += VAR_13;
     FUNC_1(VAR_14, VAR_8, VAR_9, VAR_4);
     break;
    case 'M':
     VAR_8->tm_min += VAR_13;
     FUNC_1(VAR_14, VAR_8, VAR_9, VAR_5);
     break;
    case 'S':
     VAR_8->tm_sec += VAR_13;
     FUNC_1(VAR_14, VAR_8, VAR_9, 1);
     break;
    case '\0':
     if (FUNC_3(VAR_12) == 6 && !VAR_11)
     {
      VAR_8->tm_hour += VAR_13 / 10000;
      VAR_8->tm_min += (VAR_13 / 100) % 100;
      VAR_8->tm_sec += VAR_13 % 100;
      FUNC_1(VAR_14, VAR_8, VAR_9, 1);
      return 0;
     }


    case ':':

     if (VAR_11)
      return VAR_1;

     VAR_8->tm_hour += VAR_13;
     FUNC_1(VAR_14, VAR_8, VAR_9, VAR_4);
     if (VAR_15 == '\0')
      return 0;

     VAR_16 = FUNC_4(VAR_6, &VAR_6, &VAR_13, &VAR_14);
     if (VAR_16)
      return VAR_16;
     VAR_8->tm_min += VAR_13;
     FUNC_1(VAR_14, VAR_8, VAR_9, VAR_5);
     if (*VAR_6 == '\0')
      return 0;
     if (*VAR_6 != ':')
      return VAR_1;
     VAR_6++;

     VAR_16 = FUNC_4(VAR_6, &VAR_6, &VAR_13, &VAR_14);
     if (VAR_16)
      return VAR_16;
     VAR_8->tm_sec += VAR_13;
     FUNC_1(VAR_14, VAR_8, VAR_9, 1);
     if (*VAR_6 == '\0')
      return 0;
     return VAR_1;

    default:

     return VAR_1;
   }
  }

  VAR_11 = 1;
 }

 return 0;
}
