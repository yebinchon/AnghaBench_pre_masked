
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct grub_hfsplus_dir_closure {int (* hook ) (char const*,struct grub_dirhook_info*,int ) ;int closure; } ;
struct grub_dirhook_info {int dir; int mtimeset; int case_insensitive; int mtime; } ;
typedef int info ;
typedef TYPE_1__* grub_fshelp_node_t ;
typedef enum grub_fshelp_filetype { ____Placeholder_grub_fshelp_filetype } grub_fshelp_filetype ;
struct TYPE_4__ {int mtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct grub_dirhook_info*,int ,int) ;
 int FUNC_2 (char const*,struct grub_dirhook_info*,int ) ;

__attribute__((used)) static int
FUNC_3 (const char *VAR_3,
  enum grub_fshelp_filetype VAR_4,
  grub_fshelp_node_t VAR_5, void *VAR_6)
{
  struct grub_hfsplus_dir_closure *VAR_7 = VAR_6;
  struct grub_dirhook_info VAR_8;
  FUNC_1 (&VAR_8, 0, sizeof (VAR_8));
  VAR_8.dir = ((VAR_4 & VAR_2) == VAR_1);
  VAR_8.mtimeset = 1;
  VAR_8.mtime = VAR_5->mtime;
  VAR_8.case_insensitive = !! (VAR_4 & VAR_0);
  FUNC_0 (VAR_5);
  return VAR_7->hook (VAR_3, &VAR_8, VAR_7->closure);
}
