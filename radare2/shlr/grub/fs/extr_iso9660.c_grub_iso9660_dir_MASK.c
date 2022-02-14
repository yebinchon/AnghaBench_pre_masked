
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct grub_iso9660_dir_closure {int (* hook ) (char const*,struct grub_dirhook_info const*,void*) ;void* closure; } ;
struct TYPE_5__ {int size; int first_sector; } ;
struct TYPE_6__ {TYPE_1__ rootdir; } ;
struct grub_iso9660_data {TYPE_2__ voldesc; void* size; void* blk; struct grub_iso9660_data* data; } ;
struct grub_fshelp_node {TYPE_2__ voldesc; void* size; void* blk; struct grub_fshelp_node* data; } ;
typedef int grub_err_t ;
typedef TYPE_3__* grub_device_t ;
struct TYPE_7__ {int disk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct grub_iso9660_data*) ;
 scalar_t__ FUNC_3 (char const*,struct grub_iso9660_data*,struct grub_iso9660_data**,int (*) (struct grub_iso9660_data*,int ,struct grub_iso9660_dir_closure*),int ,int ,int ) ;
 int FUNC_4 (struct grub_iso9660_data*,int ,struct grub_iso9660_dir_closure*) ;
 struct grub_iso9660_data* FUNC_5 (int ) ;
 int VAR_2 ;
 void* FUNC_6 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static grub_err_t
FUNC_7 (grub_device_t VAR_5, const char *VAR_6,
    int (*VAR_7) (const char *VAR_8,
          const struct grub_dirhook_info *VAR_9,
          void *VAR_10),
    void *VAR_11)
{
  struct grub_iso9660_data *VAR_12 = 0;
  struct grub_fshelp_node VAR_13;
  struct grub_fshelp_node *VAR_14;
  struct grub_iso9660_dir_closure VAR_15;

  FUNC_0 (VAR_4);

  VAR_12 = FUNC_5 (VAR_5->disk);
  if (! VAR_12)
    goto fail;

  VAR_13.data = VAR_12;
  VAR_13.blk = FUNC_6 (VAR_12->voldesc.rootdir.first_sector);
  VAR_13.size = FUNC_6 (VAR_12->voldesc.rootdir.size);


  if (FUNC_3 (VAR_6, &VAR_13,
        &VAR_14,
        FUNC_4, 0,
        VAR_2,
        VAR_0))
    goto fail;

  VAR_15.hook = VAR_7;
  VAR_15.closure = VAR_11;

  FUNC_4 (VAR_14, VAR_3, &VAR_15);

  if (VAR_14 != &VAR_13)
    FUNC_2 (VAR_14);

 fail:
  FUNC_2 (VAR_12);

  FUNC_1 (VAR_4);

  return VAR_1;
}
