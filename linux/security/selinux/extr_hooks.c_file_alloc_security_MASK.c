
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct file_security_struct {void* fown_sid; void* sid; } ;
struct file {int dummy; } ;


 void* FUNC_0 () ;
 struct file_security_struct* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0)
{
 struct file_security_struct *VAR_1 = FUNC_1(VAR_0);
 u32 VAR_2 = FUNC_0();

 VAR_1->sid = VAR_2;
 VAR_1->fown_sid = VAR_2;

 return 0;
}
