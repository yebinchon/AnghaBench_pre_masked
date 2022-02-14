
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zic_t ;
struct rule {int r_tod; scalar_t__ r_dycode; int r_dayofmonth; int r_month; int r_wday; int r_isdst; scalar_t__ r_todisstd; scalar_t__ r_todisut; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int** VAR_8 ;
 int FUNC_0 (char*,char*,int,...) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int
FUNC_2(char *VAR_9, struct rule *const VAR_10, zic_t VAR_11, zic_t VAR_12)
{
 zic_t VAR_13 = VAR_10->r_tod;
 int VAR_14 = 0;

 if (VAR_10->r_dycode == VAR_1)
 {
  int VAR_15,
     VAR_16;

  if (VAR_10->r_dayofmonth == 29 && VAR_10->r_month == VAR_7)
   return -1;
  VAR_16 = 0;
  for (VAR_15 = 0; VAR_15 < VAR_10->r_month; ++VAR_15)
   VAR_16 += VAR_8[0][VAR_15];

  if (VAR_10->r_month <= 1)
   VAR_9 += FUNC_0(VAR_9, "%d", VAR_16 + VAR_10->r_dayofmonth - 1);
  else
   VAR_9 += FUNC_0(VAR_9, "J%d", VAR_16 + VAR_10->r_dayofmonth);
 }
 else
 {
  int VAR_17;
  int VAR_18 = VAR_10->r_wday;
  int VAR_19;

  if (VAR_10->r_dycode == VAR_2)
  {
   VAR_19 = (VAR_10->r_dayofmonth - 1) % VAR_0;
   if (VAR_19)
    VAR_14 = 2013;
   VAR_18 -= VAR_19;
   VAR_13 += VAR_19 * VAR_5;
   VAR_17 = 1 + (VAR_10->r_dayofmonth - 1) / VAR_0;
  }
  else if (VAR_10->r_dycode == VAR_3)
  {
   if (VAR_10->r_dayofmonth == VAR_8[1][VAR_10->r_month])
    VAR_17 = 5;
   else
   {
    VAR_19 = VAR_10->r_dayofmonth % VAR_0;
    if (VAR_19)
     VAR_14 = 2013;
    VAR_18 -= VAR_19;
    VAR_13 += VAR_19 * VAR_5;
    VAR_17 = VAR_10->r_dayofmonth / VAR_0;
   }
  }
  else
   return -1;
  if (VAR_18 < 0)
   VAR_18 += VAR_0;
  VAR_9 += FUNC_0(VAR_9, "M%d.%d.%d",
        VAR_10->r_month + 1, VAR_17, VAR_18);
 }
 if (VAR_10->r_todisut)
  VAR_13 += VAR_12;
 if (VAR_10->r_todisstd && !VAR_10->r_isdst)
  VAR_13 += VAR_11;
 if (VAR_13 != 2 * VAR_6 * VAR_4)
 {
  *VAR_9++ = '/';
  if (!FUNC_1(VAR_9, VAR_13))
   return -1;
  if (VAR_13 < 0)
  {
   if (VAR_14 < 2013)
    VAR_14 = 2013;
  }
  else if (VAR_5 <= VAR_13)
  {
   if (VAR_14 < 1994)
    VAR_14 = 1994;
  }
 }
 return VAR_14;
}
