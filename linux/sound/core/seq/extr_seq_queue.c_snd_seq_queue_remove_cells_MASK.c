
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_remove_events {int remove_mode; scalar_t__ queue; } ;
struct snd_seq_queue {scalar_t__ queue; int timeq; int tickq; int clients_bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_seq_queue*) ;
 struct snd_seq_queue* FUNC_1 (int) ;
 int FUNC_2 (int ,int,struct snd_seq_remove_events*) ;
 scalar_t__ FUNC_3 (int,int ) ;

void FUNC_4(int VAR_2, struct snd_seq_remove_events *VAR_3)
{
 int VAR_4;
 struct snd_seq_queue *VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if ((VAR_5 = FUNC_1(VAR_4)) == ((void*)0))
   continue;
  if (FUNC_3(VAR_2, VAR_5->clients_bitmap) &&
      (! (VAR_3->remove_mode & VAR_1) ||
       VAR_5->queue == VAR_3->queue)) {
   FUNC_2(VAR_5->tickq, VAR_2, VAR_3);
   FUNC_2(VAR_5->timeq, VAR_2, VAR_3);
  }
  FUNC_0(VAR_5);
 }
}
