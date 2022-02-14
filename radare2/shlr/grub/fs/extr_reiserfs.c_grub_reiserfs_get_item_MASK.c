
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct grub_reiserfs_key {scalar_t__ directory_id; scalar_t__ object_id; } const grub_reiserfs_key ;
struct grub_reiserfs_item_header {struct grub_reiserfs_key const key; } ;
struct grub_reiserfs_disk_child {int block_number; } ;
struct TYPE_2__ {int root_block; int block_size; } ;
struct grub_reiserfs_data {int disk; TYPE_1__ superblock; } ;
struct grub_reiserfs_block_header {int item_count; int level; } ;
struct grub_fshelp_node {int block_number; int block_position; int header; int type; struct grub_reiserfs_data* data; scalar_t__ next_offset; } ;
typedef int grub_uint32_t ;
typedef int grub_uint16_t ;
typedef int grub_off_t ;
typedef scalar_t__ grub_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int,int,struct grub_reiserfs_block_header*) ;
 int FUNC_2 (char*,char*,...) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct grub_reiserfs_block_header*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct grub_reiserfs_block_header* FUNC_7 (int) ;
 int FUNC_8 (int *,struct grub_reiserfs_item_header*,int) ;
 int FUNC_9 (char*,...) ;
 scalar_t__ FUNC_10 (struct grub_reiserfs_key const*,struct grub_reiserfs_key const*) ;
 scalar_t__ FUNC_11 (struct grub_reiserfs_key const*) ;
 int FUNC_12 (struct grub_reiserfs_key const*) ;
 int FUNC_13 (struct grub_reiserfs_key const*) ;

__attribute__((used)) static grub_err_t
FUNC_14 (struct grub_reiserfs_data *VAR_7,
                        const struct grub_reiserfs_key *VAR_8,
                        struct grub_fshelp_node *VAR_9)
{
  grub_uint32_t VAR_10;
  struct grub_reiserfs_block_header *VAR_11 = 0;
  struct grub_reiserfs_key *VAR_12 = 0;
  grub_uint16_t VAR_13, VAR_14, VAR_15;
  grub_uint16_t VAR_16;
  grub_uint16_t VAR_17 = ~0;
  struct grub_reiserfs_item_header *VAR_18 = 0;

  if (! VAR_7)
    {
      FUNC_3 (VAR_4, "data is NULL");
      goto fail;
    }

  if (! VAR_8)
    {
      FUNC_3 (VAR_4, "key is NULL");
      goto fail;
    }

  if (! VAR_9)
    {
      FUNC_3 (VAR_4, "item is NULL");
      goto fail;
    }

  VAR_13 = FUNC_5 (VAR_7->superblock.block_size);
  VAR_10 = FUNC_6 (VAR_7->superblock.root_block);




  VAR_11 = FUNC_7 (VAR_13);
  if (! VAR_11)
    goto fail;

  VAR_9->next_offset = 0;
  do
    {
      FUNC_1 (VAR_7->disk,
                      VAR_10 * (VAR_13 >> VAR_0),
                      (((grub_off_t) VAR_10 * VAR_13)
                       & (VAR_1 - 1)),
                      VAR_13, VAR_11);
      if (VAR_6)
        goto fail;
      VAR_15 = FUNC_5 (VAR_11->level);
      FUNC_2 ("reiserfs_tree", " at level %d\n", VAR_15);
      if (VAR_15 >= VAR_17)
        {
          FUNC_2 ("reiserfs_tree", "level loop detected, aborting\n");
          FUNC_3 (VAR_2, "level loop");
          goto fail;
        }
      VAR_17 = VAR_15;
      VAR_14 = FUNC_5 (VAR_11->item_count);
      FUNC_2 ("reiserfs_tree", " number of contained items : %d\n",
                    VAR_14);
      if (VAR_15 > 1)
        {


          struct grub_reiserfs_key *VAR_19
            = (struct grub_reiserfs_key *) (VAR_11 + 1);
          struct grub_reiserfs_disk_child *VAR_20
            = ((struct grub_reiserfs_disk_child *)
               (VAR_19 + VAR_14));

          for (VAR_16 = 0;
               VAR_16 < VAR_14
                 && FUNC_10 (VAR_8, &(VAR_19[VAR_16])) >= 0;
               VAR_16++)
            {




            }
          VAR_10 = FUNC_6 (VAR_20[VAR_16].block_number);
   if ((VAR_16 < VAR_14) && (VAR_8->directory_id == VAR_19[VAR_16].directory_id)
        && (VAR_8->object_id == VAR_19[VAR_16].object_id))
     VAR_9->next_offset = FUNC_11(&(VAR_19[VAR_16]));
        }
      else
        {

          VAR_18
            = (struct grub_reiserfs_item_header *) (VAR_11 + 1);
          for (VAR_16 = 0;
               VAR_16 < VAR_14
                 && (FUNC_10 (VAR_8, &(VAR_18[VAR_16].key))
                     != 0);
               VAR_16++)
            {
            }
          if (VAR_16 < VAR_14)
            VAR_12 = &(VAR_18[VAR_16].key);
        }
    }
  while (VAR_15 > 1);

  VAR_9->data = VAR_7;

  if (VAR_16 == VAR_14 || FUNC_10 (VAR_8, VAR_12))
    {
      VAR_9->block_number = 0;
      VAR_9->block_position = 0;
      VAR_9->type = VAR_5;



    }
  else
    {
      VAR_9->block_number = VAR_10;
      VAR_9->block_position = VAR_16;
      VAR_9->type = FUNC_12 (VAR_12);
      FUNC_8 (&(VAR_9->header), &(VAR_18[VAR_16]),
                   sizeof (struct grub_reiserfs_item_header));




    }

  FUNC_0 (VAR_6 == VAR_3);
  FUNC_4 (VAR_11);
  return VAR_3;

 fail:
  FUNC_0 (VAR_6 != VAR_3);
  FUNC_4 (VAR_11);
  FUNC_0 (VAR_6 != VAR_3);
  return VAR_6;
}
