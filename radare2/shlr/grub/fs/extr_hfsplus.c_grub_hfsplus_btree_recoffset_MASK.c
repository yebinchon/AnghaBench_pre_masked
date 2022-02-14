
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_hfsplus_btree {int nodesize; } ;
struct grub_hfsplus_btnode {int dummy; } ;
typedef int grub_uint16_t ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static inline unsigned int
FUNC_1 (struct grub_hfsplus_btree *VAR_0,
      struct grub_hfsplus_btnode *VAR_1, int VAR_2)
{
  char *VAR_3 = (char *) VAR_1;
  grub_uint16_t *VAR_4;
  VAR_4 = (grub_uint16_t *) (&VAR_3[VAR_0->nodesize
         - VAR_2 * sizeof (grub_uint16_t) - 2]);
  return VAR_4? FUNC_0 (*VAR_4): 0;
}
