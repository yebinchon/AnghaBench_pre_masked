
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selinux_fs_info {int sb; int policycap_dir; } ;
struct inode {unsigned int i_ino; int * i_fop; } ;
struct dentry {int dummy; } ;


 unsigned int FUNC_0 (char**) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_2 (int ,char*) ;
 int FUNC_3 (struct dentry*) ;
 struct inode* FUNC_4 (int ,int) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 char** VAR_5 ;

__attribute__((used)) static int FUNC_6(struct selinux_fs_info *VAR_6)
{
 unsigned int VAR_7;
 struct dentry *VAR_8 = ((void*)0);
 struct inode *VAR_9 = ((void*)0);

 FUNC_5(VAR_6->policycap_dir);

 for (VAR_7 = 0; VAR_7 <= VAR_1; VAR_7++) {
  if (VAR_7 < FUNC_0(VAR_5))
   VAR_8 = FUNC_2(VAR_6->policycap_dir,
           VAR_5[VAR_7]);
  else
   VAR_8 = FUNC_2(VAR_6->policycap_dir, "unknown");

  if (VAR_8 == ((void*)0))
   return -VAR_0;

  VAR_9 = FUNC_4(VAR_6->sb, VAR_3 | 0444);
  if (VAR_9 == ((void*)0)) {
   FUNC_3(VAR_8);
   return -VAR_0;
  }

  VAR_9->i_fop = &VAR_4;
  VAR_9->i_ino = VAR_7 | VAR_2;
  FUNC_1(VAR_8, VAR_9);
 }

 return 0;
}
