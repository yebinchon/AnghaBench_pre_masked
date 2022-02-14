
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xattr_handler {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,int) ;

__attribute__((used)) static int FUNC_1(const struct xattr_handler *VAR_1,
       struct dentry *VAR_2, struct inode *VAR_3,
       const char *VAR_4, void *VAR_5, size_t VAR_6)
{
 if (VAR_5) {
  if (VAR_2->d_name.len + 1 > VAR_6)
   return -VAR_0;
  FUNC_0(VAR_5, VAR_2->d_name.name, VAR_2->d_name.len + 1);
 }
 return VAR_2->d_name.len + 1;
}
