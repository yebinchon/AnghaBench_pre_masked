
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_timer {int lock; int sack_list_head; TYPE_1__* card; } ;
struct TYPE_2__ {scalar_t__ shutdown; } ;


 int FUNC_0 (struct snd_timer*,int *) ;
 int FUNC_1 (struct snd_timer*,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_0)
{
 struct snd_timer *VAR_1 = (struct snd_timer *) VAR_0;
 unsigned long VAR_2;

 if (VAR_1->card && VAR_1->card->shutdown) {
  FUNC_0(VAR_1, &VAR_1->sack_list_head);
  return;
 }

 FUNC_2(&VAR_1->lock, VAR_2);
 FUNC_1(VAR_1, &VAR_1->sack_list_head);
 FUNC_3(&VAR_1->lock, VAR_2);
}
