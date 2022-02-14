
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int log2_blksz; } ;
struct grub_ufs_data {int disk; int be; TYPE_1__ sblock; } ;
typedef int indir ;
typedef int grub_uint64_t ;
typedef int grub_uint32_t ;
typedef int grub_disk_addr_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct grub_ufs_data*,unsigned int) ;
 int FUNC_1 (struct grub_ufs_data*,int) ;
 int FUNC_2 (struct grub_ufs_data*) ;
 int FUNC_3 (int ,int,int ,int,int*) ;
 int FUNC_4 (int ,char*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static grub_disk_addr_t
FUNC_7 (struct grub_ufs_data *VAR_3, unsigned int VAR_4)
{
  int VAR_5 = FUNC_2 (VAR_3);
  unsigned int VAR_6;
  int VAR_7;


  if (VAR_4 < VAR_1)
    return FUNC_0 (VAR_3, VAR_4);

  VAR_7 = FUNC_6 (VAR_3->sblock.log2_blksz, VAR_3->be);

  VAR_4 -= VAR_1;

  VAR_6 = VAR_5 / VAR_2;

  if (VAR_4 < VAR_6)
    {
   grub_uint32_t VAR_8[VAR_5 / sizeof (grub_uint32_t)];




   FUNC_3 (VAR_3->disk, FUNC_1 (VAR_3, 0) << VAR_7,
        0, sizeof (VAR_8), VAR_8);
      return VAR_8[VAR_4];
    }
  VAR_4 -= VAR_6;


  if (VAR_4 < VAR_6 * VAR_6)
    {
   grub_uint32_t VAR_9[VAR_5 / sizeof (grub_uint32_t)];





      FUNC_3 (VAR_3->disk, FUNC_1 (VAR_3, 1) << VAR_7,
        0, sizeof (VAR_9), VAR_9);
      FUNC_3 (VAR_3->disk,
        (VAR_9 [VAR_4 / VAR_6])
        << VAR_7,
        0, sizeof (VAR_9), VAR_9);

      return VAR_9[VAR_4 % VAR_6];
    }


  FUNC_4 (VAR_0,
       "ufs does not support triple indirect blocks");
  return 0;
}
