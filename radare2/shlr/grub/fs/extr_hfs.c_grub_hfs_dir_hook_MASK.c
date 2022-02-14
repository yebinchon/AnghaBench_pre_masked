
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_hfs_record {char* data; struct grub_hfs_catalog_key* key; } ;
struct grub_hfs_dir_closure {int (* hook ) (char*,struct grub_dirhook_info*,int ) ;int closure; } ;
struct grub_hfs_catalog_key {int strlen; scalar_t__ str; } ;
struct grub_dirhook_info {int dir; } ;
typedef int info ;


 char VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (struct grub_dirhook_info*,int ,int) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,struct grub_dirhook_info*,int ) ;

__attribute__((used)) static int
FUNC_3 (struct grub_hfs_record *VAR_2, void *VAR_3)
{
  struct grub_hfs_dir_closure *VAR_4 = VAR_3;
  char VAR_5[32] = { 0 };
  char *VAR_6 = VAR_2->data;
  struct grub_hfs_catalog_key *VAR_7 = VAR_2->key;
  struct grub_dirhook_info VAR_8;
  FUNC_0 (&VAR_8, 0, sizeof (VAR_8));

  FUNC_1 (VAR_5, (char *) (VAR_7->str), VAR_7->strlen);

  if (*VAR_6 == VAR_0
      || *VAR_6 == VAR_1)
    {
      VAR_8.dir = (*VAR_6 == VAR_0);
      return VAR_4->hook (VAR_5, &VAR_8, VAR_4->closure);
    }
  return 0;
}
