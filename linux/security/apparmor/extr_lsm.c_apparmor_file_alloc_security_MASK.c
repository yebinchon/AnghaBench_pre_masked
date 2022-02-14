
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct aa_label {int dummy; } ;
struct aa_file_ctx {int label; int lock; } ;


 int FUNC_0 (struct aa_label*) ;
 struct aa_label* FUNC_1 () ;
 int FUNC_2 (struct aa_label*) ;
 struct aa_file_ctx* FUNC_3 (struct file*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_0)
{
 struct aa_file_ctx *VAR_1 = FUNC_3(VAR_0);
 struct aa_label *VAR_2 = FUNC_1();

 FUNC_5(&VAR_1->lock);
 FUNC_4(VAR_1->label, FUNC_0(VAR_2));
 FUNC_2(VAR_2);
 return 0;
}
