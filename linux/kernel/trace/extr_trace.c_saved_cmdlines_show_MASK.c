
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,char*) ;
 int FUNC_1 (struct seq_file*,char*,unsigned int,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 char VAR_3[VAR_0];
 unsigned int *VAR_4 = VAR_2;

 FUNC_0(*VAR_4, VAR_3);
 FUNC_1(VAR_1, "%d %s\n", *VAR_4, VAR_3);
 return 0;
}
