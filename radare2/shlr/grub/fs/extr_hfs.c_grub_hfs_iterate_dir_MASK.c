
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_hfs_iterate_dir_closure {unsigned int dir; int (* hook ) (struct grub_hfs_record*,void*) ;int next; int found; scalar_t__ isleaf; void* closure; struct grub_hfs_catalog_key* key; } ;
struct grub_hfs_data {int dummy; } ;
struct grub_hfs_catalog_key {char* member_3; int member_2; int member_1; int member_0; } ;
typedef int grub_uint32_t ;
typedef int grub_err_t ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct grub_hfs_data*,int ,int,int,int ,struct grub_hfs_iterate_dir_closure*) ;

__attribute__((used)) static grub_err_t
FUNC_2 (struct grub_hfs_data *VAR_3, grub_uint32_t VAR_4,
        unsigned int VAR_5,
        int (*VAR_6) (struct grub_hfs_record *, void *VAR_7),
        void *VAR_8)
{

  struct grub_hfs_catalog_key VAR_9 = {0, FUNC_0 (VAR_5), 0, ""};
  struct grub_hfs_iterate_dir_closure VAR_10;

  VAR_10.key = &VAR_9;
  VAR_10.dir = VAR_5;
  VAR_10.hook = VAR_6;
  VAR_10.closure = VAR_8;
  VAR_10.isleaf = 0;
  VAR_10.next = 0;
  do
    {
      VAR_10.found = -1;

      if (FUNC_1 (VAR_3, 0, VAR_4, 0,
        VAR_2, &VAR_10))
        return VAR_0;

      if (VAR_10.found == -1)
        return 0;

      VAR_4 = VAR_10.found;
    } while (! VAR_10.isleaf);



  FUNC_1 (VAR_3, 0, VAR_10.next, 1, VAR_1, &VAR_10);
  return VAR_0;
}
