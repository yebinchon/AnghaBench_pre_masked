
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_prioq {scalar_t__ cells; int * tail; int * head; int lock; } ;


 int VAR_0 ;
 struct snd_seq_prioq* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

struct snd_seq_prioq *FUNC_2(void)
{
 struct snd_seq_prioq *VAR_1;

 VAR_1 = FUNC_0(sizeof(*VAR_1), VAR_0);
 if (!VAR_1)
  return ((void*)0);

 FUNC_1(&VAR_1->lock);
 VAR_1->head = ((void*)0);
 VAR_1->tail = ((void*)0);
 VAR_1->cells = 0;

 return VAR_1;
}
