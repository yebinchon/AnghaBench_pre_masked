
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 float VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char**,char const*) ;
 int VAR_3 ;
 float FUNC_1 (int,int,int) ;
 scalar_t__ FUNC_2 (char const**,char*) ;

float
FUNC_3(const char *VAR_4, char **VAR_5)
{

 const char *VAR_6;
 uint32_t VAR_7 = 0;
 int VAR_8 = 0;

 int VAR_9 = 0;
 int VAR_10 = 0;
 const char *VAR_11 = 0;


 VAR_6 = VAR_4;
 while (*VAR_6 == ' ' || *VAR_6 == '\f' || *VAR_6 == '\n' || *VAR_6 == '\r' || *VAR_6 == '\t' || *VAR_6 == '\v')
  ++VAR_6;


 if (*VAR_6 == '+')
  ++VAR_6;
 if (*VAR_6 == '-')
 {
  VAR_10 = 1;
  ++VAR_6;
 }
 VAR_11 = VAR_6;

 while (*VAR_6 >= '0' && *VAR_6 <= '9')
 {
  if (VAR_9)
  {
   if (VAR_9 < 9)
   {
    ++VAR_9;
    VAR_7 = VAR_7 * 10 + *VAR_6 - '0';
   }

   else if (VAR_8 < 1000)
    ++VAR_8;
  }
  else if (*VAR_6 > '0')
  {
   VAR_7 = *VAR_6 - '0';
   ++VAR_9;
  }
  ++VAR_6;
 }


 if (*VAR_6 == '.')
  ++VAR_6;


 while (*VAR_6 >= '0' && *VAR_6 <= '9')
 {
  if (VAR_9 < 9)
  {
   if (VAR_9 || *VAR_6 > '0')
   {
    ++VAR_9;
    VAR_7 = VAR_7 * 10 + *VAR_6 - '0';
   }
   --VAR_8;
  }
  ++VAR_6;
 }
 if ((VAR_6 == VAR_11 + 1 && *VAR_11 == '.') || VAR_11 == VAR_6)
 {

  VAR_6 = VAR_11;
  if (FUNC_2(&VAR_6, "INFINITY") || FUNC_2(&VAR_6, "INF"))
  {
   VAR_3 = VAR_0;
   FUNC_0(VAR_5, VAR_6);
   return VAR_10 ? -VAR_1 : +VAR_1;
  }
  else if (FUNC_2(&VAR_6, "NAN"))
  {
   FUNC_0(VAR_5, VAR_6);
   return (float)VAR_2;
  }
  else
  {
   FUNC_0(VAR_5, VAR_4);
   return 0.f;
  }
 }


 if (*VAR_6 == 'e' || *VAR_6 == 'E')
 {
  int VAR_12 = 0;
  int VAR_13 = 0;
  const char *VAR_14;
  const char *VAR_15 = VAR_6;

  ++VAR_6;
  if (*VAR_6 == '+')
   ++VAR_6;
  else if (*VAR_6 == '-')
  {
   ++VAR_6;
   VAR_12 = 1;
  }
  VAR_14 = VAR_6;

  while (*VAR_6 >= '0' && *VAR_6 <= '9')
  {

   if (VAR_13 < 100)
    VAR_13 = VAR_13 * 10 + *VAR_6 - '0';
   ++VAR_6;
  }
  if (VAR_12)
   VAR_13 = -VAR_13;
  if (VAR_6 == VAR_14)

   VAR_6 = VAR_15;
  else
   VAR_8 += VAR_13;
 }

 FUNC_0(VAR_5, VAR_6);
 return FUNC_1(VAR_7, VAR_8, VAR_10);
}
