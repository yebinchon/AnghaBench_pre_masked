
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int grub_size_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,char const*,int ) ;

char *
FUNC_3 (const char *VAR_1, va_list VAR_2)
{
  grub_size_t VAR_3, VAR_4 = VAR_0;
  char *VAR_5;

  while (1)
    {
      VAR_5 = FUNC_1 (VAR_4 + 1);
      if (!VAR_5)
 return ((void*)0);

      VAR_3 = FUNC_2 (VAR_5, VAR_4, VAR_1, VAR_2);
      if (VAR_3 <= VAR_4)
 return VAR_5;

      FUNC_0 (VAR_5);
      VAR_4 = VAR_3;
    }
}
