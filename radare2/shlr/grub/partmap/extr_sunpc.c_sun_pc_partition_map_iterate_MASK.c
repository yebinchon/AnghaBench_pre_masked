
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct grub_sun_pc_partition_descriptor {scalar_t__ id; int num_sectors; int start_sector; } ;
struct grub_sun_pc_block {struct grub_sun_pc_partition_descriptor* partitions; int magic; } ;
struct grub_partition {int dummy; } ;
typedef TYPE_1__* grub_partition_t ;
typedef scalar_t__ grub_err_t ;
typedef int grub_disk_t ;
struct TYPE_3__ {int number; void* len; void* start; int * partmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int,int ,int,struct grub_sun_pc_block*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct grub_sun_pc_block*) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static grub_err_t
FUNC_7 (grub_disk_t VAR_6,
         int (*VAR_7) (grub_disk_t VAR_8,
        const grub_partition_t VAR_9,
        void *VAR_10),
         void *VAR_11)
{
  grub_partition_t VAR_12;
  struct grub_sun_pc_block VAR_13;
  int VAR_14;
  grub_err_t VAR_15;

  VAR_12 = (grub_partition_t) FUNC_6 (sizeof (struct grub_partition));
  if (! VAR_12)
    return VAR_4;

  VAR_12->partmap = &VAR_5;
  VAR_15 = FUNC_0 (VAR_6, 1, 0, sizeof (struct grub_sun_pc_block), &VAR_13);
  if (VAR_15)
    {
      FUNC_2 (VAR_12);
      return VAR_15;
    }

  if (VAR_1 != FUNC_3 (VAR_13.magic))
    {
      FUNC_2 (VAR_12);
      return FUNC_1 (VAR_0,
    "not a sun_pc partition table");
    }

  if (! FUNC_5 (&VAR_13))
    {
      FUNC_2 (VAR_12);
      return FUNC_1 (VAR_0, "invalid checksum");
    }



  for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++)
    {
      struct grub_sun_pc_partition_descriptor *VAR_16;

      if (VAR_13.partitions[VAR_14].id == 0
   || VAR_13.partitions[VAR_14].id == VAR_3)
 continue;

      VAR_16 = &VAR_13.partitions[VAR_14];
      VAR_12->start = FUNC_4 (VAR_16->start_sector);
      VAR_12->len = FUNC_4 (VAR_16->num_sectors);
      VAR_12->number = VAR_14;
      if (VAR_12->len)
 {
   if (VAR_7 (VAR_6, VAR_12, VAR_11))
     VAR_14 = VAR_2;
 }
    }

  FUNC_2 (VAR_12);

  return VAR_4;
}
