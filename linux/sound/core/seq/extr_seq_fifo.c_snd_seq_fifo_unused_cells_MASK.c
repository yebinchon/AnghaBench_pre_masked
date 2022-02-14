
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_fifo {int use_lock; int lock; int pool; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct snd_seq_fifo *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;

 if (!VAR_0)
  return 0;

 FUNC_2(&VAR_0->use_lock);
 FUNC_3(&VAR_0->lock, VAR_1);
 VAR_2 = FUNC_0(VAR_0->pool);
 FUNC_4(&VAR_0->lock, VAR_1);
 FUNC_1(&VAR_0->use_lock);
 return VAR_2;
}
