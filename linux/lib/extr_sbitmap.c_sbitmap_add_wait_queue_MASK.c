
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbq_wait_state {int wait; } ;
struct sbq_wait {int wait; struct sbitmap_queue* sbq; } ;
struct sbitmap_queue {int ws_active; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct sbitmap_queue *VAR_0,
       struct sbq_wait_state *VAR_1,
       struct sbq_wait *VAR_2)
{
 if (!VAR_2->sbq) {
  VAR_2->sbq = VAR_0;
  FUNC_1(&VAR_0->ws_active);
 }
 FUNC_0(&VAR_1->wait, &VAR_2->wait);
}
