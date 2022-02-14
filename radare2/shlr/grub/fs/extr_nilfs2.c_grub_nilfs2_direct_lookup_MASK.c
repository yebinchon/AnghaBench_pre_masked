
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_nilfs2_inode {int * i_bmap; } ;
typedef int grub_uint64_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline grub_uint64_t
FUNC_1 (struct grub_nilfs2_inode *VAR_0, grub_uint64_t VAR_1)
{
  return FUNC_0 (VAR_0->i_bmap[1 + VAR_1]);
}
