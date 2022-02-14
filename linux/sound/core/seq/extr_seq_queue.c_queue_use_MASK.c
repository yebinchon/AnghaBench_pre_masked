
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_queue {int clients; int timer; int clients_bitmap; } ;


 int FUNC_0 (struct snd_seq_queue*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_seq_queue*) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct snd_seq_queue *VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_2) {
  if (!FUNC_4(VAR_1, VAR_0->clients_bitmap))
   VAR_0->clients++;
 } else {
  if (FUNC_3(VAR_1, VAR_0->clients_bitmap))
   VAR_0->clients--;
 }
 if (VAR_0->clients) {
  if (VAR_2 && VAR_0->clients == 1)
   FUNC_1(VAR_0->timer);
  FUNC_2(VAR_0);
 } else {
  FUNC_0(VAR_0);
 }
}
