
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_oss_readq {unsigned int qlen; int midi_sleep; } ;
struct file {int dummy; } ;
typedef int poll_table ;


 int FUNC_0 (struct file*,int *,int *) ;

unsigned int
FUNC_1(struct seq_oss_readq *VAR_0, struct file *VAR_1, poll_table *VAR_2)
{
 FUNC_0(VAR_1, &VAR_0->midi_sleep, VAR_2);
 return VAR_0->qlen;
}
