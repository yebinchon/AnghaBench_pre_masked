
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;


 int FUNC_0 (char const*,int*) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, u_char *VAR_1, int *VAR_2)
{
 static const char VAR_3[] = "0123456789";
 u_char *VAR_4 = VAR_1;
 int VAR_5;
 u_int VAR_6;
 char VAR_7;

 VAR_6 = 0;
 VAR_5 = 0;
 while ((VAR_7 = *VAR_0++) != '\0')
 {
  const char *VAR_8;

  VAR_8 = FUNC_1(VAR_3, VAR_7);
  if (VAR_8 != ((void*)0))
  {
   if (VAR_5++ != 0 && VAR_6 == 0)
    return 0;
   VAR_6 *= 10;
   VAR_6 += (VAR_8 - VAR_3);
   if (VAR_6 > 255)
    return 0;
   continue;
  }
  if (VAR_7 == '.' || VAR_7 == '/')
  {
   if (VAR_1 - VAR_4 > 3)
    return 0;
   *VAR_1++ = VAR_6;
   if (VAR_7 == '/')
    return FUNC_0(VAR_0, VAR_2);
   VAR_6 = 0;
   VAR_5 = 0;
   continue;
  }
  return 0;
 }
 if (VAR_5 == 0)
  return 0;
 if (VAR_1 - VAR_4 > 3)
  return 0;
 *VAR_1++ = VAR_6;
 return 1;
}
