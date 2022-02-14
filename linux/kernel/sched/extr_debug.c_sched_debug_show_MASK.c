
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,int) ;
 int FUNC_1 (struct seq_file*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 int VAR_2 = (unsigned long)(VAR_1 - 2);

 if (VAR_2 != -1)
  FUNC_0(VAR_0, VAR_2);
 else
  FUNC_1(VAR_0);

 return 0;
}
