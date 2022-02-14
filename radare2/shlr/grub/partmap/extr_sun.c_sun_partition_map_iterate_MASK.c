
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct grub_sun_partition_descriptor {int num_sectors; int start_cylinder; } ;
struct grub_sun_block {int nsect; int ntrks; struct grub_sun_partition_descriptor* partitions; TYPE_1__* infos; int magic; } ;
struct grub_partition {int dummy; } ;
typedef int grub_uint64_t ;
typedef TYPE_2__* grub_partition_t ;
typedef scalar_t__ grub_err_t ;
typedef int grub_disk_t ;
struct TYPE_5__ {int start; int number; int index; scalar_t__ len; int * partmap; } ;
struct TYPE_4__ {scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int,struct grub_sun_block*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct grub_sun_block*) ;
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
  struct grub_sun_block VAR_13;
  int VAR_14;
  grub_err_t VAR_15;

  VAR_12 = (grub_partition_t) FUNC_6 (sizeof (struct grub_partition));
  if (! VAR_12)
    return VAR_4;

  VAR_12->partmap = &VAR_5;
  VAR_15 = FUNC_2 (VAR_6, 0, 0, sizeof (struct grub_sun_block),
   &VAR_13);
  if (VAR_15)
    {
      FUNC_4 (VAR_12);
      return VAR_15;
    }

  if (VAR_1 != FUNC_0 (VAR_13.magic))
    {
      FUNC_4 (VAR_12);
      return FUNC_3 (VAR_0, "not a sun partition table");
    }

  if (! FUNC_5 (&VAR_13))
    {
      FUNC_4 (VAR_12);
      return FUNC_3 (VAR_0, "invalid checksum");
    }



  for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++)
    {
      struct grub_sun_partition_descriptor *VAR_16;

      if (VAR_13.infos[VAR_14].id == 0
   || VAR_13.infos[VAR_14].id == VAR_3)
 continue;

      VAR_16 = &VAR_13.partitions[VAR_14];
      VAR_12->start = ((grub_uint64_t) FUNC_1 (VAR_16->start_cylinder)
    * FUNC_0 (VAR_13.ntrks)
    * FUNC_0 (VAR_13.nsect));
      VAR_12->len = FUNC_1 (VAR_16->num_sectors);
      VAR_12->number = VAR_12->index = VAR_14;
      if (VAR_12->len)
 {
   if (VAR_7 (VAR_6, VAR_12, VAR_11))
     VAR_14 = VAR_2;
 }
    }

  FUNC_4 (VAR_12);

  return VAR_4;
}
