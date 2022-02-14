
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_queue {int owner_lock; } ;


 int FUNC_0 (struct snd_seq_queue*,int) ;
 int FUNC_1 (struct snd_seq_queue*) ;
 struct snd_seq_queue* FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(int VAR_0, int VAR_1)
{
 struct snd_seq_queue *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;
 unsigned long VAR_4;

 if (! VAR_2)
  return 0;
 FUNC_3(&VAR_2->owner_lock, VAR_4);
 VAR_3 = FUNC_0(VAR_2, VAR_1);
 FUNC_4(&VAR_2->owner_lock, VAR_4);
 FUNC_1(VAR_2);
 return VAR_3;
}
