
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ima_field_data {int dummy; } ;
struct ima_event_data {int xattr_len; struct evm_ima_xattr_data* xattr_value; } ;
struct evm_ima_xattr_data {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct evm_ima_xattr_data*,int ,int ,struct ima_field_data*) ;

int FUNC_1(struct ima_event_data *VAR_2,
        struct ima_field_data *VAR_3)
{
 struct evm_ima_xattr_data *VAR_4 = VAR_2->xattr_value;

 if ((!VAR_4) || (VAR_4->type != VAR_1))
  return 0;

 return FUNC_0(VAR_4, VAR_2->xattr_len,
          VAR_0, VAR_3);
}
