
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* FUNC_0 (unsigned char const*,char) ;
 int FUNC_1 (unsigned char const*) ;
 int FUNC_2 (unsigned char const*,int) ;
 int FUNC_3 (unsigned char const*) ;

bool FUNC_4(const unsigned char *VAR_0)
{
 if (!VAR_0 || !FUNC_3(VAR_0))
  return 0;
 VAR_0 = FUNC_0(VAR_0, ' ');
 if (!VAR_0++)
  return 1;
 while (1) {
  const unsigned char *VAR_1 = FUNC_0(VAR_0, ' ');

  if (!VAR_1)
   break;
  if (*VAR_0 != '/' ||
      !FUNC_2(VAR_0, VAR_1 - VAR_0))
   return 0;
  VAR_0 = VAR_1 + 1;
 }
 return FUNC_1(VAR_0);
}
