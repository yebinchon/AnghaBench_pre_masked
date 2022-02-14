
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_arg {unsigned long val; int show_string_prefix; int thread; } ;
struct file {scalar_t__ dev_maj; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 size_t FUNC_2 (unsigned long,char*,size_t,int ) ;
 size_t FUNC_3 (int ,int ,char*,size_t) ;
 int FUNC_4 (struct syscall_arg*,int ) ;
 struct file* FUNC_5 (int ,int) ;

size_t FUNC_6(char *VAR_1, size_t VAR_2, struct syscall_arg *VAR_3)
{
 unsigned long VAR_4 = VAR_3->val;
 int VAR_5 = FUNC_4(VAR_3, 0);
 struct file *VAR_6 = FUNC_5(VAR_3->thread, VAR_5);

 if (VAR_6 != ((void*)0)) {
  if (VAR_6->dev_maj == VAR_0)
   return FUNC_3(FUNC_1(VAR_4), FUNC_0(VAR_4), VAR_1, VAR_2);
 }

 return FUNC_2(VAR_4, VAR_1, VAR_2, VAR_3->show_string_prefix);
}
