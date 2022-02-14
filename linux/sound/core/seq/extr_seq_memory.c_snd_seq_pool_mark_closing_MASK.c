
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_pool {int closing; int lock; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct snd_seq_pool *VAR_0)
{
 unsigned long VAR_1;

 if (FUNC_0(!VAR_0))
  return;
 FUNC_1(&VAR_0->lock, VAR_1);
 VAR_0->closing = 1;
 FUNC_2(&VAR_0->lock, VAR_1);
}
