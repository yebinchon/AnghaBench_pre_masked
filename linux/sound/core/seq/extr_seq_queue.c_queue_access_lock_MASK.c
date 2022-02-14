
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_queue {int klocked; int owner_lock; } ;


 int FUNC_0 (struct snd_seq_queue*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct snd_seq_queue *VAR_0, int VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_1(&VAR_0->owner_lock, VAR_2);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3)
  VAR_0->klocked = 1;
 FUNC_2(&VAR_0->owner_lock, VAR_2);
 return VAR_3;
}
