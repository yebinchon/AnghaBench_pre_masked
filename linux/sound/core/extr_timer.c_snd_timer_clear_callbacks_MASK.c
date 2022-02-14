
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer {int lock; } ;
struct list_head {int next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct list_head*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct snd_timer *VAR_0,
          struct list_head *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0->lock, VAR_2);
 while (!FUNC_1(VAR_1))
  FUNC_0(VAR_1->next);
 FUNC_3(&VAR_0->lock, VAR_2);
}
