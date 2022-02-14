
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int size; int first_sector; } ;
struct TYPE_6__ {TYPE_2__ rootdir; } ;
struct grub_iso9660_data {void* first_sector; TYPE_3__ voldesc; } ;
struct grub_fshelp_node {void* size; void* blk; struct grub_iso9660_data* data; } ;
struct grub_file {scalar_t__ offset; void* size; struct grub_iso9660_data* data; TYPE_1__* device; } ;
typedef int grub_err_t ;
struct TYPE_4__ {int disk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct grub_iso9660_data*) ;
 scalar_t__ FUNC_3 (char const*,struct grub_fshelp_node*,struct grub_fshelp_node**,int ,int ,int ,int ) ;
 int VAR_2 ;
 struct grub_iso9660_data* FUNC_4 (int ) ;
 int VAR_3 ;
 void* FUNC_5 (int ) ;
 int VAR_4 ;

__attribute__((used)) static grub_err_t
FUNC_6 (struct grub_file *VAR_5, const char *VAR_6)
{
  struct grub_iso9660_data *VAR_7;
  struct grub_fshelp_node VAR_8;
  struct grub_fshelp_node *VAR_9;

  FUNC_0 (VAR_4);

  VAR_7 = FUNC_4 (VAR_5->device->disk);
  if (!VAR_7)
    goto fail;

  VAR_8.data = VAR_7;
  VAR_8.blk = FUNC_5 (VAR_7->voldesc.rootdir.first_sector);
  VAR_8.size = FUNC_5 (VAR_7->voldesc.rootdir.size);


  if (FUNC_3 (VAR_6, &VAR_8,
        &VAR_9,
        VAR_2, 0,
        VAR_3,
        VAR_0))
    goto fail;

  VAR_7->first_sector = VAR_9->blk;

  VAR_5->data = VAR_7;
  VAR_5->size = VAR_9->size;
  VAR_5->offset = 0;

  return 0;

 fail:
  FUNC_1 (VAR_4);

  FUNC_2 (VAR_7);

  return VAR_1;
}
