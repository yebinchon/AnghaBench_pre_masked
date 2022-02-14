
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ offset_type; } ;
struct TYPE_6__ {TYPE_1__ v2; } ;
struct grub_reiserfs_key {TYPE_2__ u; void* object_id; void* directory_id; } ;
struct grub_reiserfs_dir_closure {int (* hook ) (char const*,struct grub_dirhook_info const*,void*) ;void* closure; } ;
struct grub_reiserfs_data {int dummy; } ;
struct grub_fshelp_node {scalar_t__ block_number; } ;
typedef scalar_t__ grub_err_t ;
typedef TYPE_3__* grub_device_t ;
struct TYPE_7__ {int disk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct grub_reiserfs_data*) ;
 int FUNC_5 (char const*,struct grub_fshelp_node*,struct grub_fshelp_node**,int (*) (struct grub_fshelp_node*,int ,struct grub_reiserfs_dir_closure*),int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct grub_reiserfs_data*,struct grub_reiserfs_key*,struct grub_fshelp_node*) ;
 int FUNC_7 (struct grub_fshelp_node*,int ,struct grub_reiserfs_dir_closure*) ;
 struct grub_reiserfs_data* FUNC_8 (int ) ;
 int VAR_5 ;
 int FUNC_9 (struct grub_reiserfs_key*,int) ;
 int FUNC_10 (struct grub_reiserfs_key*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static grub_err_t
FUNC_11 (grub_device_t VAR_8, const char *VAR_9,
                   int (*VAR_10) (const char *VAR_11,
    const struct grub_dirhook_info *VAR_12,
    void *VAR_13),
     void *VAR_14)
{
  struct grub_reiserfs_data *VAR_15 = 0;
  struct grub_fshelp_node VAR_16, *VAR_17;
  struct grub_reiserfs_key VAR_18;
  struct grub_reiserfs_dir_closure VAR_19;

  FUNC_1 (VAR_7);
  VAR_15 = FUNC_8 (VAR_8->disk);
  if (! VAR_15)
    goto fail;
  VAR_18.directory_id = FUNC_0 (1);
  VAR_18.object_id = FUNC_0 (2);
  VAR_18.u.v2.offset_type = 0;
  FUNC_10 (&VAR_18, VAR_3, 2);
  FUNC_9 (&VAR_18, 1);
  if (FUNC_6 (VAR_15, &VAR_18, &VAR_16) != VAR_1)
    goto fail;
  if (VAR_16.block_number == 0)
    {
      FUNC_3(VAR_0, "root not found");
      goto fail;
    }
  FUNC_5 (VAR_9, &VAR_16, &VAR_17, FUNC_7, 0,
                         VAR_5, VAR_2);
  if (VAR_4)
    goto fail;
  VAR_19.hook = VAR_10;
  VAR_19.closure = VAR_14;
  FUNC_7 (VAR_17, VAR_6, &VAR_19);
  FUNC_4 (VAR_15);
  FUNC_2 (VAR_7);
  return VAR_1;

 fail:
  FUNC_4 (VAR_15);
  FUNC_2 (VAR_7);
  return VAR_4;
}
