
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evm_ima_xattr_data {scalar_t__ type; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*,char const*,void const*,size_t) ;
 int FUNC_2 (int ,int) ;

int FUNC_3(struct dentry *VAR_3, const char *VAR_4,
         const void *VAR_5, size_t VAR_6)
{
 const struct evm_ima_xattr_data *VAR_7 = VAR_5;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5,
       VAR_6);
 if (VAR_8 == 1) {
  if (!VAR_6 || (VAR_7->type >= VAR_2))
   return -VAR_0;
  FUNC_2(FUNC_0(VAR_3),
   VAR_7->type == VAR_1);
  VAR_8 = 0;
 }
 return VAR_8;
}
