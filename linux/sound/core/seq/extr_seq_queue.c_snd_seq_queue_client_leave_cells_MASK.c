
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_queue {int timeq; int tickq; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_seq_queue*) ;
 struct snd_seq_queue* FUNC_1 (int) ;
 int FUNC_2 (int ,int,int ) ;

void FUNC_3(int VAR_1)
{
 int VAR_2;
 struct snd_seq_queue *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if ((VAR_3 = FUNC_1(VAR_2)) == ((void*)0))
   continue;
  FUNC_2(VAR_3->tickq, VAR_1, 0);
  FUNC_2(VAR_3->timeq, VAR_1, 0);
  FUNC_0(VAR_3);
 }
}
