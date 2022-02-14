
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_queue_tempo {scalar_t__ skew_base; int skew_value; int ppq; int tempo; } ;
struct snd_seq_queue {int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_seq_queue*,int) ;
 int FUNC_1 (struct snd_seq_queue*) ;
 int FUNC_2 (struct snd_seq_queue*) ;
 struct snd_seq_queue* FUNC_3 (int) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ,int ,int ) ;

int FUNC_6(int VAR_2, int VAR_3,
      struct snd_seq_queue_tempo *VAR_4)
{
 struct snd_seq_queue *VAR_5 = FUNC_3(VAR_2);
 int VAR_6;

 if (VAR_5 == ((void*)0))
  return -VAR_0;
 if (! FUNC_0(VAR_5, VAR_3)) {
  FUNC_2(VAR_5);
  return -VAR_1;
 }

 VAR_6 = FUNC_5(VAR_5->timer, VAR_4->tempo, VAR_4->ppq);
 if (VAR_6 >= 0 && VAR_4->skew_base > 0)
  VAR_6 = FUNC_4(VAR_5->timer, VAR_4->skew_value,
      VAR_4->skew_base);
 FUNC_1(VAR_5);
 FUNC_2(VAR_5);
 return VAR_6;
}
