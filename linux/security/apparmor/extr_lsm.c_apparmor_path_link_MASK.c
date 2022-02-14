
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;
struct dentry {int dummy; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (struct aa_label*,struct dentry*,struct path const*,struct dentry*) ;
 struct aa_label* FUNC_1 () ;
 int FUNC_2 (struct aa_label*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct aa_label*) ;

__attribute__((used)) static int FUNC_5(struct dentry *VAR_0, const struct path *VAR_1,
         struct dentry *VAR_2)
{
 struct aa_label *VAR_3;
 int VAR_4 = 0;

 if (!FUNC_3(VAR_0))
  return 0;

 VAR_3 = FUNC_1();
 if (!FUNC_4(VAR_3))
  VAR_4 = FUNC_0(VAR_3, VAR_0, VAR_1, VAR_2);
 FUNC_2(VAR_3);

 return VAR_4;
}
