
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef scalar_t__ grub_size_t ;


 scalar_t__ FUNC_0 (char*,scalar_t__,char const*,int ) ;

int
FUNC_1 (char *VAR_0, grub_size_t VAR_1, const char *VAR_2, va_list VAR_3)
{
  grub_size_t VAR_4;

  if (!VAR_1)
    return 0;

  VAR_1--;

  VAR_4 = FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_3);

  return VAR_4 < VAR_1 ? VAR_4 : VAR_1;
}
