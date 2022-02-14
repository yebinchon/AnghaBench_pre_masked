
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {unsigned long i_ino; int * i_fop; int * i_op; } ;
struct dentry {int d_sb; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_2 (struct dentry*,char const*) ;
 struct inode* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct inode*) ;
 struct inode* FUNC_6 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static struct dentry *FUNC_7(struct dentry *VAR_6, const char *VAR_7,
   unsigned long *VAR_8)
{
 struct dentry *VAR_9 = FUNC_2(VAR_6, VAR_7);
 struct inode *VAR_10;

 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_10 = FUNC_6(VAR_6->d_sb, VAR_1 | VAR_2 | VAR_3);
 if (!VAR_10) {
  FUNC_4(VAR_9);
  return FUNC_0(-VAR_0);
 }

 VAR_10->i_op = &VAR_4;
 VAR_10->i_fop = &VAR_5;
 VAR_10->i_ino = ++(*VAR_8);

 FUNC_5(VAR_10);
 FUNC_1(VAR_9, VAR_10);

 FUNC_5(FUNC_3(VAR_6));

 return VAR_9;
}
