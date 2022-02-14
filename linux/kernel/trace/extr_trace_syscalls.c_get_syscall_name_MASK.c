
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_metadata {char const* name; } ;


 struct syscall_metadata* FUNC_0 (int) ;

const char *FUNC_1(int VAR_0)
{
 struct syscall_metadata *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return ((void*)0);

 return VAR_1->name;
}
