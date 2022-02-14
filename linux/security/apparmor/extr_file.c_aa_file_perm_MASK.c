
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int dentry; scalar_t__ mnt; } ;
struct file {TYPE_1__ f_path; } ;
struct aa_label {int dummy; } ;
struct aa_file_ctx {int allow; int label; } ;
struct TYPE_4__ {int i_mode; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char const*,struct aa_label*,struct aa_label*,struct file*,int,int) ;
 int FUNC_3 (char const*,struct aa_label*,struct aa_label*,struct file*,int,int) ;
 scalar_t__ FUNC_4 (struct aa_label*,struct aa_label*) ;
 struct aa_file_ctx* FUNC_5 (struct file*) ;
 TYPE_2__* FUNC_6 (struct file*) ;
 scalar_t__ FUNC_7 (int ) ;
 struct aa_label* FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (struct aa_label*) ;

int FUNC_12(const char *VAR_0, struct aa_label *VAR_1, struct file *VAR_2,
   u32 VAR_3)
{
 struct aa_file_ctx *VAR_4;
 struct aa_label *VAR_5;
 u32 VAR_6;
 int VAR_7 = 0;

 FUNC_0(!VAR_1);
 FUNC_0(!VAR_2);

 VAR_4 = FUNC_5(VAR_2);

 FUNC_9();
 VAR_5 = FUNC_8(VAR_4->label);
 FUNC_0(!VAR_5);
 VAR_6 = VAR_3 & ~VAR_4->allow;
 if (FUNC_11(VAR_1) || FUNC_11(VAR_5) ||
     (!VAR_6 && FUNC_4(VAR_5, VAR_1)))
  goto done;



 if (VAR_2->f_path.mnt && FUNC_7(VAR_2->f_path.dentry))
  VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_5, VAR_2, VAR_3,
      VAR_6);

 else if (FUNC_1(FUNC_6(VAR_2)->i_mode))
  VAR_7 = FUNC_3(VAR_0, VAR_1, VAR_5, VAR_2, VAR_3,
      VAR_6);
done:
 FUNC_10();

 return VAR_7;
}
