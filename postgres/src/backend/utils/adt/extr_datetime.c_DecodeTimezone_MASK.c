
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char**,int) ;

int
FUNC_2(char *VAR_7, int *VAR_8)
{
 int VAR_9;
 int VAR_10,
    VAR_11,
    VAR_12 = 0;
 char *VAR_13;


 if (*VAR_7 != '+' && *VAR_7 != '-')
  return VAR_0;

 VAR_6 = 0;
 VAR_10 = FUNC_1(VAR_7 + 1, &VAR_13, 10);
 if (VAR_6 == VAR_2)
  return VAR_1;


 if (*VAR_13 == ':')
 {
  VAR_6 = 0;
  VAR_11 = FUNC_1(VAR_13 + 1, &VAR_13, 10);
  if (VAR_6 == VAR_2)
   return VAR_1;
  if (*VAR_13 == ':')
  {
   VAR_6 = 0;
   VAR_12 = FUNC_1(VAR_13 + 1, &VAR_13, 10);
   if (VAR_6 == VAR_2)
    return VAR_1;
  }
 }

 else if (*VAR_13 == '\0' && FUNC_0(VAR_7) > 3)
 {
  VAR_11 = VAR_10 % 100;
  VAR_10 = VAR_10 / 100;

 }
 else
  VAR_11 = 0;


 if (VAR_10 < 0 || VAR_10 > VAR_3)
  return VAR_1;
 if (VAR_11 < 0 || VAR_11 >= VAR_4)
  return VAR_1;
 if (VAR_12 < 0 || VAR_12 >= VAR_5)
  return VAR_1;

 VAR_9 = (VAR_10 * VAR_4 + VAR_11) * VAR_5 + VAR_12;
 if (*VAR_7 == '-')
  VAR_9 = -VAR_9;

 *VAR_8 = -VAR_9;

 if (*VAR_13 != '\0')
  return VAR_0;

 return 0;
}
