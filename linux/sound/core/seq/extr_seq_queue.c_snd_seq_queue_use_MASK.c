
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_queue {int timer_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_seq_queue*,int,int) ;
 int FUNC_3 (struct snd_seq_queue*) ;
 struct snd_seq_queue* FUNC_4 (int) ;

int FUNC_5(int VAR_1, int VAR_2, int VAR_3)
{
 struct snd_seq_queue *VAR_4;

 VAR_4 = FUNC_4(VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;
 FUNC_0(&VAR_4->timer_mutex);
 FUNC_2(VAR_4, VAR_2, VAR_3);
 FUNC_1(&VAR_4->timer_mutex);
 FUNC_3(VAR_4);
 return 0;
}
