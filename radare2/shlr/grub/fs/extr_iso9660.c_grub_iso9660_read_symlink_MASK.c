
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct grub_iso9660_read_symlink_closure {char* symlink; scalar_t__ addslash; } ;
struct grub_iso9660_dir {int namelen; int len; } ;
typedef TYPE_1__* grub_fshelp_node_t ;
typedef int dirent ;
struct TYPE_5__ {int susp_skip; int disk; } ;
struct TYPE_4__ {scalar_t__ dir_off; int dir_blk; TYPE_2__* data; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__,int,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,scalar_t__,int,int ,struct grub_iso9660_read_symlink_closure*) ;
 char* FUNC_3 (int) ;
 int VAR_0 ;

__attribute__((used)) static char *
FUNC_4 (grub_fshelp_node_t VAR_1)
{
  struct grub_iso9660_dir VAR_2;
  int VAR_3;
  int VAR_4;
  struct grub_iso9660_read_symlink_closure VAR_5;

  if (FUNC_0 (VAR_1->data->disk, VAR_1->dir_blk, VAR_1->dir_off,
        sizeof (VAR_2), (char *) &VAR_2))
    return 0;

  VAR_3 = (sizeof (VAR_2) + VAR_2.namelen + 1 - (VAR_2.namelen % 2)
      + VAR_1->data->susp_skip);
  VAR_4 = VAR_2.len - VAR_3;

  VAR_5.symlink = FUNC_3 (1);
  if (!VAR_5.symlink)
    return 0;

  *VAR_5.symlink = '\0';

  VAR_5.addslash = 0;
  if (FUNC_2 (VAR_1->data, VAR_1->dir_blk,
     VAR_1->dir_off + VAR_3,
     VAR_4, VAR_0, &VAR_5))
    {
      FUNC_1 (VAR_5.symlink);
      return 0;
    }

  return VAR_5.symlink;
}
