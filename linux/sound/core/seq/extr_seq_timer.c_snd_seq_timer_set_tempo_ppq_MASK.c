
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_timer {int ppq; int tempo; int lock; scalar_t__ running; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_seq_timer*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct snd_seq_timer *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;

 if (FUNC_1(!VAR_2))
  return -VAR_1;
 if (VAR_3 <= 0 || VAR_4 <= 0)
  return -VAR_1;
 FUNC_3(&VAR_2->lock, VAR_6);
 if (VAR_2->running && (VAR_4 != VAR_2->ppq)) {


  FUNC_4(&VAR_2->lock, VAR_6);
  FUNC_0("ALSA: seq: cannot change ppq of a running timer\n");
  return -VAR_0;
 }
 VAR_5 = (VAR_3 != VAR_2->tempo) || (VAR_4 != VAR_2->ppq);
 VAR_2->tempo = VAR_3;
 VAR_2->ppq = VAR_4;
 if (VAR_5)
  FUNC_2(VAR_2);
 FUNC_4(&VAR_2->lock, VAR_6);
 return 0;
}
