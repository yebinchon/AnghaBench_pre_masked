
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_tm {void* tm_hour; void* tm_min; void* tm_sec; void* tm_year; void* tm_mon; void* tm_mday; } ;
typedef int fsec_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (double) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*) ;
 double FUNC_4 (char*,int *) ;

__attribute__((used)) static int
FUNC_5(int VAR_6, char *VAR_7, int VAR_8,
      int *VAR_9, struct pg_tm *VAR_10, fsec_t *VAR_11, bool *VAR_12)
{
 char *VAR_13;





 if ((VAR_13 = FUNC_2(VAR_7, '.')) != ((void*)0))
 {




  double VAR_14;

  VAR_5 = 0;
  VAR_14 = FUNC_4(VAR_13, ((void*)0));
  if (VAR_5 != 0)
   return VAR_0;
  *VAR_11 = FUNC_1(VAR_14 * 1000000);

  *VAR_13 = '\0';
  VAR_6 = FUNC_3(VAR_7);
 }

 else if ((VAR_8 & VAR_2) != VAR_2)
 {
  if (VAR_6 >= 6)
  {
   *VAR_9 = VAR_2;





   VAR_10->tm_mday = FUNC_0(VAR_7 + (VAR_6 - 2));
   *(VAR_7 + (VAR_6 - 2)) = '\0';
   VAR_10->tm_mon = FUNC_0(VAR_7 + (VAR_6 - 4));
   *(VAR_7 + (VAR_6 - 4)) = '\0';
   VAR_10->tm_year = FUNC_0(VAR_7);
   if ((VAR_6 - 4) == 2)
    *VAR_12 = 1;

   return VAR_1;
  }
 }


 if ((VAR_8 & VAR_4) != VAR_4)
 {

  if (VAR_6 == 6)
  {
   *VAR_9 = VAR_4;
   VAR_10->tm_sec = FUNC_0(VAR_7 + 4);
   *(VAR_7 + 4) = '\0';
   VAR_10->tm_min = FUNC_0(VAR_7 + 2);
   *(VAR_7 + 2) = '\0';
   VAR_10->tm_hour = FUNC_0(VAR_7);

   return VAR_3;
  }

  else if (VAR_6 == 4)
  {
   *VAR_9 = VAR_4;
   VAR_10->tm_sec = 0;
   VAR_10->tm_min = FUNC_0(VAR_7 + 2);
   *(VAR_7 + 2) = '\0';
   VAR_10->tm_hour = FUNC_0(VAR_7);

   return VAR_3;
  }
 }

 return VAR_0;
}
