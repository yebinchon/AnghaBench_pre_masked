
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct aa_file_ctx {int label; } ;


 int FUNC_0 (int ) ;
 struct aa_file_ctx* FUNC_1 (struct file*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct file *VAR_0)
{
 struct aa_file_ctx *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1)
  FUNC_0(FUNC_2(VAR_1->label));
}
