
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {TYPE_1__* op; } ;
typedef int loff_t ;
struct TYPE_2__ {void* (* start ) (struct seq_file*,int *) ;} ;


 void* FUNC_0 (struct seq_file*,int *) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_0, void *VAR_1, loff_t *VAR_2)
{
 (*VAR_2)++;
 return VAR_0->op->start(VAR_0, VAR_2);
}
