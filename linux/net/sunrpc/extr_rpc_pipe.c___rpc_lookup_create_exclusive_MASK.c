
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int ) ;
 struct qstr FUNC_1 (char const*,int ) ;
 struct dentry* FUNC_2 (struct dentry*,struct qstr*) ;
 struct dentry* FUNC_3 (struct dentry*,struct qstr*) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static struct dentry *FUNC_7(struct dentry *VAR_2,
       const char *VAR_3)
{
 struct qstr VAR_4 = FUNC_1(VAR_3, FUNC_6(VAR_3));
 struct dentry *VAR_5 = FUNC_3(VAR_2, &VAR_4);
 if (!VAR_5) {
  VAR_5 = FUNC_2(VAR_2, &VAR_4);
  if (!VAR_5)
   return FUNC_0(-VAR_1);
 }
 if (FUNC_4(VAR_5))
  return VAR_5;
 FUNC_5(VAR_5);
 return FUNC_0(-VAR_0);
}
