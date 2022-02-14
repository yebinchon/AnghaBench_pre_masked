
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct grub_ext4_extent_header {int entries; } ;
struct grub_ext4_extent {char block; char start; int start_hi; int len; } ;
struct TYPE_4__ {char* dir_blocks; char indir_block; char double_indir_block; } ;
struct grub_ext2_inode {char flags; TYPE_1__ blocks; } ;
struct grub_ext2_data {int disk; } ;
typedef char grub_uint32_t ;
typedef TYPE_2__* grub_fshelp_node_t ;
typedef int grub_disk_addr_t ;
struct TYPE_5__ {struct grub_ext2_inode inode; struct grub_ext2_data* data; } ;


 unsigned int FUNC_0 (struct grub_ext2_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct grub_ext2_data*) ;
 scalar_t__ FUNC_2 (int ,int,int ,unsigned int,char*) ;
 int VAR_4 ;
 int FUNC_3 (int ,char*) ;
 struct grub_ext4_extent_header* FUNC_4 (struct grub_ext2_data*,char*,struct grub_ext4_extent_header*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char) ;
 char* FUNC_8 (unsigned int) ;

__attribute__((used)) static grub_disk_addr_t
FUNC_9 (grub_fshelp_node_t VAR_5, grub_disk_addr_t VAR_6)
{
  struct grub_ext2_data *VAR_7 = VAR_5->data;
  struct grub_ext2_inode *VAR_8 = &VAR_5->inode;
  int VAR_9 = -1;
  unsigned int VAR_10 = FUNC_0 (VAR_7);
  int VAR_11 = FUNC_1 (VAR_7);

  if (FUNC_7(VAR_8->flags) & VAR_0)
    {
   char * VAR_12 = FUNC_8 (FUNC_0 (VAR_7));
          if (!VAR_12) {
              return -1;
          }
      struct grub_ext4_extent_header *VAR_13;
      struct grub_ext4_extent *VAR_14;
      int VAR_15;

      VAR_13 = FUNC_4 (VAR_7, VAR_12,
    (struct grub_ext4_extent_header *) VAR_8->blocks.dir_blocks,
    VAR_6);
      if (! VAR_13)
        {
          FUNC_3 (VAR_1, "invalid extent");
   FUNC_5 (VAR_12);
          return -1;
        }

      VAR_14 = (struct grub_ext4_extent *) (VAR_13 + 1);
      for (VAR_15 = 0; VAR_15 < FUNC_6 (VAR_13->entries); VAR_15++)
        {
          if (VAR_6 < FUNC_7 (VAR_14[VAR_15].block))
            break;
        }

      if (--VAR_15 >= 0)
        {
          VAR_6 -= FUNC_7 (VAR_14[VAR_15].block);
          if (VAR_6 >= FUNC_6 (VAR_14[VAR_15].len)) {
       FUNC_5 (VAR_12);
            return 0;
          } else
            {
              grub_disk_addr_t VAR_16;

              VAR_16 = FUNC_6 (VAR_14[VAR_15].start_hi);
              VAR_16 = (VAR_16 << 32) + FUNC_7 (VAR_14[VAR_15].start);
              FUNC_5 (VAR_12);

              return VAR_6 + VAR_16;
            }
        }
      else
        {
          FUNC_3 (VAR_1, "something wrong with extent");
          FUNC_5 (VAR_12);
          return -1;
        }
    }

  if (VAR_6 < VAR_3) {
    VAR_9 = FUNC_7 (VAR_8->blocks.dir_blocks[VAR_6]);

  } else if (VAR_6 < VAR_3 + VAR_10 / 4)
    {
      grub_uint32_t *VAR_17;

      VAR_17 = FUNC_8 (VAR_10);
      if (! VAR_17) {
 return VAR_4;
}

      if (FUNC_2 (VAR_7->disk,
     ((grub_disk_addr_t)
      FUNC_7 (VAR_8->blocks.indir_block))
     << VAR_11,
     0, VAR_10, VAR_17)) {
 return VAR_4;
}

      VAR_9 = FUNC_7 (VAR_17[VAR_6 - VAR_3]);
      FUNC_5 (VAR_17);
    }

  else if (VAR_6 < (grub_disk_addr_t)(VAR_3 + VAR_10 / 4) * (grub_disk_addr_t)(VAR_10 / 4 + 1))

    {
      unsigned int VAR_18 = VAR_10 / 4;
      unsigned int VAR_19 = VAR_6 - (VAR_3
      + VAR_10 / 4);
      grub_uint32_t *VAR_20;

      VAR_20 = FUNC_8 (VAR_10);
      if (! VAR_20) {
 return VAR_4;
}

      if (FUNC_2 (VAR_7->disk,
     ((grub_disk_addr_t)
      FUNC_7 (VAR_8->blocks.double_indir_block))
     << VAR_11,
     0, VAR_10, VAR_20)) {
 return VAR_4;
}

      if (FUNC_2 (VAR_7->disk,
     ((grub_disk_addr_t)
      FUNC_7 (VAR_20[VAR_19 / VAR_18]))
     << VAR_11,
     0, VAR_10, VAR_20)) {
 return VAR_4;
}

      VAR_9 = FUNC_7 (VAR_20[VAR_19 % VAR_18]);
      FUNC_5 (VAR_20);
    }

  else
    {
      FUNC_3 (VAR_2,
    "ext2fs doesn't support triple indirect blocks");
    }

  return VAR_9;
}
