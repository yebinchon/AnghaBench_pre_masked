
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iattr {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct dentry*,struct iattr*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*,struct iattr*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(struct dentry *VAR_1, struct iattr *VAR_2)
{
 int VAR_3;

 if (FUNC_4(FUNC_0(FUNC_2(VAR_1))))
  return 0;
 VAR_3 = FUNC_1(VAR_0, 0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;
 return FUNC_3(VAR_1, VAR_2);
}
