
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_queue {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_seq_queue*) ;
 struct snd_seq_queue* FUNC_1 (int) ;
 int FUNC_2 (struct snd_seq_queue*) ;

int FUNC_3(int VAR_1)
{
 struct snd_seq_queue *VAR_2;
 int VAR_3 = 0;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == ((void*)0))
  return -VAR_0;
 FUNC_2(VAR_2);
 FUNC_0(VAR_2);
 return VAR_3;
}
