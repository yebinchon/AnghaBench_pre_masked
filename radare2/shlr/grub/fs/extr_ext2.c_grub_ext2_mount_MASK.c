
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct grub_ext2_sblock {int dummy; } ;
struct TYPE_3__ {int ino; int inode_read; int inode; struct grub_ext2_data* data; } ;
struct TYPE_4__ {int feature_incompat; int magic; } ;
struct grub_ext2_data {int * inode; TYPE_1__ diropen; int disk; TYPE_2__ sblock; } ;
typedef int grub_disk_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int,int ,int,TYPE_2__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct grub_ext2_data*,int,int *) ;
 int FUNC_3 (struct grub_ext2_data*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct grub_ext2_data* FUNC_6 (int) ;

__attribute__((used)) static struct grub_ext2_data *
FUNC_7 (grub_disk_t VAR_6)
{
  struct grub_ext2_data *VAR_7;

  VAR_7 = FUNC_6 (sizeof (struct grub_ext2_data));
  if (!VAR_7)
    return 0;


  FUNC_0 (VAR_6, 1 * 2, 0, sizeof (struct grub_ext2_sblock),
                  &VAR_7->sblock);
  if (VAR_5)
    goto fail;


  if (FUNC_4 (VAR_7->sblock.magic) != VAR_2)
    {
      FUNC_1 (VAR_3, "not an ext2 filesystem");
      goto fail;
    }


  if (FUNC_5 (VAR_7->sblock.feature_incompat)
        & ~(VAR_1 | VAR_0))
    {
      FUNC_1 (VAR_3, "filesystem has unsupported incompatible features");
      goto fail;
    }


  VAR_7->disk = VAR_6;

  VAR_7->diropen.data = VAR_7;
  VAR_7->diropen.ino = 2;
  VAR_7->diropen.inode_read = 1;

  VAR_7->inode = &VAR_7->diropen.inode;

  FUNC_2 (VAR_7, 2, VAR_7->inode);
  if (VAR_5)
    goto fail;

  return VAR_7;

 fail:
  if (VAR_5 == VAR_4)
    FUNC_1 (VAR_3, "not an ext2 filesystem");

  FUNC_3 (VAR_7);
  return 0;
}
