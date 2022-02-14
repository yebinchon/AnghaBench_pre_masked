
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int save_pos; } ;
struct grub_ntfs_file {TYPE_2__ attr; } ;
struct grub_ntfs_data {struct grub_ntfs_file cmft; } ;
typedef int grub_ssize_t ;
typedef int grub_size_t ;
typedef TYPE_1__* grub_file_t ;
struct TYPE_4__ {int flags; int closure; int read_hook; int offset; scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,int ,int ,int,int ,int ,int ) ;

__attribute__((used)) static grub_ssize_t
FUNC_1 (grub_file_t VAR_1, char *VAR_2, grub_size_t VAR_3)
{
  struct grub_ntfs_file *VAR_4;

  VAR_4 = &((struct grub_ntfs_data *) VAR_1->data)->cmft;
  if (VAR_1->read_hook)
    VAR_4->attr.save_pos = 1;

  FUNC_0 (&VAR_4->attr, VAR_2, VAR_1->offset, VAR_3, 1,
      VAR_1->read_hook, VAR_1->closure, VAR_1->flags);
  return (VAR_0) ? 0 : VAR_3;
}
