
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct path_cond {int mode; int uid; } ;
struct path {int dummy; } ;
struct inode {int i_mode; int i_uid; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (char const*,struct path const*,struct dentry*,int ,struct path_cond*) ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, const struct path *VAR_1,
     struct dentry *VAR_2, u32 VAR_3)
{
 struct inode *VAR_4 = FUNC_1(VAR_2);
 struct path_cond VAR_5 = { };

 if (!VAR_4 || !FUNC_2(VAR_2))
  return 0;

 VAR_5.uid = VAR_4->i_uid;
 VAR_5.mode = VAR_4->i_mode;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_5);
}
