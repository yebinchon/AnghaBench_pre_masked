
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_operations {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int VAR_1 ;
 struct dentry* FUNC_2 (char const*,int,struct dentry*,void*,char*,int *,struct inode_operations const*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static struct dentry *FUNC_4(const char *VAR_2,
       struct dentry *VAR_3,
       const char *VAR_4,
       void *VAR_5,
       const struct inode_operations *VAR_6)
{
 struct dentry *VAR_7;
 char *VAR_8 = ((void*)0);

 if (VAR_4) {
  if (!VAR_8)
   return FUNC_0(-VAR_0);
 }
 VAR_7 = FUNC_2(VAR_2, VAR_1 | 0444, VAR_3, VAR_5, VAR_8, ((void*)0),
      VAR_6);
 if (FUNC_1(VAR_7))
  FUNC_3(VAR_8);

 return VAR_7;
}
