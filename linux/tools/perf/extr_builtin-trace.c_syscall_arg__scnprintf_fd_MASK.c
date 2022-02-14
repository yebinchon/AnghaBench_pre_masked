
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_arg {int val; int trace; int thread; } ;


 size_t FUNC_0 (char*,size_t,char*,...) ;
 char* FUNC_1 (int ,int,int ) ;

size_t FUNC_2(char *VAR_0, size_t VAR_1, struct syscall_arg *VAR_2)
{
 int VAR_3 = VAR_2->val;
 size_t VAR_4 = FUNC_0(VAR_0, VAR_1, "%d", VAR_3);
 const char *VAR_5 = FUNC_1(VAR_2->thread, VAR_3, VAR_2->trace);

 if (VAR_5)
  VAR_4 += FUNC_0(VAR_0 + VAR_4, VAR_1 - VAR_4, "<%s>", VAR_5);

 return VAR_4;
}
