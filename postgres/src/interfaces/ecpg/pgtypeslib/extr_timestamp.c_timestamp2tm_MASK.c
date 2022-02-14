
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ timestamp ;
typedef scalar_t__ time_t ;
struct tm {int tm_year; int tm_isdst; int tm_gmtoff; char* tm_zone; scalar_t__ tm_yday; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; int tm_sec; } ;
typedef scalar_t__ int64 ;
typedef int fsec_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int,scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 char** VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int,int,int) ;
 int FUNC_4 (scalar_t__,int *,int *,int *,int *) ;
 int FUNC_5 (int,int*,scalar_t__*,int *) ;
 struct tm* FUNC_6 (scalar_t__*) ;

__attribute__((used)) static int
FUNC_7(timestamp VAR_6, int *VAR_7, struct tm *VAR_8, fsec_t *VAR_9, const char **VAR_10)
{
 int64 VAR_11,
    VAR_12;
 int64 VAR_13;





 VAR_12 = FUNC_3(2000, 1, 1);

 VAR_13 = VAR_6;
 FUNC_2(VAR_13, VAR_11, VAR_4);

 if (VAR_13 < FUNC_0(0))
 {
  VAR_13 += VAR_4;
  VAR_11 -= 1;
 }


 VAR_11 += VAR_12;


 if (VAR_11 < 0 || VAR_11 > (timestamp) VAR_0)
  return -1;

 FUNC_5((int) VAR_11, &VAR_8->tm_year, &VAR_8->tm_mon, &VAR_8->tm_mday);
 FUNC_4(VAR_13, &VAR_8->tm_hour, &VAR_8->tm_min, &VAR_8->tm_sec, VAR_9);

 if (VAR_7 != ((void*)0))
 {




  if (FUNC_1(VAR_8->tm_year, VAR_8->tm_mon, VAR_8->tm_mday))
  {
   *VAR_7 = 0;

   VAR_8->tm_isdst = -1;
   if (VAR_10 != ((void*)0))
    *VAR_10 = ((void*)0);

  }
  else
  {
   *VAR_7 = 0;

   VAR_8->tm_isdst = -1;
   if (VAR_10 != ((void*)0))
    *VAR_10 = ((void*)0);
  }
 }
 else
 {
  VAR_8->tm_isdst = -1;
  if (VAR_10 != ((void*)0))
   *VAR_10 = ((void*)0);
 }

 VAR_8->tm_yday = VAR_11 - FUNC_3(VAR_8->tm_year, 1, 1) + 1;

 return 0;
}
