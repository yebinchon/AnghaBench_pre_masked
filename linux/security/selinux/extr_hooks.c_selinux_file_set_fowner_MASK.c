
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_security_struct {int fown_sid; } ;
struct file {int dummy; } ;


 int FUNC_0 () ;
 struct file_security_struct* FUNC_1 (struct file*) ;

__attribute__((used)) static void FUNC_2(struct file *VAR_0)
{
 struct file_security_struct *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 VAR_1->fown_sid = FUNC_0();
}
