
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int attr; } ;
struct grub_ntfs_data {int mft_size; TYPE_1__ mmft; } ;
typedef int grub_uint32_t ;
typedef int grub_err_t ;
typedef int grub_disk_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct grub_ntfs_data*,char*,int,char*) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int *,char*,int,int,int ,int ,int**,int ) ;
 int VAR_2 ;

__attribute__((used)) static grub_err_t
FUNC_3 (struct grub_ntfs_data *VAR_3, char *VAR_4, grub_uint32_t VAR_5,
   grub_uint32_t *VAR_6)
{
  if (FUNC_2
      (&VAR_3->mmft.attr, VAR_4, VAR_5 * ((grub_disk_addr_t) VAR_3->mft_size << VAR_0),
       VAR_3->mft_size << VAR_0, 0, VAR_2, &VAR_6, 0))
    return FUNC_1 (VAR_1, "Read MFT 0x%X fails", VAR_5);
  return FUNC_0 (VAR_3, VAR_4, VAR_3->mft_size, "FILE");
}
