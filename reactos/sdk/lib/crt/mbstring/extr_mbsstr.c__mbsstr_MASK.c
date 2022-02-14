
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char const*) ;
 size_t FUNC_1 (unsigned char const*) ;
 scalar_t__ FUNC_2 (unsigned char const*,unsigned char const*,size_t) ;

unsigned char *FUNC_3(const unsigned char *VAR_0,const unsigned char *VAR_1)
{
  size_t VAR_2;

  if (VAR_1 ==((void*)0) || *VAR_1 == 0)
    return (unsigned char *)VAR_0;

  VAR_2 = FUNC_1(VAR_1);

  while(*VAR_0)
    {
      if ((*VAR_0 == *VAR_1) && (FUNC_2(VAR_0,VAR_1,VAR_2) == 0))
 return (unsigned char *)VAR_0;
      VAR_0 = (unsigned char *)FUNC_0(VAR_0);
    }
  return ((void*)0);
}
