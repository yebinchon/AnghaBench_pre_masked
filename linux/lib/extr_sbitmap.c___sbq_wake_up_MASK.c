
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbq_wait_state {int wait; int wait_cnt; } ;
struct sbitmap_queue {int wake_index; int wake_batch; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct sbq_wait_state* FUNC_4 (struct sbitmap_queue*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,unsigned int) ;

__attribute__((used)) static bool FUNC_7(struct sbitmap_queue *VAR_0)
{
 struct sbq_wait_state *VAR_1;
 unsigned int VAR_2;
 int VAR_3;

 VAR_1 = FUNC_4(VAR_0);
 if (!VAR_1)
  return 0;

 VAR_3 = FUNC_2(&VAR_1->wait_cnt);
 if (VAR_3 <= 0) {
  int VAR_4;

  VAR_2 = FUNC_0(VAR_0->wake_batch);






  FUNC_5();






  VAR_4 = FUNC_1(&VAR_1->wait_cnt, VAR_3, VAR_2);
  if (VAR_4 == VAR_3) {
   FUNC_3(&VAR_0->wake_index);
   FUNC_6(&VAR_1->wait, VAR_2);
   return 0;
  }

  return 1;
 }

 return 0;
}
