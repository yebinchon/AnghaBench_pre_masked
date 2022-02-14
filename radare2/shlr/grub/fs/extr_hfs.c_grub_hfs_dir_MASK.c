
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct grub_hfs_filerec {scalar_t__ type; int member_0; } ;
struct grub_hfs_dir_closure {int (* hook ) (char const*,struct grub_dirhook_info const*,void*) ;void* closure; } ;
struct grub_hfs_data {int cat_root; } ;
typedef int grub_err_t ;
typedef TYPE_1__* grub_device_t ;
struct TYPE_3__ {int disk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct grub_hfs_data*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct grub_hfs_data*,char const*,struct grub_hfs_filerec*,int*) ;
 int FUNC_5 (struct grub_hfs_data*,int ,int,int ,struct grub_hfs_dir_closure*) ;
 struct grub_hfs_data* FUNC_6 (int ) ;
 int VAR_4 ;

__attribute__((used)) static grub_err_t
FUNC_7 (grub_device_t VAR_5, const char *VAR_6,
       int (*VAR_7) (const char *VAR_8,
      const struct grub_dirhook_info *VAR_9, void *VAR_10),
       void *VAR_11)
{
  int VAR_12;
  struct grub_hfs_data *VAR_13;
  struct grub_hfs_filerec VAR_14 = {0};
  struct grub_hfs_dir_closure VAR_15;

  FUNC_0 (VAR_4);

  VAR_13 = FUNC_6 (VAR_5->disk);
  if (!VAR_13)
    goto fail;


  if (FUNC_4 (VAR_13, VAR_6, &VAR_14, &VAR_12))
    goto fail;

  if (VAR_14.type != VAR_1)
    {
      FUNC_2 (VAR_0, "not a directory");
      goto fail;
    }

  VAR_15.hook = VAR_7;
  VAR_15.closure = VAR_11;
  FUNC_5 (VAR_13, VAR_13->cat_root, VAR_12, VAR_3, &VAR_15);

 fail:
  FUNC_3 (VAR_13);

  FUNC_1 (VAR_4);

  return VAR_2;
}
