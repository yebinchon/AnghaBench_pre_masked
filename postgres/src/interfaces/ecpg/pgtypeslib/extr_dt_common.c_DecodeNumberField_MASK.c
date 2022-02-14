
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_mon; void* tm_hour; void* tm_min; void* tm_sec; void* tm_year; void* tm_mday; } ;
typedef int fsec_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int *,int) ;

__attribute__((used)) static int
FUNC_4(int VAR_4, char *VAR_5, int VAR_6,
      int *VAR_7, struct tm *VAR_8, fsec_t *VAR_9, bool *VAR_10)
{
 char *VAR_11;





 if ((VAR_11 = FUNC_1(VAR_5, '.')) != ((void*)0))
 {
  char VAR_12[7];
  int VAR_13;

  VAR_11++;
  for (VAR_13 = 0; VAR_13 < 6; VAR_13++)
   VAR_12[VAR_13] = *VAR_11 != '\0' ? *VAR_11++ : '0';
  VAR_12[VAR_13] = '\0';
  *VAR_9 = FUNC_3(VAR_12, ((void*)0), 10);
  *VAR_11 = '\0';
  VAR_4 = FUNC_2(VAR_5);
 }

 else if ((VAR_6 & VAR_1) != VAR_1)
 {

  if (VAR_4 == 8)
  {
   *VAR_7 = VAR_1;

   VAR_8->tm_mday = FUNC_0(VAR_5 + 6);
   *(VAR_5 + 6) = '\0';
   VAR_8->tm_mon = FUNC_0(VAR_5 + 4);
   *(VAR_5 + 4) = '\0';
   VAR_8->tm_year = FUNC_0(VAR_5 + 0);

   return VAR_0;
  }

  else if (VAR_4 == 6)
  {
   *VAR_7 = VAR_1;
   VAR_8->tm_mday = FUNC_0(VAR_5 + 4);
   *(VAR_5 + 4) = '\0';
   VAR_8->tm_mon = FUNC_0(VAR_5 + 2);
   *(VAR_5 + 2) = '\0';
   VAR_8->tm_year = FUNC_0(VAR_5 + 0);
   *VAR_10 = 1;

   return VAR_0;
  }

  else if (VAR_4 == 5)
  {
   *VAR_7 = VAR_1;
   VAR_8->tm_mday = FUNC_0(VAR_5 + 2);
   *(VAR_5 + 2) = '\0';
   VAR_8->tm_mon = 1;
   VAR_8->tm_year = FUNC_0(VAR_5 + 0);
   *VAR_10 = 1;

   return VAR_0;
  }
 }


 if ((VAR_6 & VAR_3) != VAR_3)
 {

  if (VAR_4 == 6)
  {
   *VAR_7 = VAR_3;
   VAR_8->tm_sec = FUNC_0(VAR_5 + 4);
   *(VAR_5 + 4) = '\0';
   VAR_8->tm_min = FUNC_0(VAR_5 + 2);
   *(VAR_5 + 2) = '\0';
   VAR_8->tm_hour = FUNC_0(VAR_5 + 0);

   return VAR_2;
  }

  else if (VAR_4 == 4)
  {
   *VAR_7 = VAR_3;
   VAR_8->tm_sec = 0;
   VAR_8->tm_min = FUNC_0(VAR_5 + 2);
   *(VAR_5 + 2) = '\0';
   VAR_8->tm_hour = FUNC_0(VAR_5 + 0);

   return VAR_2;
  }
 }

 return -1;
}
