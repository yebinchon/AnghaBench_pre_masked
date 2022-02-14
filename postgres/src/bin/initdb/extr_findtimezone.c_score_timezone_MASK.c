
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tztry {int n_test_times; scalar_t__* test_times; } ;
struct tm {scalar_t__ tm_isdst; int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
struct pg_tm {int * tm_zone; scalar_t__ tm_isdst; int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
typedef int pg_tz ;
typedef scalar_t__ pg_time_t ;
typedef int cbuf ;


 int VAR_0 ;
 int FUNC_0 (struct tm*,struct pg_tm*) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 struct tm* FUNC_2 (scalar_t__*) ;
 int FUNC_3 (char*,int ,int) ;
 int * FUNC_4 (char const*) ;
 struct pg_tm* FUNC_5 (scalar_t__*,int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (char*,int *) ;
 int FUNC_8 (char*,int,char*,struct tm*) ;

__attribute__((used)) static int
FUNC_9(const char *VAR_2, struct tztry *VAR_3)
{
 int VAR_4;
 pg_time_t VAR_5;
 struct tm *VAR_6;
 struct pg_tm *VAR_7;
 char VAR_8[VAR_0 + 1];
 pg_tz *VAR_9;


 VAR_9 = FUNC_4(VAR_2);
 if (!VAR_9)
  return -1;


 if (!FUNC_6(VAR_9))
 {



  return -1;
 }


 for (VAR_4 = 0; VAR_4 < VAR_3->n_test_times; VAR_4++)
 {
  VAR_5 = (pg_time_t) (VAR_3->test_times[VAR_4]);
  VAR_7 = FUNC_5(&VAR_5, VAR_9);
  if (!VAR_7)
   return -1;
  VAR_6 = FUNC_2(&(VAR_3->test_times[VAR_4]));
  if (!VAR_6)
  {







   return VAR_4;
  }
  if (!FUNC_0(VAR_6, VAR_7))
  {
   return VAR_4;
  }
  if (VAR_6->tm_isdst >= 0)
  {

   if (VAR_7->tm_zone == ((void*)0))
    return -1;
   FUNC_3(VAR_8, 0, sizeof(VAR_8));
   FUNC_8(VAR_8, sizeof(VAR_8) - 1, "%Z", VAR_6);
   if (FUNC_7(VAR_8, VAR_7->tm_zone) != 0)
   {





    return VAR_4;
   }
  }
 }





 return VAR_4;
}
