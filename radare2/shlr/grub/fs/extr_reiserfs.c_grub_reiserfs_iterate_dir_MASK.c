
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct grub_reiserfs_stat_item_v2 {int size; int mode; int first_direct_byte; int blocks; int ctime; int mtime; int atime; int gid; int uid; int hardlink_count; int reserved; } ;
struct grub_reiserfs_stat_item_v1 {int mode; int first_direct_byte; int rdev; int ctime; int mtime; int atime; int size; int gid; int uid; int hardlink_count; } ;
struct TYPE_8__ {scalar_t__ offset_type; } ;
struct TYPE_9__ {TYPE_3__ v2; } ;
struct grub_reiserfs_key {TYPE_4__ u; int object_id; int directory_id; } ;
struct TYPE_7__ {int entry_count; } ;
struct grub_reiserfs_item_header {struct grub_reiserfs_key key; TYPE_2__ u; int item_location; } ;
struct grub_reiserfs_directory_header {int object_id; int directory_id; int location; int state; } ;
struct TYPE_6__ {int block_size; } ;
struct grub_reiserfs_data {int disk; TYPE_1__ superblock; } ;
struct TYPE_10__ {int item_location; int version; } ;
struct grub_reiserfs_block_header {int next_offset; scalar_t__ type; int block_number; int block_position; TYPE_5__ header; int level; int member_0; struct grub_reiserfs_data* data; } ;
struct grub_fshelp_node {int next_offset; scalar_t__ type; int block_number; int block_position; TYPE_5__ header; int level; int member_0; struct grub_reiserfs_data* data; } ;
typedef int grub_uint64_t ;
typedef int grub_uint32_t ;
typedef int grub_uint16_t ;
typedef int grub_off_t ;
typedef struct grub_reiserfs_block_header* grub_fshelp_node_t ;
typedef int grub_disk_addr_t ;
typedef enum grub_fshelp_filetype { ____Placeholder_grub_fshelp_filetype } grub_fshelp_filetype ;
typedef int entry_v2_stat ;
typedef int entry_v1_stat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int,int,char*) ;
 int FUNC_2 (char*,char*,...) ;
 int VAR_12 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct grub_reiserfs_block_header*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 struct grub_reiserfs_block_header* FUNC_8 (int) ;
 int FUNC_9 (struct grub_reiserfs_data*,struct grub_reiserfs_key*,struct grub_reiserfs_block_header*) ;
 int FUNC_10 (struct grub_reiserfs_key*,int) ;
 int FUNC_11 (struct grub_reiserfs_key*,scalar_t__,int) ;
 scalar_t__ FUNC_12 (char*,char*) ;

__attribute__((used)) static int
FUNC_13 (grub_fshelp_node_t VAR_13,
                           int (*VAR_14) (const char *VAR_15,
     enum grub_fshelp_filetype VAR_16,
     grub_fshelp_node_t VAR_17,
     void *VAR_18),
      void *VAR_19)
{
  struct grub_reiserfs_data *VAR_20 = VAR_13->data;
  struct grub_reiserfs_block_header *VAR_21 = 0;
  grub_uint16_t VAR_22, VAR_23;
  grub_uint32_t VAR_24;
  grub_uint64_t VAR_25 = VAR_13->next_offset;
  int VAR_26 = 0;

  if (VAR_13->type != VAR_8)
    {
      FUNC_3 (VAR_2,
                  "grub_reiserfs_iterate_dir called on a non-directory item");
      goto fail;
    }
  VAR_22 = FUNC_5 (VAR_20->superblock.block_size);
  VAR_21 = FUNC_8 (VAR_22);
  if (! VAR_21)
    goto fail;
  VAR_24 = VAR_13->block_number;
  VAR_23 = VAR_13->block_position;
  FUNC_2 ("reiserfs", "Iterating directory...\n");
  if (!VAR_14)
    return VAR_3;
  do
    {
      struct grub_reiserfs_directory_header *VAR_27;
      struct grub_fshelp_node VAR_28 = {0};
      grub_uint16_t VAR_29, VAR_30;
      struct grub_reiserfs_item_header *VAR_31;

      FUNC_1 (VAR_20->disk,
                      VAR_24 * (VAR_22 >> VAR_0),
                      (((grub_off_t) VAR_24 * VAR_22)
                       & (VAR_1 - 1)),
                      VAR_22, (char *) VAR_21);
      if (VAR_12)
        goto fail;
      VAR_31 = (struct grub_reiserfs_item_header *) (VAR_21 + 1);
      VAR_27
        = ((struct grub_reiserfs_directory_header *)
           ((char *) VAR_21
            + FUNC_5 (VAR_31[VAR_23].item_location)));
      VAR_29
        = FUNC_5 (VAR_31[VAR_23].u.entry_count);
      for (VAR_30 = 0; VAR_30 < VAR_29; VAR_30++)
        {
          struct grub_reiserfs_directory_header *VAR_32
            = &VAR_27[VAR_30];
          grub_uint16_t VAR_33
            = FUNC_5 (VAR_32->state);

          if (VAR_33 & VAR_10)
            {
              grub_fshelp_node_t VAR_34;
              struct grub_reiserfs_key VAR_35;
       enum grub_fshelp_filetype VAR_36;
              char *VAR_37;

              VAR_37 = (((char *) VAR_27)
                            + FUNC_5 (VAR_32->location));
              VAR_35.directory_id = VAR_32->directory_id;
              VAR_35.object_id = VAR_32->object_id;
              VAR_35.u.v2.offset_type = 0;
              FUNC_11 (&VAR_35, VAR_8,
                                          2);
              FUNC_10 (&VAR_35, 1);

              VAR_34 = FUNC_8 (sizeof (*VAR_34));
              if (! VAR_34)
                goto fail;

              if (FUNC_9 (VAR_20, &VAR_35, VAR_34)
                  != VAR_3)
                {
                  FUNC_4 (VAR_34);
                  goto fail;
                }

              if (VAR_34->type == VAR_8)
                VAR_36 = VAR_5;
              else
                {
                  grub_uint32_t VAR_38;




                  FUNC_10 (&VAR_35, 0);
                  FUNC_11 (&VAR_35, VAR_9,
                                              2);
                  if (FUNC_9 (VAR_20, &VAR_35, VAR_34)
                      != VAR_3)
                    {
                      FUNC_4 (VAR_34);
                      goto fail;
                    }

                  if (VAR_34->block_number != 0)
                    {
                      grub_uint16_t VAR_39;
                      VAR_39
                        = FUNC_5 (VAR_34->header.version);
                      VAR_38 = VAR_34->block_number;







                      if (VAR_39 == 0)
                        {
                          struct grub_reiserfs_stat_item_v1 VAR_40;
                          FUNC_1 (VAR_20->disk,
                                          VAR_38 * (VAR_22 >> VAR_0),
                                          FUNC_5 (VAR_34->header.item_location),
                                          sizeof (VAR_40),
                                          (char *) &VAR_40);
                          if (VAR_12)
                            goto fail;
                          if ((FUNC_5 (VAR_40.mode) & VAR_11)
                              == VAR_11)
                            VAR_36 = VAR_7;
                          else
                            VAR_36 = VAR_6;
                        }
                      else
                        {
                          struct grub_reiserfs_stat_item_v2 VAR_41;
                          FUNC_1 (VAR_20->disk,
                                          VAR_38 * (VAR_22 >> VAR_0),
                                          FUNC_5 (VAR_34->header.item_location),
                                          sizeof (VAR_41),
                                          (char *) &VAR_41);
                          if (VAR_12)
                            goto fail;
                          if ((FUNC_5 (VAR_41.mode) & VAR_11)
                              == VAR_11)
                            VAR_36 = VAR_7;
                          else
                            VAR_36 = VAR_6;
                        }
                    }
                  else
                    {

                      if (FUNC_12 (VAR_37, ".."))
                        FUNC_2 ("reiserfs",
                                      "Warning : %s has no stat block !\n",
                                      VAR_37);
                      FUNC_4 (VAR_34);
                      continue;
                    }
                }
              if (VAR_14 (VAR_37, VAR_36, VAR_34, VAR_19))
                {
                  FUNC_2 ("reiserfs", "Found : %s, type=%d\n",
                                VAR_37, VAR_36);
                  VAR_26 = 1;
                  goto found;
                }

              *VAR_37 = 0;


            }
        }

      if (VAR_25 == 0)
        break;

      FUNC_10 (&(VAR_31[VAR_23].key),
                                    VAR_25);
      if (FUNC_9 (VAR_20, &(VAR_31[VAR_23].key),
                                  &VAR_28) != VAR_3)
        goto fail;
      VAR_24 = VAR_28.block_number;
      VAR_23 = VAR_28.block_position;
      VAR_25 = VAR_28.next_offset;
    }
  while (VAR_24);

 found:
  FUNC_0 (VAR_12 == VAR_3);
  FUNC_4 (VAR_21);
  return VAR_26;
 fail:
  FUNC_0 (VAR_12 != VAR_3);
  FUNC_4 (VAR_21);
  return 0;
}
