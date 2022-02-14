
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,int,int ) ;
 int* VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 int VAR_3 = (int *)VAR_2 - VAR_0;

 FUNC_0(VAR_1, "%d %d\n", VAR_3, FUNC_1(VAR_3));
 return 0;
}
