
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct grub_jfs_leaf_next_dirent {int dummy; } ;
struct TYPE_12__ {int blk2; } ;
struct grub_jfs_internal_dirent {TYPE_5__ ex; } ;
struct TYPE_10__ {size_t* sorted; int count; } ;
struct TYPE_11__ {TYPE_3__ header; scalar_t__ dirents; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_9__ {TYPE_1__ tree; } ;
struct grub_jfs_inode {TYPE_4__ dir; TYPE_2__ file; int mode; } ;
struct TYPE_14__ {int flags; int sindex; int count; } ;
struct grub_jfs_diropen {char* sorted; TYPE_7__ header; struct grub_jfs_diropen* dirpage; int count; struct grub_jfs_leaf_next_dirent* next_dirent; struct grub_jfs_leaf_next_dirent* next_leaf; scalar_t__ dirent; scalar_t__ leaf; struct grub_jfs_inode* inode; struct grub_jfs_data* data; } ;
struct TYPE_13__ {int log2_blksz; int blksz; } ;
struct grub_jfs_data {TYPE_6__ sblock; int disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int,int ,int,int*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct grub_jfs_diropen*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct grub_jfs_diropen* FUNC_5 (int) ;
 struct grub_jfs_diropen* FUNC_6 (int) ;

__attribute__((used)) static struct grub_jfs_diropen *
FUNC_7 (struct grub_jfs_data *VAR_5, struct grub_jfs_inode *VAR_6)
{
  struct grub_jfs_internal_dirent *VAR_7;
  struct grub_jfs_diropen *VAR_8;
  int VAR_9;

  VAR_7 = (struct grub_jfs_internal_dirent *) VAR_6->dir.dirents;

  if (!((FUNC_4 (VAR_6->mode)
  & VAR_3) == VAR_2))
    {
      FUNC_1 (VAR_1, "not a directory");
      return 0;
    }

  VAR_8 = FUNC_6 (sizeof (struct grub_jfs_diropen));
  if (!VAR_8)
    return 0;

  VAR_8->data = VAR_5;
  VAR_8->inode = VAR_6;


  if (VAR_6->file.tree.flags & VAR_4)
    {
      VAR_8->leaf = VAR_6->dir.dirents;
      VAR_8->next_leaf = (struct grub_jfs_leaf_next_dirent *) VAR_7;
      VAR_8->sorted = (char *) (VAR_6->dir.header.sorted);
      VAR_8->count = VAR_6->dir.header.count;

      return VAR_8;
    }

  VAR_8->dirpage = FUNC_5 (FUNC_4 (VAR_5->sblock.blksz));
  if (!VAR_8->dirpage)
    {
      FUNC_2 (VAR_8);
      return 0;
    }

  VAR_9 = FUNC_4 (VAR_7[VAR_6->dir.header.sorted[0]].ex.blk2);
  VAR_9 <<= (FUNC_3 (VAR_5->sblock.log2_blksz) - VAR_0);


  do
    {
      int VAR_10;
      if (FUNC_0 (VAR_5->disk, VAR_9, 0,
     FUNC_4 (VAR_5->sblock.blksz),
     VAR_8->dirpage->sorted))
 {
   FUNC_2 (VAR_8->dirpage);
   FUNC_2 (VAR_8);
   return 0;
 }

      VAR_7 = (struct grub_jfs_internal_dirent *) VAR_8->dirpage->dirent;
      VAR_10 = VAR_8->dirpage->sorted[VAR_8->dirpage->header.sindex * 32];
      VAR_9 = (FUNC_4 (VAR_7[VAR_10].ex.blk2)
      << (FUNC_3 (VAR_5->sblock.log2_blksz)
   - VAR_0));
    } while (!(VAR_8->dirpage->header.flags & VAR_4));

  VAR_8->leaf = VAR_8->dirpage->dirent;
  VAR_8->next_leaf = VAR_8->dirpage->next_dirent;
  VAR_8->sorted = &VAR_8->dirpage->sorted[VAR_8->dirpage->header.sindex * 32];
  VAR_8->count = VAR_8->dirpage->header.count;

  return VAR_8;
}
