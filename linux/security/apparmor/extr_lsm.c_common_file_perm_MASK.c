
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct aa_label {int dummy; } ;
struct TYPE_4__ {scalar_t__ dentry; } ;


 int VAR_0 ;
 struct aa_label* FUNC_0 () ;
 int FUNC_1 (struct aa_label*) ;
 int FUNC_2 (char const*,struct aa_label*,struct file*,int ) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, struct file *VAR_3, u32 VAR_4)
{
 struct aa_label *VAR_5;
 int VAR_6 = 0;


 if (VAR_3->f_path.dentry == VAR_1.dentry)
  return -VAR_0;

 VAR_5 = FUNC_0();
 VAR_6 = FUNC_2(VAR_2, VAR_5, VAR_3, VAR_4);
 FUNC_1(VAR_5);

 return VAR_6;
}
