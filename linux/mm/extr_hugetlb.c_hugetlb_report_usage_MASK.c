
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct mm_struct {int hugetlb_usage; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct seq_file*,char*,int) ;

void FUNC_2(struct seq_file *VAR_1, struct mm_struct *VAR_2)
{
 FUNC_1(VAR_1, "HugetlbPages:\t%8lu kB\n",
     FUNC_0(&VAR_2->hugetlb_usage) << (VAR_0 - 10));
}
