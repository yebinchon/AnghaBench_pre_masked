
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evm_ima_xattr_data {int dummy; } ;
struct dentry {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dentry*,int ,char**,int ,int ) ;

int FUNC_1(struct dentry *VAR_3,
     struct evm_ima_xattr_data **VAR_4)
{
 ssize_t VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_2, (char **)VAR_4,
     0, VAR_1);
 if (VAR_5 == -VAR_0)
  VAR_5 = 0;
 return VAR_5;
}
