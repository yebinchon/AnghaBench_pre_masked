
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_4__ {int virtual; int timer; int * timer_card; } ;
typedef TYPE_1__ snd_wavefront_midi_t ;
typedef int snd_wavefront_card_t ;


 TYPE_1__* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_3)
{
 snd_wavefront_midi_t *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);
 snd_wavefront_card_t *VAR_5 = VAR_4->timer_card;
 unsigned long VAR_6;

 FUNC_3 (&VAR_4->virtual, VAR_6);
 FUNC_1(&VAR_4->timer, 1 + VAR_0);
 FUNC_4 (&VAR_4->virtual, VAR_6);
 FUNC_2(VAR_5);
}
