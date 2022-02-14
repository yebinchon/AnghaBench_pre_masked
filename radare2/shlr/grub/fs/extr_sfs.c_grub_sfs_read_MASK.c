
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct grub_sfs_data {int diropen; } ;
typedef int grub_ssize_t ;
typedef int grub_size_t ;
typedef TYPE_1__* grub_file_t ;
struct TYPE_3__ {int offset; int flags; int closure; int read_hook; scalar_t__ data; } ;


 int FUNC_0 (int *,int ,int ,int ,int ,int ,char*) ;

__attribute__((used)) static grub_ssize_t
FUNC_1 (grub_file_t VAR_0, char *VAR_1, grub_size_t VAR_2)
{
  struct grub_sfs_data *VAR_3 = (struct grub_sfs_data *) VAR_0->data;

  int VAR_4 = FUNC_0 (&VAR_3->diropen, VAR_0->read_hook,
     VAR_0->closure, VAR_0->flags,
     VAR_0->offset, VAR_2, VAR_1);

  return VAR_4;
}
