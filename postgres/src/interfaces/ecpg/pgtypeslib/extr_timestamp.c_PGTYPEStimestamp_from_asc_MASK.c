
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp ;
struct tm {int dummy; } ;
typedef int int64 ;
typedef int fsec_t ;






 scalar_t__ FUNC_0 (char**,int*,int,int*,struct tm*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (char*,char*,char**,int*,int*,char**) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct tm*,int ,int *,int *) ;

timestamp
FUNC_7(char *VAR_4, char **VAR_5)
{
 timestamp VAR_6;
 int64 VAR_7 = 0;
 fsec_t VAR_8;
 struct tm VAR_9,
      *VAR_10 = &VAR_9;
 int VAR_11;
 int VAR_12;
 char *VAR_13[VAR_0];
 int VAR_14[VAR_0];
 char VAR_15[VAR_1 + VAR_0];
 char *VAR_16;
 char **VAR_17 = (VAR_5 != ((void*)0)) ? VAR_5 : &VAR_16;

 if (FUNC_5(VAR_4) > VAR_1)
 {
  VAR_3 = VAR_2;
  return VAR_7;
 }

 if (FUNC_1(VAR_4, VAR_15, VAR_13, VAR_14, &VAR_12, VAR_17) != 0 ||
  FUNC_0(VAR_13, VAR_14, VAR_12, &VAR_11, VAR_10, &VAR_8, 0) != 0)
 {
  VAR_3 = VAR_2;
  return VAR_7;
 }

 switch (VAR_11)
 {
  case 131:
   if (FUNC_6(VAR_10, VAR_8, ((void*)0), &VAR_6) != 0)
   {
    VAR_3 = VAR_2;
    return VAR_7;
   }
   break;

  case 129:
   VAR_6 = FUNC_2();
   break;

  case 128:
   FUNC_4(VAR_6);
   break;

  case 130:
   FUNC_3(VAR_6);
   break;

  default:
   VAR_3 = VAR_2;
   return VAR_7;
 }







 VAR_3 = 0;
 return VAR_6;
}
