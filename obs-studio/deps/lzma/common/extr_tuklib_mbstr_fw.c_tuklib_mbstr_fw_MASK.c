
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*,size_t*) ;

extern int
FUNC_1(const char *VAR_0, int VAR_1)
{
 size_t VAR_2;
 const size_t VAR_3 = FUNC_0(VAR_0, &VAR_2);
 if (VAR_3 == (size_t)-1)
  return -1;

 if (VAR_3 > (size_t)VAR_1)
  return 0;

 if (VAR_3 < (size_t)VAR_1)
  VAR_2 += (size_t)VAR_1 - VAR_3;

 return VAR_2;
}
