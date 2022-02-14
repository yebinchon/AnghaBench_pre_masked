
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct grub_fs_block {int offset; int length; } ;
typedef TYPE_2__* grub_file_t ;
typedef scalar_t__ grub_err_t ;
typedef TYPE_3__* grub_disk_t ;
struct TYPE_7__ {int total_sectors; } ;
struct TYPE_6__ {int size; struct grub_fs_block* data; TYPE_1__* device; } ;
struct TYPE_5__ {TYPE_3__* disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct grub_fs_block*) ;
 int FUNC_2 (char) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char**,int ) ;
 int FUNC_5 (char*,char**,int ) ;
 struct grub_fs_block* FUNC_6 (int) ;

__attribute__((used)) static grub_err_t
FUNC_7 (grub_file_t VAR_5, const char *VAR_6)
{
  char *VAR_7 = (char *) VAR_6;
  unsigned VAR_8 = 0;
  unsigned VAR_9;
  grub_disk_t VAR_10 = VAR_5->device->disk;
  struct grub_fs_block *VAR_11;


  do
    {
      VAR_8++;
      VAR_7 = FUNC_3 (VAR_7, ',');
      if (VAR_7)
 VAR_7++;
    }
  while (VAR_7);


  VAR_11 = FUNC_6 (sizeof (struct grub_fs_block) * (VAR_8 + 1));
  if (! VAR_11)
    return 0;

  VAR_5->size = 0;
  VAR_7 = (char *) VAR_6;
  if (! *VAR_7)
    {
      VAR_11[0].offset = 0;
      VAR_11[0].length = (VAR_10->total_sectors == VAR_3) ?
 VAR_3 : (VAR_10->total_sectors << 9);
      VAR_5->size = VAR_11[0].length;
    }
  else for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
    {
      if (*VAR_7 != '+')
 {
   VAR_11[VAR_9].offset = FUNC_5 (VAR_7, &VAR_7, 0);
   if (VAR_4 != VAR_2 || *VAR_7 != '+')
     {
       FUNC_0 (VAR_1,
     "invalid file name `%s'", VAR_6);
       goto fail;
     }
 }

      VAR_7++;
      VAR_11[VAR_9].length = FUNC_4 (VAR_7, &VAR_7, 0);
      if (VAR_4 != VAR_2
   || VAR_11[VAR_9].length == 0
   || (*VAR_7 && *VAR_7 != ',' && ! FUNC_2 (*VAR_7)))
 {
   FUNC_0 (VAR_1,
        "invalid file name `%s'", VAR_6);
   goto fail;
 }

      if (VAR_10->total_sectors < VAR_11[VAR_9].offset + VAR_11[VAR_9].length)
 {
   FUNC_0 (VAR_1, "beyond the total sectors");
   goto fail;
 }

      VAR_11[VAR_9].offset <<= VAR_0;
      VAR_11[VAR_9].length <<= VAR_0;
      VAR_5->size += VAR_11[VAR_9].length;
      VAR_7++;
    }

  VAR_5->data = VAR_11;

  return VAR_2;

 fail:
  FUNC_1 (VAR_11);
  return VAR_4;
}
