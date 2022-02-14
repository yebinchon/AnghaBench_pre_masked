
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grub_hfs_filerec {scalar_t__ type; int fileid; int size; int extents; int member_0; } ;
struct grub_hfs_data {void* fileid; void* size; int extents; } ;
struct grub_file {struct grub_hfs_data* data; scalar_t__ offset; void* size; TYPE_1__* device; } ;
typedef int grub_hfs_datarecord_t ;
typedef int grub_err_t ;
struct TYPE_2__ {int disk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct grub_hfs_data*) ;
 scalar_t__ FUNC_5 (struct grub_hfs_data*,char const*,struct grub_hfs_filerec*,int ) ;
 struct grub_hfs_data* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static grub_err_t
FUNC_8 (struct grub_file *VAR_4, const char *VAR_5)
{
  struct grub_hfs_data *VAR_6;
  struct grub_hfs_filerec VAR_7 = {0};

  FUNC_1 (VAR_3);

  VAR_6 = FUNC_6 (VAR_4->device->disk);

  if (FUNC_5 (VAR_6, VAR_5, &VAR_7, 0))
    {
      FUNC_4 (VAR_6);
      FUNC_2 (VAR_3);
      return VAR_2;
    }

  if (VAR_7.type != VAR_1)
    {
      FUNC_4 (VAR_6);
      FUNC_3 (VAR_0, "not a file");
      FUNC_2 (VAR_3);
      return VAR_2;
    }

  FUNC_7 (VAR_6->extents, VAR_7.extents, sizeof (grub_hfs_datarecord_t));
  VAR_4->size = FUNC_0 (VAR_7.size);
  VAR_6->size = FUNC_0 (VAR_7.size);
  VAR_6->fileid = FUNC_0 (VAR_7.fileid);
  VAR_4->offset = 0;

  VAR_4->data = VAR_6;

  return 0;
}
