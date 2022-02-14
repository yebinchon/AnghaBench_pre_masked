
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,...) ;
 int FUNC_1 (char*,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_1,
       unsigned long *VAR_2,
       unsigned int VAR_3)
{
 char VAR_4[VAR_0];
 unsigned int VAR_5 = 8;
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (!VAR_2[VAR_6])
   return;

  FUNC_0(VAR_1, "%*c", 1 + VAR_5, ' ');
  FUNC_1(VAR_4, VAR_2[VAR_6]);
  FUNC_0(VAR_1, "%s\n", VAR_4);
 }
}
