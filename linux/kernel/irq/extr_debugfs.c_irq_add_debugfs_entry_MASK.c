
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {scalar_t__ debugfs_file; } ;


 scalar_t__ FUNC_0 (char*,int,int ,struct irq_desc*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,unsigned int) ;

void FUNC_2(unsigned int VAR_2, struct irq_desc *VAR_3)
{
 char VAR_4 [10];

 if (!VAR_1 || !VAR_3 || VAR_3->debugfs_file)
  return;

 FUNC_1(VAR_4, "%d", VAR_2);
 VAR_3->debugfs_file = FUNC_0(VAR_4, 0644, VAR_1, VAR_3,
       &VAR_0);
}
