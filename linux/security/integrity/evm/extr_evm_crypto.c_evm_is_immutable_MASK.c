
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct integrity_iint_cache {int flags; } ;
struct inode {int dummy; } ;
struct evm_ima_xattr_data {scalar_t__ type; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct integrity_iint_cache* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct evm_ima_xattr_data const*) ;
 int FUNC_2 (struct dentry*,int ,char**,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_5, struct inode *VAR_6)
{
 const struct evm_ima_xattr_data *VAR_7 = ((void*)0);
 struct integrity_iint_cache *VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_0(VAR_6);
 if (VAR_8 && (VAR_8->flags & VAR_1))
  return 1;


 VAR_9 = FUNC_2(VAR_5, VAR_4, (char **)&VAR_7, 0,
    VAR_3);
 if (VAR_9 <= 0) {
  if (VAR_9 == -VAR_0)
   return 0;
  return VAR_9;
 }
 if (VAR_7->type == VAR_2)
  VAR_9 = 1;
 else
  VAR_9 = 0;

 FUNC_1(VAR_7);
 return VAR_9;
}
