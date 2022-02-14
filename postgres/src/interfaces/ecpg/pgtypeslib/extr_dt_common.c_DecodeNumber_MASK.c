
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_yday; int tm_year; int tm_mon; int tm_mday; } ;
typedef int fsec_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,int,int*,struct tm*,int *,int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int,int,int) ;
 int FUNC_3 (scalar_t__,int*,int*,int*) ;
 int FUNC_4 (char*,char**) ;
 int FUNC_5 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_6(int VAR_6, char *VAR_7, int VAR_8,
    int *VAR_9, struct tm *VAR_10, fsec_t *VAR_11, bool *VAR_12, bool VAR_13)
{
 int VAR_14;
 char *VAR_15;

 *VAR_9 = 0;

 VAR_14 = FUNC_5(VAR_7, &VAR_15, 10);
 if (VAR_15 == VAR_7)
  return -1;

 if (*VAR_15 == '.')
 {




  if (VAR_15 - VAR_7 > 2)
   return FUNC_1(VAR_6, VAR_7, (VAR_8 | VAR_2),
          VAR_9, VAR_10, VAR_11, VAR_12);

  *VAR_11 = FUNC_4(VAR_15, &VAR_15);
  if (*VAR_15 != '\0')
   return -1;
 }
 else if (*VAR_15 != '\0')
  return -1;


 if (VAR_6 == 3 && (VAR_8 & FUNC_0(VAR_5)) && VAR_14 >= 1 && VAR_14 <= 366)
 {
  *VAR_9 = (FUNC_0(VAR_1) | FUNC_0(VAR_3) | FUNC_0(VAR_0));
  VAR_10->tm_yday = VAR_14;
  FUNC_3(FUNC_2(VAR_10->tm_year, 1, 1) + VAR_10->tm_yday - 1,
      &VAR_10->tm_year, &VAR_10->tm_mon, &VAR_10->tm_mday);
 }
 else if (VAR_6 >= 4)
 {
  *VAR_9 = FUNC_0(VAR_5);


  if ((VAR_8 & FUNC_0(VAR_5)) && !(VAR_8 & FUNC_0(VAR_0)) &&
   VAR_10->tm_year >= 1 && VAR_10->tm_year <= 31)
  {
   VAR_10->tm_mday = VAR_10->tm_year;
   *VAR_9 = FUNC_0(VAR_0);
  }

  VAR_10->tm_year = VAR_14;
 }


 else if ((VAR_8 & FUNC_0(VAR_5)) && !(VAR_8 & FUNC_0(VAR_3)) && VAR_14 >= 1 && VAR_14 <= VAR_4)
 {
  *VAR_9 = FUNC_0(VAR_3);
  VAR_10->tm_mon = VAR_14;
 }

 else if ((VAR_13 || (VAR_8 & FUNC_0(VAR_3))) &&
    !(VAR_8 & FUNC_0(VAR_5)) && !(VAR_8 & FUNC_0(VAR_0)) &&
    VAR_14 >= 1 && VAR_14 <= 31)
 {
  *VAR_9 = FUNC_0(VAR_0);
  VAR_10->tm_mday = VAR_14;
 }
 else if (!(VAR_8 & FUNC_0(VAR_3)) && VAR_14 >= 1 && VAR_14 <= VAR_4)
 {
  *VAR_9 = FUNC_0(VAR_3);
  VAR_10->tm_mon = VAR_14;
 }
 else if (!(VAR_8 & FUNC_0(VAR_0)) && VAR_14 >= 1 && VAR_14 <= 31)
 {
  *VAR_9 = FUNC_0(VAR_0);
  VAR_10->tm_mday = VAR_14;
 }





 else if (!(VAR_8 & FUNC_0(VAR_5)) && (VAR_6 >= 4 || VAR_6 == 2))
 {
  *VAR_9 = FUNC_0(VAR_5);
  VAR_10->tm_year = VAR_14;


  *VAR_12 = (VAR_6 == 2);
 }
 else
  return -1;

 return 0;
}
