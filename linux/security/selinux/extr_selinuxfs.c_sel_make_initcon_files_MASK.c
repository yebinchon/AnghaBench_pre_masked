
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; int * i_fop; } ;
struct dentry {int d_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_1 (struct dentry*,int ) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 struct inode* FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct dentry *VAR_6)
{
 int VAR_7;

 for (VAR_7 = 1; VAR_7 <= VAR_1; VAR_7++) {
  struct inode *VAR_8;
  struct dentry *VAR_9;
  VAR_9 = FUNC_1(VAR_6, FUNC_3(VAR_7));
  if (!VAR_9)
   return -VAR_0;

  VAR_8 = FUNC_4(VAR_6->d_sb, VAR_3|VAR_4);
  if (!VAR_8) {
   FUNC_2(VAR_9);
   return -VAR_0;
  }

  VAR_8->i_fop = &VAR_5;
  VAR_8->i_ino = VAR_7|VAR_2;
  FUNC_0(VAR_9, VAR_8);
 }

 return 0;
}
