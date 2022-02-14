
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grub_nilfs2_super_root {int dummy; } ;
struct grub_nilfs2_super_block {int dummy; } ;
struct grub_nilfs2_segment_summary {int ss_nblocks; int s_last_pseg; } ;
struct grub_nilfs2_inode {int dummy; } ;
struct TYPE_2__ {int ino; int inode_read; int inode; struct grub_nilfs2_data* data; } ;
struct grub_nilfs2_data {int * inode; TYPE_1__ diropen; int ifile; int disk; struct grub_nilfs2_segment_summary sroot; struct grub_nilfs2_segment_summary sblock; } ;
struct grub_nilfs2_checkpoint {int cp_ifile_inode; } ;
typedef unsigned int grub_uint64_t ;
typedef int grub_uint32_t ;
typedef int grub_disk_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct grub_nilfs2_data*) ;
 int FUNC_1 (int ,unsigned int,int ,int,struct grub_nilfs2_segment_summary*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct grub_nilfs2_data*) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;
 struct grub_nilfs2_data* FUNC_6 (int) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (struct grub_nilfs2_data*,int,int *) ;
 int FUNC_9 (struct grub_nilfs2_data*,struct grub_nilfs2_checkpoint*) ;
 int FUNC_10 (struct grub_nilfs2_segment_summary*) ;

__attribute__((used)) static struct grub_nilfs2_data *
FUNC_11 (grub_disk_t VAR_3)
{
  struct grub_nilfs2_data *VAR_4;
  struct grub_nilfs2_segment_summary VAR_5;
  struct grub_nilfs2_checkpoint VAR_6;
  grub_uint64_t VAR_7;
  grub_uint32_t VAR_8;
  unsigned int VAR_9;

  VAR_4 = FUNC_6 (sizeof (struct grub_nilfs2_data));
  if (!VAR_4)
    return 0;


  FUNC_1 (VAR_3, 1 * 2, 0, sizeof (struct grub_nilfs2_super_block),
    &VAR_4->sblock);
  if (VAR_2)
    goto fail;


  if (!FUNC_10 (&VAR_4->sblock))
    {
      FUNC_2 (VAR_0, "not a nilfs2 filesystem");
      goto fail;
    }

  VAR_9 = (1 << FUNC_0 (VAR_4));


  VAR_7 = FUNC_5 (VAR_4->sblock.s_last_pseg);
  FUNC_1 (VAR_3, VAR_7 * VAR_9, 0,
    sizeof (struct grub_nilfs2_segment_summary), &VAR_5);

  if (VAR_2)
    goto fail;


  VAR_8 = FUNC_4 (VAR_5.ss_nblocks);
  FUNC_1 (VAR_3, (VAR_7 + (VAR_8 - 1)) * VAR_9, 0,
    sizeof (struct grub_nilfs2_super_root), &VAR_4->sroot);

  if (VAR_2)
    goto fail;

  VAR_4->disk = VAR_3;

  FUNC_9 (VAR_4, &VAR_6);

  if (VAR_2)
    goto fail;

  FUNC_7 (&VAR_4->ifile, &VAR_6.cp_ifile_inode,
        sizeof (struct grub_nilfs2_inode));

  VAR_4->diropen.data = VAR_4;
  VAR_4->diropen.ino = 2;
  VAR_4->diropen.inode_read = 1;
  VAR_4->inode = &VAR_4->diropen.inode;

  FUNC_8 (VAR_4, 2, VAR_4->inode);

  return VAR_4;

fail:
  if (VAR_2 == VAR_1)
    FUNC_2 (VAR_0, "not a nilfs2 filesystem");

  FUNC_3 (VAR_4);
  return 0;
}
