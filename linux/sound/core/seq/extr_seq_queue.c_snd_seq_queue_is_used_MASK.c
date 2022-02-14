
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_queue {int clients_bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_seq_queue*) ;
 struct snd_seq_queue* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ) ;

int FUNC_3(int VAR_1, int VAR_2)
{
 struct snd_seq_queue *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 == ((void*)0))
  return -VAR_0;
 VAR_4 = FUNC_2(VAR_2, VAR_3->clients_bitmap) ? 1 : 0;
 FUNC_0(VAR_3);
 return VAR_4;
}
