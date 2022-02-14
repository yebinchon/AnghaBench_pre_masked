
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_fat_dir_entry {scalar_t__ attr; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char const*) ;

__attribute__((used)) static int
FUNC_1 (const char *VAR_1, struct grub_fat_dir_entry *VAR_2,
       void *VAR_3)
{
  char **VAR_4 = VAR_3;

  if (VAR_2->attr == VAR_0)
    {
      *VAR_4 = FUNC_0 (VAR_1);
      return 1;
    }
  return 0;
}
