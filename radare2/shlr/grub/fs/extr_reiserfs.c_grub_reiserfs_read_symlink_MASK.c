
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct grub_reiserfs_key {int dummy; } ;
struct TYPE_9__ {int item_location; int item_size; } ;
struct grub_fshelp_node {scalar_t__ block_number; TYPE_3__ header; } ;
typedef int key ;
typedef void* grub_uint16_t ;
typedef int grub_size_t ;
typedef void* grub_off_t ;
typedef TYPE_4__* grub_fshelp_node_t ;
typedef int grub_disk_addr_t ;
struct TYPE_8__ {int block_size; } ;
struct TYPE_11__ {int disk; TYPE_2__ superblock; } ;
struct TYPE_7__ {int key; } ;
struct TYPE_10__ {TYPE_6__* data; TYPE_1__ header; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,void*,int,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (int ) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (struct grub_reiserfs_key*,int *,int) ;
 scalar_t__ FUNC_5 (TYPE_6__*,struct grub_reiserfs_key*,struct grub_fshelp_node*) ;
 int FUNC_6 (struct grub_reiserfs_key*) ;
 int FUNC_7 (struct grub_reiserfs_key*,int) ;
 int FUNC_8 (struct grub_reiserfs_key*,int ,int ) ;

__attribute__((used)) static char *
FUNC_9 (grub_fshelp_node_t VAR_4)
{
  char *VAR_5 = 0;
  grub_uint16_t VAR_6;
  grub_disk_addr_t VAR_7;
  grub_off_t VAR_8;
  grub_size_t VAR_9;
  struct grub_fshelp_node VAR_10;
  struct grub_reiserfs_key VAR_11;

  FUNC_4 (&VAR_11, &(VAR_4->header.key), sizeof (VAR_11));
  FUNC_7 (&VAR_11, 1);
  FUNC_8 (&VAR_11, VAR_2,
                              FUNC_6 (&VAR_11));

  if (FUNC_5 (VAR_4->data, &VAR_11, &VAR_10) != VAR_1)
    goto fail;

  if (VAR_10.block_number == 0)
    goto fail;

  VAR_6 = FUNC_2 (VAR_4->data->superblock.block_size);
  VAR_9 = FUNC_2 (VAR_10.header.item_size);
  VAR_7 = (grub_disk_addr_t)VAR_10.block_number * ((grub_disk_addr_t)VAR_6 >> VAR_0);

  VAR_8 = FUNC_2 (VAR_10.header.item_location);

  VAR_5 = FUNC_3 (VAR_9 + 1);
  if (! VAR_5)
    goto fail;

  FUNC_0 (VAR_4->data->disk, VAR_7, VAR_8, VAR_9, VAR_5);
  if (VAR_3)
    goto fail;

  VAR_5[VAR_9] = 0;
  return VAR_5;

 fail:
  FUNC_1 (VAR_5);
  return 0;
}
