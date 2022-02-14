
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ grub_size_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 char* FUNC_1 (char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;

char *
FUNC_3 (const char *VAR_0)
{
  grub_size_t VAR_1;
  char *VAR_2;

  VAR_1 = FUNC_2 (VAR_0) + 1;
  VAR_2 = (char *) FUNC_0 (VAR_1);
  if (! VAR_2)
    return 0;

  return FUNC_1 (VAR_2, VAR_0, VAR_1);
}
