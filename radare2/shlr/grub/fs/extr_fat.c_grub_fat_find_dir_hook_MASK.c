
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_fat_find_dir_closure {char* dirname; int (* hook ) (char const*,struct grub_dirhook_info*,int ) ;int found; int closure; scalar_t__ call_hook; struct grub_fat_data* data; } ;
struct grub_fat_dir_entry {int attr; int first_cluster_low; int first_cluster_high; int file_size; } ;
struct grub_fat_data {int attr; int file_cluster; unsigned int cur_cluster_num; int file_size; } ;
struct grub_dirhook_info {int dir; int case_insensitive; } ;
typedef int info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct grub_dirhook_info*,int ,int) ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*,struct grub_dirhook_info*,int ) ;
 int FUNC_5 (char const*,struct grub_dirhook_info*,int ) ;

__attribute__((used)) static int
FUNC_6 (const char *VAR_2, struct grub_fat_dir_entry *VAR_3,
   void *VAR_4)
{
  struct grub_fat_find_dir_closure *VAR_5 = VAR_4;
  struct grub_dirhook_info VAR_6;
  FUNC_2 (&VAR_6, 0, sizeof (VAR_6));

  VAR_6.dir = !! (VAR_3->attr & VAR_0);
  VAR_6.case_insensitive = 1;

  if (VAR_3->attr & VAR_1)
    return 0;
  if (*(VAR_5->dirname) == '\0' && (VAR_5->call_hook))
    return VAR_5->hook (VAR_2, &VAR_6, VAR_5->closure);

  if (FUNC_3 (VAR_5->dirname, VAR_2) == 0)
    {
      struct grub_fat_data *VAR_7 = VAR_5->data;

      VAR_5->found = 1;
      VAR_7->attr = VAR_3->attr;
      VAR_7->file_size = FUNC_1 (VAR_3->file_size);
      VAR_7->file_cluster = ((FUNC_0 (VAR_3->first_cluster_high) << 16)
          | FUNC_0 (VAR_3->first_cluster_low));
      VAR_7->cur_cluster_num = ~0U;

      if (VAR_5->call_hook)
 VAR_5->hook (VAR_2, &VAR_6, VAR_5->closure);

      return 1;
    }
  return 0;
}
