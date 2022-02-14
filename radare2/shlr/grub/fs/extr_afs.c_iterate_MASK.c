
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct grub_dirhook_info {int dir; int mtimeset; int mtime; } ;
struct grub_afs_dir_closure {int (* hook ) (char const*,struct grub_dirhook_info*,int ) ;int closure; } ;
typedef int info ;
typedef TYPE_2__* grub_fshelp_node_t ;
typedef enum grub_fshelp_filetype { ____Placeholder_grub_fshelp_filetype } grub_fshelp_filetype ;
struct TYPE_5__ {int modified_time; } ;
struct TYPE_6__ {TYPE_1__ inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct grub_dirhook_info*,int ,int) ;
 int FUNC_4 (char const*,struct grub_dirhook_info*,int ) ;

__attribute__((used)) static int
FUNC_5 (const char *VAR_2,
  enum grub_fshelp_filetype VAR_3,
  grub_fshelp_node_t VAR_4, void *VAR_5)
{
  struct grub_afs_dir_closure *VAR_6 = VAR_5;
  struct grub_dirhook_info VAR_7;
  FUNC_3 (&VAR_7, 0, sizeof (VAR_7));
  VAR_7.dir = ((VAR_3 & VAR_1) == VAR_0);
  VAR_7.mtimeset = 1;



  VAR_7.mtime = FUNC_1 (FUNC_0 (VAR_4->inode.modified_time),
         1000000, 0);

  FUNC_2 (VAR_4);
  return VAR_6->hook (VAR_2, &VAR_7, VAR_6->closure);
}
