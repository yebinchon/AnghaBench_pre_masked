
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_tm {int tm_year; double tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
typedef int fsec_t ;


 int FUNC_0 (double,struct pg_tm*,int *,int) ;
 int FUNC_1 (double,struct pg_tm*,int *,int) ;
 int FUNC_2 (struct pg_tm*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 double VAR_3 ;
 int FUNC_4 (char*,char**,int*,double*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (char*) ;

int
FUNC_6(char *VAR_7,
       int *VAR_8, struct pg_tm *VAR_9, fsec_t *VAR_10)
{
 bool VAR_11 = 1;
 bool VAR_12 = 0;

 *VAR_8 = VAR_2;
 FUNC_2(VAR_9, VAR_10);

 if (FUNC_5(VAR_7) < 2 || VAR_7[0] != 'P')
  return VAR_1;

 VAR_7++;
 while (*VAR_7)
 {
  char *VAR_13;
  int VAR_14;
  double VAR_15;
  char VAR_16;
  int VAR_17;

  if (*VAR_7 == 'T')
  {
   VAR_11 = 0;
   VAR_12 = 0;
   VAR_7++;
   continue;
  }

  VAR_13 = VAR_7;
  VAR_17 = FUNC_4(VAR_7, &VAR_7, &VAR_14, &VAR_15);
  if (VAR_17)
   return VAR_17;





  VAR_16 = *VAR_7++;

  if (VAR_11)
  {
   switch (VAR_16)
   {
    case 'Y':
     VAR_9->tm_year += VAR_14;
     VAR_9->tm_mon += (VAR_15 * VAR_3);
     break;
    case 'M':
     VAR_9->tm_mon += VAR_14;
     FUNC_0(VAR_15, VAR_9, VAR_10, VAR_0);
     break;
    case 'W':
     VAR_9->tm_mday += VAR_14 * 7;
     FUNC_0(VAR_15, VAR_9, VAR_10, 7);
     break;
    case 'D':
     VAR_9->tm_mday += VAR_14;
     FUNC_1(VAR_15, VAR_9, VAR_10, VAR_4);
     break;
    case 'T':
    case '\0':
     if (FUNC_3(VAR_13) == 8 && !VAR_12)
     {
      VAR_9->tm_year += VAR_14 / 10000;
      VAR_9->tm_mon += (VAR_14 / 100) % 100;
      VAR_9->tm_mday += VAR_14 % 100;
      FUNC_1(VAR_15, VAR_9, VAR_10, VAR_4);
      if (VAR_16 == '\0')
       return 0;
      VAR_11 = 0;
      VAR_12 = 0;
      continue;
     }


    case '-':

     if (VAR_12)
      return VAR_1;

     VAR_9->tm_year += VAR_14;
     VAR_9->tm_mon += (VAR_15 * VAR_3);
     if (VAR_16 == '\0')
      return 0;
     if (VAR_16 == 'T')
     {
      VAR_11 = 0;
      VAR_12 = 0;
      continue;
     }

     VAR_17 = FUNC_4(VAR_7, &VAR_7, &VAR_14, &VAR_15);
     if (VAR_17)
      return VAR_17;
     VAR_9->tm_mon += VAR_14;
     FUNC_0(VAR_15, VAR_9, VAR_10, VAR_0);
     if (*VAR_7 == '\0')
      return 0;
     if (*VAR_7 == 'T')
     {
      VAR_11 = 0;
      VAR_12 = 0;
      continue;
     }
     if (*VAR_7 != '-')
      return VAR_1;
     VAR_7++;

     VAR_17 = FUNC_4(VAR_7, &VAR_7, &VAR_14, &VAR_15);
     if (VAR_17)
      return VAR_17;
     VAR_9->tm_mday += VAR_14;
     FUNC_1(VAR_15, VAR_9, VAR_10, VAR_4);
     if (*VAR_7 == '\0')
      return 0;
     if (*VAR_7 == 'T')
     {
      VAR_11 = 0;
      VAR_12 = 0;
      continue;
     }
     return VAR_1;
    default:

     return VAR_1;
   }
  }
  else
  {
   switch (VAR_16)
   {
    case 'H':
     VAR_9->tm_hour += VAR_14;
     FUNC_1(VAR_15, VAR_9, VAR_10, VAR_5);
     break;
    case 'M':
     VAR_9->tm_min += VAR_14;
     FUNC_1(VAR_15, VAR_9, VAR_10, VAR_6);
     break;
    case 'S':
     VAR_9->tm_sec += VAR_14;
     FUNC_1(VAR_15, VAR_9, VAR_10, 1);
     break;
    case '\0':
     if (FUNC_3(VAR_13) == 6 && !VAR_12)
     {
      VAR_9->tm_hour += VAR_14 / 10000;
      VAR_9->tm_min += (VAR_14 / 100) % 100;
      VAR_9->tm_sec += VAR_14 % 100;
      FUNC_1(VAR_15, VAR_9, VAR_10, 1);
      return 0;
     }


    case ':':

     if (VAR_12)
      return VAR_1;

     VAR_9->tm_hour += VAR_14;
     FUNC_1(VAR_15, VAR_9, VAR_10, VAR_5);
     if (VAR_16 == '\0')
      return 0;

     VAR_17 = FUNC_4(VAR_7, &VAR_7, &VAR_14, &VAR_15);
     if (VAR_17)
      return VAR_17;
     VAR_9->tm_min += VAR_14;
     FUNC_1(VAR_15, VAR_9, VAR_10, VAR_6);
     if (*VAR_7 == '\0')
      return 0;
     if (*VAR_7 != ':')
      return VAR_1;
     VAR_7++;

     VAR_17 = FUNC_4(VAR_7, &VAR_7, &VAR_14, &VAR_15);
     if (VAR_17)
      return VAR_17;
     VAR_9->tm_sec += VAR_14;
     FUNC_1(VAR_15, VAR_9, VAR_10, 1);
     if (*VAR_7 == '\0')
      return 0;
     return VAR_1;

    default:

     return VAR_1;
   }
  }

  VAR_12 = 1;
 }

 return 0;
}
