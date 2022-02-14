
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_minix_sblock {int zone_bmap_size; int inode_bmap_size; } ;
struct grub_minix_inode {int dummy; } ;
struct grub_minix_data {int ino; int version; int inode2; int disk; int inode; struct grub_minix_sblock sblock; } ;
struct grub_minix2_inode {int dummy; } ;
typedef int grub_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int,int,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static grub_err_t
FUNC_2 (struct grub_minix_data *VAR_3, int VAR_4)
{
  struct grub_minix_sblock *VAR_5 = &VAR_3->sblock;


  int VAR_6;
  VAR_3->ino = VAR_4;


  VAR_4--;

  VAR_6 = ((2 + FUNC_1 (VAR_5->inode_bmap_size)
     + FUNC_1 (VAR_5->zone_bmap_size))
    << VAR_2);

  if (VAR_3->version == 1)
    {
      VAR_6 += VAR_4 / (VAR_0 / sizeof (struct grub_minix_inode));
      int VAR_7 = (VAR_4 % (VAR_0
    / sizeof (struct grub_minix_inode))
    * sizeof (struct grub_minix_inode));

      FUNC_0 (VAR_3->disk, VAR_6, VAR_7,
        sizeof (struct grub_minix_inode), &VAR_3->inode);
    }
  else
    {
      VAR_6 += VAR_4 / (VAR_0
        / sizeof (struct grub_minix2_inode));
      int VAR_8 = (VAR_4
    % (VAR_0 / sizeof (struct grub_minix2_inode))
    * sizeof (struct grub_minix2_inode));

      FUNC_0 (VAR_3->disk, VAR_6, VAR_8,
        sizeof (struct grub_minix2_inode),&VAR_3->inode2);
    }

  return VAR_1;
}
