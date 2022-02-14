
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,struct dentry*) ;
 struct inode* FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct inode*) ;

__attribute__((used)) static int FUNC_6(struct dentry *VAR_1,
  void (*VAR_2)(struct dentry *))
{
 struct dentry *VAR_3;
 struct inode *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_2(VAR_1);
 VAR_4 = FUNC_1(VAR_3);
 FUNC_4(VAR_4, VAR_0);
 if (VAR_2 != ((void*)0))
  VAR_2(VAR_1);
 VAR_5 = FUNC_0(VAR_4, VAR_1);
 FUNC_5(VAR_4);
 FUNC_3(VAR_3);
 return VAR_5;
}
