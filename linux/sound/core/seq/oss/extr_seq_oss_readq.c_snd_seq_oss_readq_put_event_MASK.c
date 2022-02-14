
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union evrec {int dummy; } evrec ;
struct seq_oss_readq {int qlen; int maxlen; size_t tail; int lock; int midi_sleep; int * q; } ;


 int VAR_0 ;
 int FUNC_0 (int *,union evrec*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct seq_oss_readq *VAR_1, union evrec *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_1->lock, VAR_3);
 if (VAR_1->qlen >= VAR_1->maxlen - 1) {
  FUNC_2(&VAR_1->lock, VAR_3);
  return -VAR_0;
 }

 FUNC_0(&VAR_1->q[VAR_1->tail], VAR_2, sizeof(*VAR_2));
 VAR_1->tail = (VAR_1->tail + 1) % VAR_1->maxlen;
 VAR_1->qlen++;


 FUNC_3(&VAR_1->midi_sleep);

 FUNC_2(&VAR_1->lock, VAR_3);

 return 0;
}
