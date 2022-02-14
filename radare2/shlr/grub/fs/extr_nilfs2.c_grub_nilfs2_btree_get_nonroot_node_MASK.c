
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_nilfs2_data {int disk; } ;
typedef unsigned int grub_uint64_t ;
typedef int grub_disk_t ;


 int FUNC_0 (struct grub_nilfs2_data*) ;
 int FUNC_1 (struct grub_nilfs2_data*) ;
 int FUNC_2 (int ,unsigned int,int ,int ,void*) ;

__attribute__((used)) static inline int
FUNC_3 (struct grub_nilfs2_data *VAR_0,
        grub_uint64_t VAR_1, void *VAR_2)
{
  grub_disk_t VAR_3 = VAR_0->disk;
  unsigned int VAR_4 = (1 << FUNC_0 (VAR_0));

  return FUNC_2 (VAR_3, VAR_1 * VAR_4, 0,
    FUNC_1 (VAR_0), VAR_2);
}
