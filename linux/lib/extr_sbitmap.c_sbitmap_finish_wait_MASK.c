
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbq_wait_state {int wait; } ;
struct sbq_wait {int * sbq; int wait; } ;
struct sbitmap_queue {int ws_active; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct sbitmap_queue *VAR_0, struct sbq_wait_state *VAR_1,
    struct sbq_wait *VAR_2)
{
 FUNC_1(&VAR_1->wait, &VAR_2->wait);
 if (VAR_2->sbq) {
  FUNC_0(&VAR_0->ws_active);
  VAR_2->sbq = ((void*)0);
 }
}
