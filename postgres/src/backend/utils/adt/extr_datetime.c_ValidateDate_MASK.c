
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_tm {int tm_year; int tm_mon; int tm_mday; scalar_t__ tm_yday; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int,int,int) ;
 int** VAR_8 ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int*,int*,int*) ;

int
FUNC_4(int VAR_9, bool VAR_10, bool VAR_11, bool VAR_12,
    struct pg_tm *VAR_13)
{
 if (VAR_9 & FUNC_0(VAR_7))
 {
  if (VAR_10)
  {

  }
  else if (VAR_12)
  {

   if (VAR_13->tm_year <= 0)
    return VAR_2;

   VAR_13->tm_year = -(VAR_13->tm_year - 1);
  }
  else if (VAR_11)
  {

   if (VAR_13->tm_year < 0)
    return VAR_2;
   if (VAR_13->tm_year < 70)
    VAR_13->tm_year += 2000;
   else if (VAR_13->tm_year < 100)
    VAR_13->tm_year += 1900;
  }
  else
  {

   if (VAR_13->tm_year <= 0)
    return VAR_2;
  }
 }


 if (VAR_9 & FUNC_0(VAR_1))
 {
  FUNC_3(FUNC_1(VAR_13->tm_year, 1, 1) + VAR_13->tm_yday - 1,
      &VAR_13->tm_year, &VAR_13->tm_mon, &VAR_13->tm_mday);
 }


 if (VAR_9 & FUNC_0(VAR_5))
 {
  if (VAR_13->tm_mon < 1 || VAR_13->tm_mon > VAR_6)
   return VAR_3;
 }


 if (VAR_9 & FUNC_0(VAR_0))
 {
  if (VAR_13->tm_mday < 1 || VAR_13->tm_mday > 31)
   return VAR_3;
 }

 if ((VAR_9 & VAR_4) == VAR_4)
 {





  if (VAR_13->tm_mday > VAR_8[FUNC_2(VAR_13->tm_year)][VAR_13->tm_mon - 1])
   return VAR_2;
 }

 return 0;
}
