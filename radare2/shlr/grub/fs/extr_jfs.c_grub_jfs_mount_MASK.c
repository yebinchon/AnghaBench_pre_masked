
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grub_jfs_sblock {int dummy; } ;
struct grub_jfs_inode {int dummy; } ;
struct TYPE_2__ {scalar_t__ magic; } ;
struct grub_jfs_data {TYPE_1__ fileset; int disk; scalar_t__ linknest; scalar_t__ pos; TYPE_1__ sblock; } ;
typedef int grub_disk_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int,TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct grub_jfs_data*) ;
 struct grub_jfs_data* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static struct grub_jfs_data *
FUNC_5 (grub_disk_t VAR_5)
{
  struct grub_jfs_data *VAR_6 = 0;

  VAR_6 = FUNC_3 (sizeof (struct grub_jfs_data));
  if (!VAR_6)
    return 0;


  if (FUNC_0 (VAR_5, VAR_3, 0,
        sizeof (struct grub_jfs_sblock), &VAR_6->sblock))
    goto fail;

  if (FUNC_4 ((char *) (VAR_6->sblock.magic), "JFS1", 4))
    {
      FUNC_1 (VAR_0, "not a JFS filesystem");
      goto fail;
    }

  VAR_6->disk = VAR_5;
  VAR_6->pos = 0;
  VAR_6->linknest = 0;


  if (FUNC_0 (VAR_6->disk, VAR_2, 0,
        sizeof (struct grub_jfs_inode), &VAR_6->fileset))
    goto fail;

  return VAR_6;

 fail:
  FUNC_2 (VAR_6);

  if (VAR_4 == VAR_1)
    FUNC_1 (VAR_0, "not a JFS filesystem");

  return 0;
}
