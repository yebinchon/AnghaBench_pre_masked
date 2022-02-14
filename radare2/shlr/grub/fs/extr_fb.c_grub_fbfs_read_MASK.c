
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct grub_fb_data {scalar_t__ pri_size; scalar_t__ ofs; struct fbm_file* ptr; } ;
struct fbm_file {scalar_t__ data_start; } ;
typedef int grub_uint32_t ;
typedef int grub_ssize_t ;
typedef int grub_size_t ;
typedef TYPE_2__* grub_file_t ;
typedef scalar_t__ grub_err_t ;
typedef TYPE_3__* grub_disk_t ;
struct TYPE_9__ {scalar_t__ read_hook; int closure; } ;
struct TYPE_8__ {scalar_t__ offset; int flags; struct grub_fb_data* data; int closure; scalar_t__ read_hook; TYPE_1__* device; } ;
struct TYPE_7__ {TYPE_3__* disk; } ;


 scalar_t__ FUNC_0 (TYPE_3__*,int,int,int,char*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,scalar_t__,scalar_t__,int,char*,int ) ;

__attribute__((used)) static grub_ssize_t
FUNC_2 (grub_file_t VAR_0, char *VAR_1, grub_size_t VAR_2)
{
  struct fbm_file *VAR_3;
  grub_disk_t VAR_4;
  grub_uint32_t VAR_5;
  grub_size_t VAR_6, VAR_7;
  struct grub_fb_data *VAR_8;

  VAR_4 = VAR_0->device->disk;
  VAR_4->read_hook = VAR_0->read_hook;
  VAR_4->closure = VAR_0->closure;

  VAR_8 = VAR_0->data;
  VAR_3 = VAR_8->ptr;
  if (VAR_3->data_start >= VAR_8->pri_size)
    {
      grub_err_t VAR_9;

      VAR_9 = FUNC_1 (VAR_4, VAR_3->data_start - VAR_8->ofs,
          VAR_0->offset, VAR_2, VAR_1, VAR_0->flags);
      VAR_4->read_hook = 0;
      return (VAR_9) ? -1 : (grub_ssize_t) VAR_2;
    }

  VAR_5 = VAR_3->data_start + ((grub_uint32_t) VAR_0->offset / 510) - VAR_8->ofs;
  VAR_7 = ((grub_uint32_t) VAR_0->offset % 510);
  VAR_6 = VAR_2;
  while (VAR_2)
    {
      int VAR_10;

      VAR_10 = VAR_2;
      if (VAR_7 + VAR_10 > 510)
 VAR_10 = 510 - VAR_7;
      if (FUNC_0 (VAR_4, VAR_5, VAR_7, VAR_10, VAR_1))
 {
   VAR_6 = -1;
   break;
 }
      VAR_5++;
      if (VAR_1)
 VAR_1 += VAR_10;
      VAR_2 -= VAR_10;
      VAR_7 = 0;
    }

  VAR_4->read_hook = 0;
  return VAR_6;
}
