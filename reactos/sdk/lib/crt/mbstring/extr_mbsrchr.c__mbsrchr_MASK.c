
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned char const*) ;

unsigned char * FUNC_1(const unsigned char *VAR_0, unsigned int VAR_1)
{
  unsigned int VAR_2;
  unsigned char *VAR_3 = ((void*)0);

  if (!VAR_0)
    return ((void*)0);

  while (1)
  {
    VAR_2 = FUNC_0(VAR_0);
    if (VAR_2 == VAR_1)
      VAR_3 = (unsigned char*)VAR_0;
    if (!VAR_2)
      return VAR_3;
    VAR_0 += (VAR_2 > 255) ? 2 : 1;
  }
}
