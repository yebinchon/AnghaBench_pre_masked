
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_descr {char* member_0; } ;
struct super_block {int * s_op; } ;
struct fs_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct super_block*,int ,struct tree_descr const*) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_2, struct fs_context *VAR_3)
{
 static const struct tree_descr VAR_4[] = {{""}};
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_0, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_2->s_op = &VAR_1;

 return 0;
}
