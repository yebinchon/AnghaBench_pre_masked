
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_hfsplus_key {int dummy; } ;
struct grub_hfsplus_btree {int dummy; } ;
struct grub_hfsplus_btnode {int dummy; } ;


 unsigned int FUNC_0 (struct grub_hfsplus_btree*,struct grub_hfsplus_btnode*,int) ;

__attribute__((used)) static inline struct grub_hfsplus_key *
FUNC_1 (struct grub_hfsplus_btree *VAR_0,
      struct grub_hfsplus_btnode *VAR_1, int VAR_2)
{
  char *VAR_3 = (char *) VAR_1;
  unsigned int VAR_4;
  VAR_4 = FUNC_0 (VAR_0, VAR_1, VAR_2);
  return (struct grub_hfsplus_key *) &VAR_3[VAR_4];
}
