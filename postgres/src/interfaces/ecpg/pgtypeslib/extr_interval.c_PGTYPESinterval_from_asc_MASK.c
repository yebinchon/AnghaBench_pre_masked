
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {scalar_t__ tm_sec; scalar_t__ tm_min; scalar_t__ tm_hour; scalar_t__ tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
typedef int interval ;
typedef scalar_t__ fsec_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int*,struct tm*,scalar_t__*) ;
 scalar_t__ FUNC_1 (char**,int*,int,int*,struct tm*,scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (char*,char*,char**,int*,int*,char**) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (struct tm*,scalar_t__,int *) ;

interval *
FUNC_7(char *VAR_5, char **VAR_6)
{
 interval *VAR_7 = ((void*)0);
 fsec_t VAR_8;
 struct tm VAR_9,
      *VAR_10 = &VAR_9;
 int VAR_11;
 int VAR_12;
 char *VAR_13[VAR_1];
 int VAR_14[VAR_1];
 char VAR_15[VAR_2 + VAR_1];
 char *VAR_16;
 char **VAR_17 = (VAR_6 != ((void*)0)) ? VAR_6 : &VAR_16;

 VAR_10->tm_year = 0;
 VAR_10->tm_mon = 0;
 VAR_10->tm_mday = 0;
 VAR_10->tm_hour = 0;
 VAR_10->tm_min = 0;
 VAR_10->tm_sec = 0;
 VAR_8 = 0;

 if (FUNC_5(VAR_5) > VAR_2)
 {
  VAR_4 = VAR_3;
  return ((void*)0);
 }

 if (FUNC_2(VAR_5, VAR_15, VAR_13, VAR_14, &VAR_12, VAR_17) != 0 ||
  (FUNC_1(VAR_13, VAR_14, VAR_12, &VAR_11, VAR_10, &VAR_8) != 0 &&
   FUNC_0(VAR_5, &VAR_11, VAR_10, &VAR_8) != 0))
 {
  VAR_4 = VAR_3;
  return ((void*)0);
 }

 VAR_7 = (interval *) FUNC_4(sizeof(interval));
 if (!VAR_7)
  return ((void*)0);

 if (VAR_11 != VAR_0)
 {
  VAR_4 = VAR_3;
  FUNC_3(VAR_7);
  return ((void*)0);
 }

 if (FUNC_6(VAR_10, VAR_8, VAR_7) != 0)
 {
  VAR_4 = VAR_3;
  FUNC_3(VAR_7);
  return ((void*)0);
 }

 VAR_4 = 0;
 return VAR_7;
}
