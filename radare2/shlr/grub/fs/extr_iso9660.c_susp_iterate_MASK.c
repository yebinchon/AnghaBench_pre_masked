
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_iso9660_susp_entry {scalar_t__ sig; } ;
struct grub_iso9660_data {int rockridge; } ;
typedef int grub_err_t ;


 scalar_t__ FUNC_0 (char*,char*,int) ;

__attribute__((used)) static grub_err_t
FUNC_1 (struct grub_iso9660_susp_entry *VAR_0,
       void *VAR_1)
{
  struct grub_iso9660_data *VAR_2 = VAR_1;


  if (FUNC_0 ((char *) VAR_0->sig, "ER", 2) == 0)
    {
      VAR_2->rockridge = 1;
      return 1;
    }
  return 0;
}
