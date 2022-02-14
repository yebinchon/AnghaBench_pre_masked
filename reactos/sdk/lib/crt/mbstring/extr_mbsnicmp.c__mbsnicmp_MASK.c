
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const) ;
 int FUNC_1 (unsigned char const) ;
 int FUNC_2 (unsigned char const) ;

int FUNC_3(const unsigned char *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
  if (VAR_2 == 0)
    return 0;
  do {
    if (FUNC_1(*VAR_0) != FUNC_1(*VAR_1))
      return FUNC_1(*(unsigned const char *)VAR_0) - FUNC_1(*(unsigned const char *)VAR_1);
    VAR_0 += FUNC_2(*VAR_0);
    VAR_1 += FUNC_2(*VAR_1);

    if (*VAR_0 == 0)
      break;
    if (!FUNC_0(*VAR_0))
      VAR_2--;
  } while (VAR_2 > 0);
  return 0;
}
