
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_queue {int use_lock; } ;


 int VAR_0 ;
 struct snd_seq_queue** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct snd_seq_queue *FUNC_3(int VAR_3)
{
 struct snd_seq_queue *VAR_4;
 unsigned long VAR_5;

 if (VAR_3 < 0 || VAR_3 >= VAR_0)
  return ((void*)0);
 FUNC_1(&VAR_2, VAR_5);
 VAR_4 = VAR_1[VAR_3];
 if (VAR_4)
  FUNC_0(&VAR_4->use_lock);
 FUNC_2(&VAR_2, VAR_5);
 return VAR_4;
}
