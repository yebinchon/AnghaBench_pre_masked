
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct grub_reiserfs_stat_item_v2 {int size; } ;
struct grub_reiserfs_stat_item_v1 {int size; } ;
struct TYPE_9__ {scalar_t__ offset_type; } ;
struct TYPE_10__ {TYPE_3__ v2; } ;
struct grub_reiserfs_key {void* object_id; void* directory_id; TYPE_4__ u; } ;
struct TYPE_11__ {void* object_id; void* directory_id; } ;
struct TYPE_12__ {int item_location; int version; TYPE_5__ key; } ;
struct TYPE_8__ {int block_size; } ;
struct grub_reiserfs_data {scalar_t__ block_number; int disk; TYPE_6__ header; TYPE_2__ superblock; } ;
struct grub_fshelp_node {scalar_t__ block_number; int disk; TYPE_6__ header; TYPE_2__ superblock; } ;
struct grub_file {int size; struct grub_reiserfs_data* data; scalar_t__ offset; TYPE_1__* device; } ;
typedef scalar_t__ grub_uint32_t ;
typedef scalar_t__ grub_uint16_t ;
typedef scalar_t__ grub_off_t ;
typedef scalar_t__ grub_err_t ;
typedef int entry_v2_stat ;
typedef int entry_v1_stat ;
struct TYPE_7__ {int disk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int,struct grub_reiserfs_stat_item_v2*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct grub_reiserfs_data*) ;
 int FUNC_8 (char const*,struct grub_reiserfs_data*,struct grub_reiserfs_data**,int ,int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (struct grub_reiserfs_data*,struct grub_reiserfs_key*,struct grub_reiserfs_data*) ;
 int VAR_8 ;
 struct grub_reiserfs_data* FUNC_12 (int ) ;
 int VAR_9 ;
 int FUNC_13 (struct grub_reiserfs_key*,int) ;
 int FUNC_14 (struct grub_reiserfs_key*,int ,int) ;
 int VAR_10 ;

__attribute__((used)) static grub_err_t
FUNC_15 (struct grub_file *VAR_11, const char *VAR_12)
{
  struct grub_reiserfs_data *VAR_13 = 0;
  struct grub_fshelp_node VAR_14, *VAR_15 = 0, VAR_16;
  struct grub_reiserfs_key VAR_17;
  grub_uint32_t VAR_18;
  grub_uint16_t VAR_19, VAR_20, VAR_21;

  FUNC_3 (VAR_10);
  VAR_13 = FUNC_12 (VAR_11->device->disk);
  if (! VAR_13)
    goto fail;
  VAR_20 = FUNC_9 (VAR_13->superblock.block_size);
  VAR_17.directory_id = FUNC_1 (1);
  VAR_17.object_id = FUNC_1 (2);
  VAR_17.u.v2.offset_type = 0;
  FUNC_14 (&VAR_17, VAR_5, 2);
  FUNC_13 (&VAR_17, 1);
  if (FUNC_11 (VAR_13, &VAR_17, &VAR_14) != VAR_3)
    goto fail;
  if (VAR_14.block_number == 0)
    {
      FUNC_6 (VAR_2, "unable to find root item");
      goto fail;
    }
  FUNC_8 (VAR_12, &VAR_14, &VAR_15,
                         VAR_8, 0,
                         VAR_9, VAR_4);
  if (VAR_7)
    goto fail;
  VAR_17.directory_id = VAR_15->header.key.directory_id;
  VAR_17.object_id = VAR_15->header.key.object_id;
  FUNC_14 (&VAR_17, VAR_6, 2);
  FUNC_13 (&VAR_17, 0);
  if (FUNC_11 (VAR_13, &VAR_17, &VAR_16) != VAR_3)
    goto fail;
  if (VAR_16.block_number == 0)
    {
      FUNC_6 (VAR_2, "unable to find searched item");
      goto fail;
    }
  VAR_19 = FUNC_9 (VAR_16.header.version);
  VAR_21 = FUNC_9 (VAR_16.header.item_location);
  VAR_18 = VAR_16.block_number;
  if (VAR_19 == 0)
    {
      struct grub_reiserfs_stat_item_v1 VAR_22;
      FUNC_2 (VAR_13->disk,
                      VAR_18 * (VAR_20 >> VAR_0),
                      VAR_21
                      + (((grub_off_t) VAR_18 * VAR_20)
                         & (VAR_1 - 1)),
                      sizeof (VAR_22), &VAR_22);
      if (VAR_7)
        goto fail;
      VAR_11->size = (grub_off_t) FUNC_10 (VAR_22.size);
    }
  else
    {
      struct grub_reiserfs_stat_item_v2 VAR_23;
      FUNC_2 (VAR_13->disk,
                      VAR_18 * (VAR_20 >> VAR_0),
                      VAR_21
                      + (((grub_off_t) VAR_18 * VAR_20)
                         & (VAR_1 - 1)),
                      sizeof (VAR_23), &VAR_23);
      if (VAR_7)
        goto fail;
      VAR_11->size = (grub_off_t) FUNC_10 (VAR_23.size);
    }
  FUNC_5 ("reiserfs", "file size : %d (%08x%08x)\n",
                (unsigned int) VAR_11->size,
                (unsigned int) (VAR_11->size >> 32), (unsigned int) VAR_11->size);
  VAR_11->offset = 0;
  VAR_11->data = VAR_15;
  return VAR_3;

 fail:
  FUNC_0 (VAR_7 != VAR_3);
  FUNC_7 (VAR_15);
  FUNC_7 (VAR_13);
  FUNC_4 (VAR_10);
  return VAR_7;
}
