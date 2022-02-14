
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; scalar_t__ attr_end; } ;
struct grub_ntfs_file {int inode_read; TYPE_2__ attr; int size; int * buf; int sector; TYPE_1__* data; } ;
typedef int grub_uint32_t ;
typedef int grub_err_t ;
struct TYPE_4__ {int mft_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,struct grub_ntfs_file*) ;
 char* FUNC_3 (TYPE_2__*,struct grub_ntfs_file*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *,int ,int *) ;
 unsigned short FUNC_5 (int *,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static grub_err_t
FUNC_8 (struct grub_ntfs_file *VAR_5, grub_uint32_t VAR_6)
{
  unsigned short VAR_7;

  VAR_5->inode_read = 1;

  VAR_5->buf = FUNC_1 (VAR_5->data->mft_size << VAR_2);
  if (VAR_5->buf == ((void*)0))
    return VAR_4;

  if (FUNC_4 (VAR_5->data, VAR_5->buf, VAR_6, &VAR_5->sector))
    return VAR_4;

  VAR_7 = FUNC_5 (VAR_5->buf, 0x16);
  if ((VAR_7 & 1) == 0)
    return FUNC_0 (VAR_3, "MFT 0x%X is not in use", VAR_6);

  if ((VAR_7 & 2) == 0)
    {
      char *VAR_8;

      VAR_8 = FUNC_3 (&VAR_5->attr, VAR_5, VAR_1);
      if (VAR_8 == ((void*)0))
 return FUNC_0 (VAR_3, "no $DATA in MFT 0x%X", VAR_6);

      if (!VAR_8[8])
 VAR_5->size = FUNC_6 (VAR_8, 0x10);
      else
 VAR_5->size = FUNC_7 (VAR_8, 0x30);

      if ((VAR_5->attr.flags & VAR_0) == 0)
 VAR_5->attr.attr_end = 0;
    }
  else
    FUNC_2 (&VAR_5->attr, VAR_5);

  return 0;
}
