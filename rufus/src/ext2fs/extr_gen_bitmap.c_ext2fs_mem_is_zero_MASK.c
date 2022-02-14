
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zero_buf ;


 scalar_t__ FUNC_0 (char const*,char const*,size_t) ;

int FUNC_1(const char *VAR_0, size_t VAR_1)
{
 static const char VAR_2[256];

 while (VAR_1 >= sizeof(VAR_2)) {
  if (FUNC_0(VAR_0, VAR_2, sizeof(VAR_2)))
   return 0;
  VAR_1 -= sizeof(VAR_2);
  VAR_0 += sizeof(VAR_2);
 }

 if (VAR_1)
  return !FUNC_0(VAR_0, VAR_2, VAR_1);
 return 1;
}
