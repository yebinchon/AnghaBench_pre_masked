
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_nilfs2_btree_node {scalar_t__ bn_level; int bn_nchildren; } ;
typedef scalar_t__ grub_uint64_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct grub_nilfs2_btree_node*,int) ;

__attribute__((used)) static inline int
FUNC_2 (struct grub_nilfs2_btree_node *VAR_1,
          grub_uint64_t VAR_2, int *VAR_3)
{
  grub_uint64_t VAR_4;
  int VAR_5, VAR_6, VAR_7, VAR_8;

  VAR_6 = 0;
  VAR_7 = FUNC_0 (VAR_1->bn_nchildren) - 1;
  VAR_5 = 0;
  VAR_8 = 0;
  while (VAR_6 <= VAR_7)
    {
      VAR_5 = (VAR_6 + VAR_7) / 2;
      VAR_4 = FUNC_1 (VAR_1, VAR_5);
      if (VAR_4 == VAR_2)
 {
   *VAR_3 = VAR_5;
   return 1;
 }
      else if (VAR_4 < VAR_2)
 {
   VAR_6 = VAR_5 + 1;
   VAR_8 = -1;
 }
      else
 {
   VAR_7 = VAR_5 - 1;
   VAR_8 = 1;
 }
    }

  if (VAR_1->bn_level > VAR_0)
    {
      if (VAR_8 > 0 && VAR_5 > 0)
 VAR_5--;
    }
  else if (VAR_8 < 0)
    VAR_5++;

  *VAR_3 = VAR_5;
  return VAR_8 == 0;
}
