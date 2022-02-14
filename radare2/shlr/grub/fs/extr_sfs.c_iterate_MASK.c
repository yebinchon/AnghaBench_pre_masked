
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_sfs_dir_closure {int (* hook ) (char const*,struct grub_dirhook_info*,int ) ;int closure; } ;
struct grub_dirhook_info {int dir; } ;
typedef int info ;
typedef int grub_fshelp_node_t ;
typedef enum grub_fshelp_filetype { ____Placeholder_grub_fshelp_filetype } grub_fshelp_filetype ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct grub_dirhook_info*,int ,int) ;
 int FUNC_2 (char const*,struct grub_dirhook_info*,int ) ;

__attribute__((used)) static int
FUNC_3 (const char *VAR_2,
  enum grub_fshelp_filetype VAR_3,
  grub_fshelp_node_t VAR_4,
  void *VAR_5)
{
  struct grub_sfs_dir_closure *VAR_6 = VAR_5;
  struct grub_dirhook_info VAR_7;
  FUNC_1 (&VAR_7, 0, sizeof (VAR_7));
  VAR_7.dir = ((VAR_3 & VAR_1) == VAR_0);
  FUNC_0 (VAR_4);
  return VAR_6->hook? VAR_6->hook (VAR_2, &VAR_7, VAR_6->closure):0;
}
