
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kallsym_iter {int show_value; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct kallsym_iter* FUNC_0 (struct file*,int *,int) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (struct kallsym_iter*,int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{





 struct kallsym_iter *VAR_4;
 VAR_4 = FUNC_0(VAR_3, &VAR_1, sizeof(*VAR_4));
 if (!VAR_4)
  return -VAR_0;
 FUNC_2(VAR_4, 0);

 VAR_4->show_value = FUNC_1();
 return 0;
}
