
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct grub_xfs_sblock {int dummy; } ;
struct grub_xfs_inode {int dummy; } ;
struct TYPE_3__ {int inode_read; int inode; int ino; struct grub_xfs_data* data; } ;
struct TYPE_4__ {int log2_inode; int agsize; int bsize; int rootino; scalar_t__ magic; } ;
struct grub_xfs_data {TYPE_1__ diropen; scalar_t__ pos; int disk; TYPE_2__ sblock; void* agsize; void* bsize; } ;
typedef int grub_disk_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int,TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct grub_xfs_data*) ;
 struct grub_xfs_data* FUNC_4 (struct grub_xfs_data*,int) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 int FUNC_6 (struct grub_xfs_data*,int ,int *) ;
 struct grub_xfs_data* FUNC_7 (int) ;

__attribute__((used)) static struct grub_xfs_data *
FUNC_8 (grub_disk_t VAR_3)
{
  struct grub_xfs_data *VAR_4 = 0;

  VAR_4 = FUNC_7 (sizeof (struct grub_xfs_data));
  if (!VAR_4)
    return 0;


  if (FUNC_1 (VAR_3, 0, 0,
        sizeof (struct grub_xfs_sblock), &VAR_4->sblock))
    goto fail;

  if (FUNC_5 ((char *) (VAR_4->sblock.magic), "XFSB", 4))
    {
      FUNC_2 (VAR_0, "not a XFS filesystem");
      goto fail;
    }

  VAR_4 = FUNC_4 (VAR_4,
         sizeof (struct grub_xfs_data)
         - sizeof (struct grub_xfs_inode)
         + (1 << VAR_4->sblock.log2_inode));

  if (! VAR_4)
    goto fail;

  VAR_4->diropen.data = VAR_4;
  VAR_4->diropen.ino = VAR_4->sblock.rootino;
  VAR_4->diropen.inode_read = 1;
  VAR_4->bsize = FUNC_0 (VAR_4->sblock.bsize);
  VAR_4->agsize = FUNC_0 (VAR_4->sblock.agsize);

  VAR_4->disk = VAR_3;
  VAR_4->pos = 0;

  FUNC_6 (VAR_4, VAR_4->diropen.ino, &VAR_4->diropen.inode);

  return VAR_4;
 fail:

  if (VAR_2 == VAR_1)
    FUNC_2 (VAR_0, "not an XFS filesystem");

  FUNC_3 (VAR_4);

  return 0;
}
