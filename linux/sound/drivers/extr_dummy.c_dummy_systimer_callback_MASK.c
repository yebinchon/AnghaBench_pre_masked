
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct dummy_systimer_pcm {int elapsed; int substream; int lock; } ;


 struct dummy_systimer_pcm* VAR_0 ;
 int FUNC_0 (struct dummy_systimer_pcm*) ;
 int FUNC_1 (struct dummy_systimer_pcm*) ;
 struct dummy_systimer_pcm* FUNC_2 (int ,struct timer_list*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_2)
{
 struct dummy_systimer_pcm *VAR_3 = FUNC_2(VAR_3, VAR_2, VAR_1);
 unsigned long VAR_4;
 int VAR_5 = 0;

 FUNC_4(&VAR_3->lock, VAR_4);
 FUNC_1(VAR_3);
 FUNC_0(VAR_3);
 VAR_5 = VAR_3->elapsed;
 VAR_3->elapsed = 0;
 FUNC_5(&VAR_3->lock, VAR_4);
 if (VAR_5)
  FUNC_3(VAR_3->substream);
}
