
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_nilfs2_super_block {int s_rev_level; int s_magic; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2 (struct grub_nilfs2_super_block *VAR_2)
{
  if (FUNC_0 (VAR_2->s_magic) != VAR_0)
    return 0;

  if (FUNC_1 (VAR_2->s_rev_level) != VAR_1)
    return 0;

  return 1;
}
