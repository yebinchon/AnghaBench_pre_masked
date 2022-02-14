
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_operations {int dummy; } ;
struct dentry {int dummy; } ;
struct aa_proxy {int dummy; } ;
struct TYPE_2__ {int proxy; } ;
struct aa_profile {TYPE_1__ label; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 struct aa_proxy* FUNC_1 (int ) ;
 int FUNC_2 (struct aa_proxy*) ;
 struct dentry* FUNC_3 (char const*,int,struct dentry*,struct aa_proxy*,struct file_operations const*) ;

__attribute__((used)) static struct dentry *FUNC_4(struct dentry *VAR_1, const char *VAR_2,
       struct aa_profile *VAR_3,
       const struct file_operations *VAR_4)
{
 struct aa_proxy *VAR_5 = FUNC_1(VAR_3->label.proxy);
 struct dentry *VAR_6;

 VAR_6 = FUNC_3(VAR_2, VAR_0 | 0444, VAR_1, VAR_5, VAR_4);
 if (FUNC_0(VAR_6))
  FUNC_2(VAR_5);

 return VAR_6;
}
