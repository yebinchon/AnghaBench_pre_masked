
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_iso9660_read_symlink_closure {int symlink; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_3 (const char *VAR_0, int VAR_1,
   struct grub_iso9660_read_symlink_closure *VAR_2)
{
  int VAR_3 = FUNC_1 (VAR_2->symlink);

  VAR_2->symlink = FUNC_0 (VAR_2->symlink, VAR_3 + VAR_1 + 1);
  if (! VAR_2->symlink)
    return;

  FUNC_2 (VAR_2->symlink, VAR_0, VAR_1);
}
