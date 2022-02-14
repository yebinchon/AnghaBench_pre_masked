
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_timer {unsigned int skew; int lock; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,unsigned int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct snd_seq_timer *VAR_2, unsigned int VAR_3,
      unsigned int VAR_4)
{
 unsigned long VAR_5;

 if (FUNC_1(!VAR_2))
  return -VAR_0;


 if (VAR_4 != VAR_1) {
  FUNC_0("ALSA: seq: invalid skew base 0x%x\n", VAR_4);
  return -VAR_0;
 }
 FUNC_2(&VAR_2->lock, VAR_5);
 VAR_2->skew = VAR_3;
 FUNC_3(&VAR_2->lock, VAR_5);
 return 0;
}
