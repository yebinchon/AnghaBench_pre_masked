
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,unsigned long) ;

int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 unsigned long VAR_2 = (unsigned long)VAR_1 - 1;

 FUNC_0(VAR_0, "%lu\n", VAR_2);
 return 0;
}
