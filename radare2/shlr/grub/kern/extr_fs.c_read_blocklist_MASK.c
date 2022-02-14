
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct read_blocklist_closure {scalar_t__ part_start; int num; int total_size; TYPE_1__* blocks; } ;
struct grub_fs_block {int dummy; } ;
typedef scalar_t__ grub_disk_addr_t ;
struct TYPE_3__ {scalar_t__ offset; scalar_t__ length; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_1 (grub_disk_addr_t VAR_2, unsigned VAR_3,
  unsigned VAR_4, void *VAR_5)
{
  struct read_blocklist_closure *VAR_6 = VAR_5;

  VAR_2 = ((VAR_2 - VAR_6->part_start) << VAR_1) + VAR_3;

  if ((VAR_6->num) &&
      (VAR_6->blocks[VAR_6->num - 1].offset + VAR_6->blocks[VAR_6->num - 1].length == VAR_2))
    {
      VAR_6->blocks[VAR_6->num - 1].length += VAR_4;
      goto quit;
    }

  if ((VAR_6->num & (VAR_0 - 1)) == 0)
    {
      VAR_6->blocks = FUNC_0 (VAR_6->blocks, (VAR_6->num + VAR_0) *
    sizeof (struct grub_fs_block));
      if (! VAR_6->blocks)
 return;
    }

  VAR_6->blocks[VAR_6->num].offset = VAR_2;
  VAR_6->blocks[VAR_6->num].length = VAR_4;
  VAR_6->num++;

 quit:
  VAR_6->total_size += VAR_4;
}
