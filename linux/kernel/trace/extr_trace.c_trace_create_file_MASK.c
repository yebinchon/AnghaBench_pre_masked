
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct file_operations {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (char*,char const*) ;
 struct dentry* FUNC_1 (char const*,int ,struct dentry*,void*,struct file_operations const*) ;

struct dentry *FUNC_2(const char *VAR_0,
     umode_t VAR_1,
     struct dentry *VAR_2,
     void *VAR_3,
     const struct file_operations *VAR_4)
{
 struct dentry *VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (!VAR_5)
  FUNC_0("Could not create tracefs '%s' entry\n", VAR_0);

 return VAR_5;
}
