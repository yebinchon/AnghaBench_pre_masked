
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct read_blocklist_closure {scalar_t__ total_size; scalar_t__ blocks; int part_start; scalar_t__ num; } ;
typedef TYPE_3__* grub_file_t ;
struct TYPE_11__ {int (* close ) (TYPE_3__*) ;} ;
struct TYPE_10__ {scalar_t__ size; int flags; scalar_t__ offset; scalar_t__ data; TYPE_5__* fs; scalar_t__ read_hook; struct read_blocklist_closure* closure; TYPE_2__* device; } ;
struct TYPE_9__ {TYPE_1__* disk; } ;
struct TYPE_8__ {int partition; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_5__ VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_3__*) ;

void
FUNC_4 (grub_file_t VAR_3)
{
  struct read_blocklist_closure VAR_4;

  if ((VAR_3->fs == &VAR_1) || (! VAR_3->device->disk) ||
      (! VAR_3->size))
    return;

  VAR_3->offset = 0;
  VAR_3->flags = 1;

  VAR_4.num = 0;
  VAR_4.blocks = 0;
  VAR_4.total_size = 0;
  VAR_4.part_start = FUNC_2 (VAR_3->device->disk->partition);
  VAR_3->read_hook = VAR_2;
  VAR_3->closure = &VAR_4;
  FUNC_0 (VAR_3, 0, VAR_3->size);
  VAR_3->read_hook = 0;
  if ((VAR_0) || (VAR_4.total_size != VAR_3->size))
    {
      VAR_0 = 0;
      FUNC_1 (VAR_4.blocks);
    }
  else
    {
      if (VAR_3->fs->close)
 (VAR_3->fs->close) (VAR_3);
      VAR_3->fs = &VAR_1;
      VAR_3->data = VAR_4.blocks;
    }

  VAR_3->offset = 0;
}
