
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_cmdline {scalar_t__ pid; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct tep_cmdline *VAR_2 = VAR_0;
 const struct tep_cmdline *VAR_3 = VAR_1;
 const struct tep_cmdline *VAR_4 = VAR_3 + 1;

 if (VAR_2->pid < VAR_3->pid)
  return -1;

 if (VAR_2->pid > VAR_3->pid) {
  if (VAR_2->pid <= VAR_4->pid)
   return 0;
  return 1;
 }

 return 0;
}
