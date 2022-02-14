
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sr_cpfile; } ;
struct grub_nilfs2_data {TYPE_1__ sroot; int disk; } ;
struct grub_nilfs2_checkpoint {int dummy; } ;
typedef unsigned int grub_uint64_t ;
typedef int grub_uint32_t ;
typedef int grub_err_t ;
typedef int grub_disk_t ;


 int VAR_0 ;
 int FUNC_0 (struct grub_nilfs2_data*) ;
 int FUNC_1 (struct grub_nilfs2_data*) ;
 int FUNC_2 (int ,unsigned int,int,int,struct grub_nilfs2_checkpoint*) ;
 unsigned int FUNC_3 (unsigned int,int,int*) ;
 int FUNC_4 (int ,char*) ;
 unsigned int FUNC_5 (struct grub_nilfs2_data*,int *,unsigned int,int) ;

__attribute__((used)) static grub_err_t
FUNC_6 (struct grub_nilfs2_data *VAR_1,
        grub_uint64_t VAR_2,
        struct grub_nilfs2_checkpoint *VAR_3)
{
  grub_uint64_t VAR_4;
  grub_uint32_t VAR_5;
  grub_uint64_t VAR_6;
  grub_disk_t VAR_7 = VAR_1->disk;
  unsigned int VAR_8 = (1 << FUNC_0 (VAR_1));




  VAR_4 = FUNC_3 (VAR_2, FUNC_1 (VAR_1) /
      sizeof (struct grub_nilfs2_checkpoint), &VAR_5);

  VAR_6 = FUNC_5 (VAR_1, &VAR_1->sroot.sr_cpfile, VAR_4, 1);
  if (VAR_6 == (grub_uint64_t) - 1)
    {
      return FUNC_4 (VAR_0, "btree lookup failure");
    }

  return FUNC_2 (VAR_7, VAR_6 * VAR_8,
    VAR_5 * sizeof (struct grub_nilfs2_checkpoint),
    sizeof (struct grub_nilfs2_checkpoint), VAR_3);
}
