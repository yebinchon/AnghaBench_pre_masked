
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct grub_fshelp_node {TYPE_3__* inode; int diropen; } ;
struct grub_file {scalar_t__ offset; struct grub_fshelp_node* data; int size; TYPE_1__* device; } ;
struct grub_afs_inode {int dummy; } ;
struct grub_afs_data {TYPE_3__* inode; int diropen; } ;
typedef scalar_t__ grub_err_t ;
struct TYPE_6__ {int size; } ;
struct TYPE_7__ {TYPE_2__ stream; } ;
struct TYPE_5__ {int disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct grub_fshelp_node* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct grub_fshelp_node*) ;
 int FUNC_5 (char const*,int *,struct grub_fshelp_node**,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_3__*,TYPE_3__**,int) ;
 int VAR_4 ;

__attribute__((used)) static grub_err_t
FUNC_7 (struct grub_file *VAR_5, const char *VAR_6)
{
  struct grub_afs_data *VAR_7;
  struct grub_fshelp_node *VAR_8 = 0;

  FUNC_2 (VAR_4);

  VAR_7 = FUNC_0 (VAR_5->device->disk);
  if (! VAR_7)
    goto fail;

  FUNC_5 (VAR_6, &VAR_7->diropen, &VAR_8, VAR_1, 0,
    VAR_2, VAR_0);
  if (VAR_3)
    goto fail;

  FUNC_6 (VAR_7->inode, &VAR_8->inode, sizeof (struct grub_afs_inode));
  FUNC_4 (VAR_8);

  VAR_5->size = FUNC_1 (VAR_7->inode->stream.size);
  VAR_5->data = VAR_7;
  VAR_5->offset = 0;

  return 0;

fail:
  FUNC_4 (VAR_7);

  FUNC_3 (VAR_4);

  return VAR_3;
}
