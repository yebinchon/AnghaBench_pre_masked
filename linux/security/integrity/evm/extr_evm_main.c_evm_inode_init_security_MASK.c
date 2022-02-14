
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xattr {int value_len; int name; struct evm_xattr* value; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct evm_xattr {int digest; TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*,struct xattr const*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct evm_xattr*) ;
 struct evm_xattr* FUNC_4 (int,int ) ;

int FUNC_5(struct inode *VAR_4,
     const struct xattr *VAR_5,
     struct xattr *VAR_6)
{
 struct evm_xattr *VAR_7;
 int VAR_8;

 if (!FUNC_1() || !FUNC_2(VAR_5->name))
  return 0;

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->data.type = VAR_1;
 VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_7->digest);
 if (VAR_8 < 0)
  goto out;

 VAR_6->value = VAR_7;
 VAR_6->value_len = sizeof(*VAR_7);
 VAR_6->name = VAR_3;
 return 0;
out:
 FUNC_3(VAR_7);
 return VAR_8;
}
