
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union evrec {int dummy; } evrec ;
struct seq_oss_readq {int maxlen; unsigned long input_time; int pre_event_timeout; int lock; int midi_sleep; scalar_t__ tail; scalar_t__ head; scalar_t__ qlen; int q; } ;
struct seq_oss_devinfo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct seq_oss_readq*) ;
 struct seq_oss_readq* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

struct seq_oss_readq *
FUNC_5(struct seq_oss_devinfo *VAR_2, int VAR_3)
{
 struct seq_oss_readq *VAR_4;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->q = FUNC_1(VAR_3, sizeof(union evrec), VAR_0);
 if (!VAR_4->q) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }

 VAR_4->maxlen = VAR_3;
 VAR_4->qlen = 0;
 VAR_4->head = VAR_4->tail = 0;
 FUNC_0(&VAR_4->midi_sleep);
 FUNC_4(&VAR_4->lock);
 VAR_4->pre_event_timeout = VAR_1;
 VAR_4->input_time = (unsigned long)-1;

 return VAR_4;
}
