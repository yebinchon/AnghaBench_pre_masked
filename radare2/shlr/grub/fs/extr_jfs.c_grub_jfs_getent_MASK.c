
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


struct grub_jfs_leaf_next_dirent {int next; int namepart; } ;
struct grub_jfs_leaf_dirent {int len; int next; int inode; int namepart; } ;
struct grub_jfs_diropen {size_t index; size_t count; scalar_t__ name; struct grub_jfs_leaf_next_dirent* next_leaf; int ino; scalar_t__* sorted; struct grub_jfs_leaf_dirent* leaf; TYPE_7__* dirpage; TYPE_5__* data; TYPE_3__* inode; } ;
typedef int grub_uint8_t ;
typedef int grub_uint16_t ;
typedef int grub_err_t ;
struct TYPE_13__ {int sindex; size_t count; int nextb; } ;
struct TYPE_14__ {TYPE_6__ header; scalar_t__* sorted; struct grub_jfs_leaf_next_dirent* next_dirent; struct grub_jfs_leaf_dirent* dirent; } ;
struct TYPE_11__ {int blksz; int log2_blksz; } ;
struct TYPE_12__ {TYPE_4__ sblock; int disk; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_9__ {TYPE_1__ tree; } ;
struct TYPE_10__ {TYPE_2__ file; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int *,int*) ;
 scalar_t__ FUNC_1 (int ,unsigned int,int ,int ,scalar_t__*) ;
 int VAR_3 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 char* FUNC_5 (int *,int *,int) ;

__attribute__((used)) static grub_err_t
FUNC_6 (struct grub_jfs_diropen *VAR_4)
{
  int VAR_5 = 0;
  struct grub_jfs_leaf_dirent *VAR_6;
  struct grub_jfs_leaf_next_dirent *VAR_7;
  int VAR_8;
  int VAR_9;
  grub_uint16_t VAR_10[255];




  if (VAR_4->index == VAR_4->count)
    {
      unsigned int VAR_11;



      if ((VAR_4->inode->file.tree.flags & VAR_2)
   || !FUNC_4 (VAR_4->dirpage->header.nextb))
 return VAR_1;

      VAR_11 = FUNC_4 (VAR_4->dirpage->header.nextb);
      VAR_11 <<= (FUNC_2 (VAR_4->data->sblock.log2_blksz)
  - VAR_0);

      if (FUNC_1 (VAR_4->data->disk, VAR_11, 0,
     FUNC_3 (VAR_4->data->sblock.blksz),
     VAR_4->dirpage->sorted))
 return VAR_3;

      VAR_4->leaf = VAR_4->dirpage->dirent;
      VAR_4->next_leaf = VAR_4->dirpage->next_dirent;
      VAR_4->sorted = &VAR_4->dirpage->sorted[VAR_4->dirpage->header.sindex * 32];
      VAR_4->count = VAR_4->dirpage->header.count;
      VAR_4->index = 0;
    }

  VAR_6 = &VAR_4->leaf[(int) VAR_4->sorted[VAR_4->index]];

  VAR_8 = VAR_6->len;
  if (!VAR_8)
    {
      VAR_4->index++;
      return FUNC_6 (VAR_4);
    }

  FUNC_0 (VAR_6->namepart, VAR_8 < 11 ? VAR_8 : 11, VAR_10, &VAR_5);
  VAR_4->ino = FUNC_3 (VAR_6->inode);
  VAR_8 -= 11;


  VAR_9 = VAR_6->next;
  if (VAR_6->next != 255)
    do
      {
  VAR_7 = &VAR_4->next_leaf[VAR_9];
 FUNC_0 (VAR_7->namepart, VAR_8 < 15 ? VAR_8 : 15, VAR_10, &VAR_5);

 VAR_8 -= 15;
 VAR_9 = VAR_7->next;
      } while (VAR_7->next != 255 && VAR_8 > 0);

  VAR_4->index++;


  *FUNC_5 ((grub_uint8_t *) (VAR_4->name), VAR_10, VAR_5) = '\0';

  return 0;
}
