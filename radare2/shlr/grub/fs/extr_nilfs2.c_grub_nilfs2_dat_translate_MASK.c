
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sr_dat; } ;
struct grub_nilfs2_data {TYPE_1__ sroot; int disk; } ;
struct grub_nilfs2_dat_entry {int de_blocknr; } ;
typedef int grub_uint64_t ;
typedef int grub_uint32_t ;
typedef int grub_disk_t ;


 int VAR_0 ;
 int FUNC_0 (struct grub_nilfs2_data*) ;
 int FUNC_1 (struct grub_nilfs2_data*) ;
 int FUNC_2 (int ,int,int ,int,struct grub_nilfs2_dat_entry*) ;
 int FUNC_3 (int,int ,int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct grub_nilfs2_data*,int *,int ,int ) ;
 int FUNC_7 (struct grub_nilfs2_data*,int,int) ;

__attribute__((used)) static grub_uint64_t
FUNC_8 (struct grub_nilfs2_data *VAR_1, grub_uint64_t VAR_2)
{
  struct grub_nilfs2_dat_entry VAR_3;
  grub_disk_t VAR_4 = VAR_1->disk;
  grub_uint64_t VAR_5;
  grub_uint32_t VAR_6, VAR_7;
  unsigned int VAR_8 = (1 << FUNC_0 (VAR_1));

  VAR_6 = FUNC_7 (VAR_1, VAR_2,
          sizeof (struct
           grub_nilfs2_dat_entry));

  FUNC_3 (VAR_2 * sizeof (struct grub_nilfs2_dat_entry),
   FUNC_1 (VAR_1), &VAR_7);

  VAR_5 = FUNC_6 (VAR_1, &VAR_1->sroot.sr_dat, VAR_6, 0);
  if (VAR_5 == (grub_uint64_t) - 1)
    {
      FUNC_4 (VAR_0, "btree lookup failure");
      return -1;
    }

  FUNC_2 (VAR_4, VAR_5 * VAR_8, VAR_7,
    sizeof (struct grub_nilfs2_dat_entry), &VAR_3);

  return FUNC_5 (VAR_3.de_blocknr);
}
