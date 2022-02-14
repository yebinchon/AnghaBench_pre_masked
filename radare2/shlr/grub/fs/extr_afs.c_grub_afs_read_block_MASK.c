
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct grub_afs_sblock {int block_size; } ;
struct grub_afs_blockrun {int len; } ;
struct grub_afs_datastream {struct grub_afs_blockrun double_indirect; int max_indirect_range; struct grub_afs_blockrun indirect; int max_direct_range; struct grub_afs_blockrun* direct; } ;
typedef int indir ;
typedef TYPE_3__* grub_fshelp_node_t ;
typedef scalar_t__ grub_disk_addr_t ;
typedef int grub_afs_off_t ;
struct TYPE_5__ {struct grub_afs_datastream stream; } ;
struct TYPE_7__ {TYPE_2__* data; TYPE_1__ inode; } ;
struct TYPE_6__ {int disk; struct grub_afs_sblock sblock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct grub_afs_sblock*,struct grub_afs_blockrun*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int,int ,int,struct grub_afs_blockrun*) ;

__attribute__((used)) static grub_disk_addr_t
FUNC_4 (grub_fshelp_node_t VAR_3, grub_disk_addr_t VAR_4)
{
  struct grub_afs_sblock *VAR_5 = &VAR_3->data->sblock;
  struct grub_afs_datastream *VAR_6 = &VAR_3->inode.stream;

  if (VAR_4 < FUNC_2 (VAR_6->max_direct_range))
    {
      int VAR_7;

      for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
        {
          if (VAR_4 < FUNC_1 (VAR_6->direct[VAR_7].len))
            return FUNC_0 (VAR_5, &VAR_6->direct[VAR_7]) + VAR_4;
          VAR_4 -= FUNC_1 (VAR_6->direct[VAR_7].len);
        }
    }
  else if (VAR_4 < FUNC_2 (VAR_6->max_indirect_range))
    {
      int VAR_8 = VAR_5->block_size / sizeof (struct grub_afs_blockrun);
      struct grub_afs_blockrun VAR_9[VAR_8];
      grub_afs_off_t VAR_10 = FUNC_0 (VAR_5, &VAR_6->indirect);
      int VAR_11;

      VAR_4 -= FUNC_2 (VAR_6->max_direct_range);
      for (VAR_11 = 0; VAR_11 < VAR_6->indirect.len; VAR_11++, VAR_10++)
        {
          int VAR_12;

          if (FUNC_3 (VAR_3->data->disk,
                              VAR_10 * (VAR_5->block_size >> VAR_2),
                              0, sizeof (VAR_9),
                              VAR_9))
            return 0;

          for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
            {
              if (VAR_4 < FUNC_1 (VAR_9[VAR_12].len))
                return FUNC_0 (VAR_5, &VAR_9[VAR_12]) + VAR_4;

              VAR_4 -= FUNC_1 (VAR_9[VAR_12].len);
            }
        }
    }
  else
    {
      int VAR_13 = VAR_5->block_size / sizeof (struct grub_afs_blockrun);
      struct grub_afs_blockrun VAR_14[VAR_13];


      int VAR_15 = VAR_4 - FUNC_2 (VAR_6->max_indirect_range);

      int VAR_16 = VAR_0;
      int VAR_17 = VAR_16 * VAR_13;
      int VAR_18 = VAR_17 * VAR_0;
      int VAR_19 = VAR_18 * VAR_13;

      int VAR_20 = VAR_15 % VAR_0;
      int VAR_21 = (VAR_15 / VAR_16) % VAR_13;
      int VAR_22 = (VAR_15 / VAR_17) % VAR_0;
      int VAR_23 = (VAR_15 / VAR_18) % VAR_13;
      int VAR_24 = (VAR_15 / VAR_19);

      if (FUNC_3 (VAR_3->data->disk,
                          (FUNC_0 (VAR_5, &VAR_6->double_indirect)
                           + VAR_24) *
                          (VAR_5->block_size >> VAR_2),
                          0, sizeof (VAR_14),
                          VAR_14))
        return 0;

      if (FUNC_3 (VAR_3->data->disk,
                          (FUNC_0 (VAR_5, &VAR_14[VAR_23]) + VAR_22) *
                          (VAR_5->block_size >> VAR_2),
                          0, sizeof (VAR_14),
                          VAR_14))
        return 0;

      return FUNC_0 (VAR_5, &VAR_14[VAR_21]) + VAR_20;
    }

  return 0;
}
