
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {struct dentry* d_parent; } ;


 int FUNC_0 (struct dentry*,int ,int ,int) ;
 int FUNC_1 (int ,struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct dentry *VAR_2)
{
 struct dentry *VAR_3 = VAR_2->d_parent;
 struct dentry *VAR_4 = VAR_3->d_parent;

 FUNC_3(VAR_2);
 FUNC_1(FUNC_2(VAR_3), VAR_2);
 FUNC_0(VAR_3, VAR_1, 0, 1);
 FUNC_0(VAR_4, VAR_0, 0, 1);
 FUNC_4(VAR_2);
}
