
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_ext4_extent_idx {int leaf; int leaf_hi; int block; } ;
struct grub_ext4_extent_header {scalar_t__ depth; int entries; int magic; } ;
struct grub_ext2_data {int disk; } ;
typedef int grub_uint32_t ;
typedef int grub_disk_addr_t ;


 int FUNC_0 (struct grub_ext2_data*) ;
 int VAR_0 ;
 int FUNC_1 (struct grub_ext2_data*) ;
 scalar_t__ FUNC_2 (int ,int,int ,int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static struct grub_ext4_extent_header *
FUNC_5 (struct grub_ext2_data *VAR_1, char *VAR_2,
                     struct grub_ext4_extent_header *VAR_3,
                     grub_uint32_t VAR_4)
{
  struct grub_ext4_extent_idx *VAR_5;

  while (1)
    {
      int VAR_6;
      grub_disk_addr_t VAR_7;

      VAR_5 = (struct grub_ext4_extent_idx *) (VAR_3 + 1);

      if (FUNC_3(VAR_3->magic) != VAR_0)
        return 0;

      if (VAR_3->depth == 0)
        return VAR_3;

      for (VAR_6 = 0; VAR_6 < FUNC_3 (VAR_3->entries); VAR_6++)
        {
          if (VAR_4 < FUNC_4(VAR_5[VAR_6].block))
            break;
        }

      if (--VAR_6 < 0)
        return 0;

      VAR_7 = FUNC_3 (VAR_5[VAR_6].leaf_hi);
      VAR_7 = (VAR_7 << 32) + FUNC_4 (VAR_5[VAR_6].leaf);
      if (FUNC_2 (VAR_1->disk,
                          VAR_7 << FUNC_1 (VAR_1),
                          0, FUNC_0(VAR_1), VAR_2)) {
        return 0;
      }

      VAR_3 = (struct grub_ext4_extent_header *) VAR_2;
    }
}
