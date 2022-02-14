
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct grub_sfs_data {int blocksize; int disk; } ;
typedef TYPE_1__* grub_fshelp_node_t ;
struct TYPE_3__ {int block; struct grub_sfs_data* data; } ;


 int FUNC_0 (int ,int ,int ,int ,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (char*) ;

__attribute__((used)) static char *
FUNC_4 (grub_fshelp_node_t VAR_1)
{
  struct grub_sfs_data *VAR_2 = VAR_1->data;
  char *VAR_3;
  char *VAR_4;

  VAR_4 = FUNC_2 (VAR_2->blocksize);
  if (!VAR_4)
    return 0;

  FUNC_0 (VAR_2->disk, VAR_1->block, 0, VAR_2->blocksize, VAR_4);
  if (VAR_0)
    {
      FUNC_1 (VAR_4);
      return 0;
    }



  VAR_3 = FUNC_3 (&VAR_4[24]);
  FUNC_1 (VAR_4);
  if (!VAR_3)
    return 0;

  return VAR_3;
}
