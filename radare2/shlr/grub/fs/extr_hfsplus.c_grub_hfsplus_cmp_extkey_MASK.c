
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_hfsplus_extkey_internal {int fileid; int start; } ;
struct grub_hfsplus_key_internal {struct grub_hfsplus_extkey_internal extkey; } ;
struct grub_hfsplus_extkey {int start; int fileid; } ;
struct grub_hfsplus_key {struct grub_hfsplus_extkey extkey; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (struct grub_hfsplus_key *VAR_0,
    struct grub_hfsplus_key_internal *VAR_1)
{
  struct grub_hfsplus_extkey *VAR_2 = &VAR_0->extkey;
  struct grub_hfsplus_extkey_internal *VAR_3 = &VAR_1->extkey;
  int VAR_4;

  VAR_4 = FUNC_0 (VAR_2->fileid) - VAR_3->fileid;

  if (VAR_4)
    return VAR_4;

  VAR_4 = FUNC_0 (VAR_2->start) - VAR_3->start;
  return VAR_4;
}
