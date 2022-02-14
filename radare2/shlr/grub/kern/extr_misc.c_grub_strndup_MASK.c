
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int grub_size_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char const*) ;

char *
FUNC_3 (const char *VAR_0, grub_size_t VAR_1)
{
  grub_size_t VAR_2;
  char *VAR_3;

  VAR_2 = FUNC_2 (VAR_0);
  if (VAR_2 > VAR_1)
    VAR_2 = VAR_1;
  VAR_3 = (char *) FUNC_0 (VAR_2 + 1);
  if (! VAR_3)
    return 0;

  FUNC_1 (VAR_3, VAR_0, VAR_2);
  VAR_3[VAR_2] = '\0';
  return VAR_3;
}
