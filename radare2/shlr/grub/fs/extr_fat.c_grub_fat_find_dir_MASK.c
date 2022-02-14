
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_fat_find_dir_closure {int (* hook ) (char const*,struct grub_dirhook_info const*,void*) ;char* dirname; scalar_t__ found; int call_hook; void* closure; struct grub_fat_data* data; } ;
struct grub_fat_data {int attr; } ;
typedef int grub_disk_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int VAR_5 ;
 int FUNC_1 (int ,struct grub_fat_data*,int ,struct grub_fat_find_dir_closure*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (unsigned int) ;
 int FUNC_4 (char*,char const*,unsigned int) ;
 char* FUNC_5 (char const*,char) ;
 char* FUNC_6 (char const*) ;

__attribute__((used)) static char *
FUNC_7 (grub_disk_t VAR_6, struct grub_fat_data *VAR_7,
     const char *VAR_8,
     int (*VAR_9) (const char *VAR_10,
    const struct grub_dirhook_info *VAR_11,
    void *VAR_12),
     void *VAR_13)
{
  char *VAR_14, *VAR_15;
  struct grub_fat_find_dir_closure VAR_16;

  if (! (VAR_7->attr & VAR_3))
    {
      FUNC_0 (VAR_0, "not a directory");
      return 0;
    }


  while (*VAR_8 == '/')
    VAR_8++;

  VAR_15 = FUNC_5 (VAR_8, '/');
  if (VAR_15)
    {
      unsigned VAR_17 = VAR_15 - VAR_8;

      VAR_14 = FUNC_3 (VAR_17 + 1);
      if (! VAR_14)
 return 0;

      FUNC_4 (VAR_14, VAR_8, VAR_17);
      VAR_14[VAR_17] = '\0';
    }
  else

    VAR_14 = FUNC_6 (VAR_8);

  VAR_16.data = VAR_7;
  VAR_16.hook = VAR_9;
  VAR_16.closure = VAR_13;
  VAR_16.dirname =VAR_14;
  VAR_16.found = 0;
  VAR_16.call_hook = (! VAR_15 && VAR_9);
  FUNC_1 (VAR_6, VAR_7, VAR_5, &VAR_16);
  if (VAR_4 == VAR_2 && ! VAR_16.found && !VAR_16.call_hook)
    FUNC_0 (VAR_1, "file not found");

  FUNC_2 (VAR_14);

  return VAR_16.found ? VAR_15 : 0;
}
