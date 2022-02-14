
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, int *VAR_1)
{
 static const char VAR_2[] = "0123456789";
 int VAR_3;
 int VAR_4;
 char VAR_5;

 VAR_4 = 0;
 VAR_3 = 0;
 while ((VAR_5 = *VAR_0++) != '\0')
 {
  const char *VAR_6;

  VAR_6 = FUNC_0(VAR_2, VAR_5);
  if (VAR_6 != ((void*)0))
  {
   if (VAR_3++ != 0 && VAR_4 == 0)
    return 0;
   VAR_4 *= 10;
   VAR_4 += (VAR_6 - VAR_2);
   if (VAR_4 > 128)
    return 0;
   continue;
  }
  return 0;
 }
 if (VAR_3 == 0)
  return 0;
 *VAR_1 = VAR_4;
 return 1;
}
