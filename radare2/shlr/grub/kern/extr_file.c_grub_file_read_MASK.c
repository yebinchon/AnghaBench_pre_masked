
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int grub_ssize_t ;
typedef int grub_size_t ;
typedef TYPE_2__* grub_file_t ;
struct TYPE_6__ {scalar_t__ offset; scalar_t__ size; TYPE_1__* fs; } ;
struct TYPE_5__ {int (* read ) (TYPE_2__*,void*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*,void*,int) ;

grub_ssize_t
FUNC_2 (grub_file_t VAR_1, void *VAR_2, grub_size_t VAR_3)
{
  grub_ssize_t VAR_4;

  if (VAR_1->offset > VAR_1->size)
    {
      FUNC_0 (VAR_0,
    "attempt to read past the end of file");
      return -1;
    }

  if (VAR_3 == 0 || VAR_3 > VAR_1->size - VAR_1->offset)
    VAR_3 = VAR_1->size - VAR_1->offset;


  if ((grub_ssize_t) VAR_3 < 0)
    VAR_3 >>= 1;

  if (VAR_3 == 0)
    return 0;

  VAR_4 = (VAR_1->fs->read) (VAR_1, VAR_2, VAR_3);
  if (VAR_4 > 0)
    VAR_1->offset += VAR_4;

  return VAR_4;
}
