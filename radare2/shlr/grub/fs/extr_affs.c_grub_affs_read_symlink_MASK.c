
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct grub_affs_data {int blocksize; int disk; } ;
typedef TYPE_1__* grub_fshelp_node_t ;
struct TYPE_3__ {int block; struct grub_affs_data* data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,char*) ;
 int FUNC_2 (char*,char*,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static char *
FUNC_5 (grub_fshelp_node_t VAR_2)
{
  struct grub_affs_data *VAR_3 = VAR_2->data;
  char *VAR_4;

  VAR_4 = FUNC_4 (FUNC_0 (VAR_3->blocksize));
  if (!VAR_4)
    return 0;

  FUNC_1 (VAR_3->disk, VAR_2->block, VAR_0,
    FUNC_0 (VAR_3->blocksize), VAR_4);
  if (VAR_1)
    {
      FUNC_3 (VAR_4);
      return 0;
    }
  FUNC_2 ("affs", "Symlink: `%s'\n", VAR_4);
  return VAR_4;
}
