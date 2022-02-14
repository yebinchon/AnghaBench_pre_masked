
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct seq_file*,char*,int ) ;
 int FUNC_1 (struct seq_file*,char*) ;
 unsigned long VAR_2 ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_3, void *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (!(VAR_2 & (1UL << VAR_5)))
   FUNC_1(VAR_3, "NO_");
  FUNC_0(VAR_3, "%s ", VAR_1[VAR_5]);
 }
 FUNC_1(VAR_3, "\n");

 return 0;
}
