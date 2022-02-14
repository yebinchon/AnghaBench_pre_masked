
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct grub_fs_block {scalar_t__ length; scalar_t__ offset; } ;
typedef int grub_ssize_t ;
typedef scalar_t__ grub_size_t ;
typedef scalar_t__ grub_off_t ;
typedef TYPE_2__* grub_file_t ;
struct TYPE_5__ {scalar_t__ size; scalar_t__ offset; int flags; TYPE_1__* device; struct grub_fs_block* data; } ;
struct TYPE_4__ {int disk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__,scalar_t__,char*,int ) ;
 int FUNC_1 (int ,int ,scalar_t__,scalar_t__,char*) ;

__attribute__((used)) static grub_ssize_t
FUNC_2 (int VAR_1, grub_file_t VAR_2, char *VAR_3, grub_size_t VAR_4)
{
  struct grub_fs_block *VAR_5;
  grub_off_t VAR_6;
  grub_ssize_t VAR_7 = 0;

  if (VAR_4 > VAR_2->size - VAR_2->offset)
    VAR_4 = VAR_2->size - VAR_2->offset;

  VAR_6 = VAR_2->offset;
  for (VAR_5 = VAR_2->data; VAR_5->length && VAR_4 > 0; VAR_5++)
    {
      if (VAR_6 < VAR_5->length)
 {
   grub_size_t VAR_8;

   VAR_8 = VAR_4;
   if (VAR_6 + VAR_8 > VAR_5->length)
     VAR_8 = VAR_5->length - VAR_6;

   if (VAR_3 && (VAR_1) ?
        FUNC_1 (VAR_2->device->disk, 0, VAR_5->offset + VAR_6,
    VAR_8, VAR_3) :
        FUNC_0 (VAR_2->device->disk, 0, VAR_5->offset + VAR_6,
      VAR_8, VAR_3, VAR_2->flags) != VAR_0)
     return -1;

   VAR_7 += VAR_8;
   VAR_4 -= VAR_8;
   if (VAR_3)
     VAR_3 += VAR_8;
   VAR_6 += VAR_8;
 }
      VAR_6 -= VAR_5->length;
    }

  return VAR_7;
}
