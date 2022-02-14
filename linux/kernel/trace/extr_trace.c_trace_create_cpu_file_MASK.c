
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct file_operations {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {void* i_cdev; } ;


 TYPE_1__* FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (char const*,int ,struct dentry*,void*,struct file_operations const*) ;

__attribute__((used)) static struct dentry *
FUNC_2(const char *VAR_0, umode_t VAR_1, struct dentry *VAR_2,
        void *VAR_3, long VAR_4, const struct file_operations *VAR_5)
{
 struct dentry *VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5);

 if (VAR_6)
  FUNC_0(VAR_6)->i_cdev = (void *)(VAR_4 + 1);
 return VAR_6;
}
