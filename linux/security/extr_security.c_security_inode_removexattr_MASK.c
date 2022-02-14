
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,struct dentry*,char const*) ;
 int FUNC_2 (struct dentry*,char const*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*,char const*) ;
 int FUNC_5 (struct dentry*,char const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (int ) ;

int FUNC_7(struct dentry *VAR_1, const char *VAR_2)
{
 int VAR_3;

 if (FUNC_6(FUNC_0(FUNC_3(VAR_1))))
  return 0;




 VAR_3 = FUNC_1(VAR_0, 1, VAR_1, VAR_2);
 if (VAR_3 == 1)
  VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_5(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;
 return FUNC_4(VAR_1, VAR_2);
}
