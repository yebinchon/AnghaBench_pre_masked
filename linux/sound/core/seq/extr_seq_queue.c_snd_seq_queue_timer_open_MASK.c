
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_timer {int dummy; } ;
struct snd_seq_queue {struct snd_seq_timer* timer; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_seq_queue*) ;
 struct snd_seq_queue* FUNC_1 (int) ;
 int FUNC_2 (struct snd_seq_timer*) ;
 int FUNC_3 (struct snd_seq_queue*) ;

int FUNC_4(int VAR_1)
{
 int VAR_2 = 0;
 struct snd_seq_queue *VAR_3;
 struct snd_seq_timer *VAR_4;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 == ((void*)0))
  return -VAR_0;
 VAR_4 = VAR_3->timer;
 if ((VAR_2 = FUNC_3(VAR_3)) < 0) {
  FUNC_2(VAR_4);
  VAR_2 = FUNC_3(VAR_3);
 }
 FUNC_0(VAR_3);
 return VAR_2;
}
