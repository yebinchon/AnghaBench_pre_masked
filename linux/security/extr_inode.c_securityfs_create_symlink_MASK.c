
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_operations {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,int ) ;
 struct dentry* FUNC_4 (char const*,int,struct dentry*,char*,int *,struct inode_operations const*) ;

struct dentry *FUNC_5(const char *VAR_3,
      struct dentry *VAR_4,
      const char *VAR_5,
      const struct inode_operations *VAR_6)
{
 struct dentry *VAR_7;
 char *VAR_8 = ((void*)0);

 if (VAR_5) {
  VAR_8 = FUNC_3(VAR_5, VAR_1);
  if (!VAR_8)
   return FUNC_0(-VAR_0);
 }
 VAR_7 = FUNC_4(VAR_3, VAR_2 | 0444, VAR_4,
     VAR_8, ((void*)0), VAR_6);
 if (FUNC_1(VAR_7))
  FUNC_2(VAR_8);

 return VAR_7;
}
