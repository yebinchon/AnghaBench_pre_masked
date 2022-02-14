
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_queue {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_seq_queue*) ;
 struct snd_seq_queue* FUNC_1 (int,int) ;

int FUNC_2(int VAR_2, int VAR_3)
{
 struct snd_seq_queue *VAR_4;

 if (VAR_3 < 0 || VAR_3 >= VAR_1)
  return -VAR_0;
 VAR_4 = FUNC_1(VAR_3, VAR_2);
 if (VAR_4 == ((void*)0))
  return -VAR_0;
 FUNC_0(VAR_4);

 return 0;
}
