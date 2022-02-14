
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {scalar_t__ kernel; scalar_t__ vmlinux; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct symbol *VAR_1)
{
 if (!VAR_0)
  return 1;
 if (VAR_1->vmlinux || VAR_1->kernel)
  return 0;
 return 1;
}
