
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grub_ufs_sblock {int dummy; } ;
struct TYPE_2__ {int magic; } ;
struct grub_ufs_data {int be; TYPE_1__ sblock; scalar_t__ linknest; int disk; } ;
typedef int grub_disk_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,int,TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct grub_ufs_data*) ;
 scalar_t__ FUNC_4 (int ) ;
 struct grub_ufs_data* FUNC_5 (int) ;
 int* VAR_5 ;

__attribute__((used)) static struct grub_ufs_data *
FUNC_6 (grub_disk_t VAR_6)
{
  struct grub_ufs_data *VAR_7;
  int *VAR_8 = VAR_5;

  VAR_7 = FUNC_5 (sizeof (struct grub_ufs_data));
  if (!VAR_7)
    return 0;

  VAR_7->disk = VAR_6;
  VAR_7->linknest = 0;

  while (*VAR_8 != -1)
    {
      FUNC_1 (VAR_6, *VAR_8, 0, sizeof (struct grub_ufs_sblock),
        &VAR_7->sblock);
      if (VAR_4)
 goto fail;

      if (FUNC_4 (VAR_7->sblock.magic) == VAR_3)
 {
   VAR_7->be = 0;
   return VAR_7;
 }
      else if (FUNC_0 (VAR_7->sblock.magic) == VAR_3)
 {
   VAR_7->be = 1;
   return VAR_7;
 }
      VAR_8++;
    }

 fail:

  if (VAR_4 == VAR_1 || VAR_4 == VAR_2)
    {



      FUNC_2 (VAR_0, "not an ufs1 filesystem");

    }

  FUNC_3 (VAR_7);

  return 0;
}
