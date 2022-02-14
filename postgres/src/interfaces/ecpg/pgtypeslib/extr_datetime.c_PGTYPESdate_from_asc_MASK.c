
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_year; int tm_mon; int tm_mday; } ;
typedef int fsec_t ;
typedef scalar_t__ date ;




 scalar_t__ FUNC_0 (char**,int*,int,int*,struct tm*,int *,int) ;
 int FUNC_1 (struct tm*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (char*,char*,char**,int*,int*,char**) ;
 scalar_t__ FUNC_3 (int,int,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*) ;

date
FUNC_5(char *VAR_5, char **VAR_6)
{
 date VAR_7;
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

 bool VAR_18 = 0;

 VAR_4 = 0;
 if (FUNC_4(VAR_5) > VAR_2)
 {
  VAR_4 = VAR_3;
  return VAR_0;
 }

 if (FUNC_2(VAR_5, VAR_15, VAR_13, VAR_14, &VAR_12, VAR_17) != 0 ||
  FUNC_0(VAR_13, VAR_14, VAR_12, &VAR_11, VAR_10, &VAR_8, VAR_18) != 0)
 {
  VAR_4 = VAR_3;
  return VAR_0;
 }

 switch (VAR_11)
 {
  case 129:
   break;

  case 128:
   if (FUNC_1(VAR_10) < 0)
   {
    VAR_4 = VAR_3;
    return VAR_0;
   }
   break;

  default:
   VAR_4 = VAR_3;
   return VAR_0;
 }

 VAR_7 = (FUNC_3(VAR_10->tm_year, VAR_10->tm_mon, VAR_10->tm_mday) - FUNC_3(2000, 1, 1));

 return VAR_7;
}
