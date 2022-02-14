
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;

unsigned char * FUNC_1(const unsigned char *VAR_0, const unsigned char *VAR_1)
{
 unsigned char *VAR_2 = (unsigned char *)VAR_1;
 if ( VAR_0 >= VAR_1 )
  return ((void*)0);

 VAR_2--;
 if (FUNC_0(*(VAR_2-1)) )
  VAR_2--;

 return VAR_2;
}
