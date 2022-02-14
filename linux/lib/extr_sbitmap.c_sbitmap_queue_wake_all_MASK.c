
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbq_wait_state {int wait; } ;
struct sbitmap_queue {struct sbq_wait_state* ws; int wake_index; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct sbitmap_queue *VAR_1)
{
 int VAR_2, VAR_3;





 FUNC_2();
 VAR_3 = FUNC_0(&VAR_1->wake_index);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct sbq_wait_state *VAR_4 = &VAR_1->ws[VAR_3];

  if (FUNC_3(&VAR_4->wait))
   FUNC_4(&VAR_4->wait);

  VAR_3 = FUNC_1(VAR_3);
 }
}
