
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_queue {int locked; int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_seq_queue*,int) ;
 int FUNC_1 (struct snd_seq_queue*) ;
 int FUNC_2 (struct snd_seq_queue*) ;
 struct snd_seq_queue* FUNC_3 (int) ;

int FUNC_4(int VAR_2, int VAR_3, int VAR_4)
{
 struct snd_seq_queue *VAR_5 = FUNC_3(VAR_2);

 if (VAR_5 == ((void*)0))
  return -VAR_0;

 if (! FUNC_0(VAR_5, VAR_3)) {
  FUNC_2(VAR_5);
  return -VAR_1;
 }

 VAR_5->locked = VAR_4 ? 1 : 0;
 VAR_5->owner = VAR_3;
 FUNC_1(VAR_5);
 FUNC_2(VAR_5);

 return 0;
}
