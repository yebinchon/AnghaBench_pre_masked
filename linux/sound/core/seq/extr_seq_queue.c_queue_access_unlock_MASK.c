
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_queue {int owner_lock; scalar_t__ klocked; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct snd_seq_queue *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->owner_lock, VAR_1);
 VAR_0->klocked = 0;
 FUNC_1(&VAR_0->owner_lock, VAR_1);
}
