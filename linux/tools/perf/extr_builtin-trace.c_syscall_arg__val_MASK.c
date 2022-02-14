
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u8 ;
struct syscall_arg {unsigned char* args; } ;


 int FUNC_0 (unsigned long*,unsigned char*,int) ;

unsigned long FUNC_1(struct syscall_arg *VAR_0, u8 VAR_1)
{
 unsigned long VAR_2;
 unsigned char *VAR_3 = VAR_0->args + sizeof(unsigned long) * VAR_1;

 FUNC_0(&VAR_2, VAR_3, sizeof(VAR_2));
 return VAR_2;
}
