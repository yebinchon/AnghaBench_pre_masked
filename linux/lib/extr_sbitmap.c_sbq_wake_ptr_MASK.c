
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbq_wait_state {int wait; } ;
struct sbitmap_queue {int wake_index; struct sbq_wait_state* ws; int ws_active; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static struct sbq_wait_state *FUNC_4(struct sbitmap_queue *VAR_1)
{
 int VAR_2, VAR_3;

 if (!FUNC_0(&VAR_1->ws_active))
  return ((void*)0);

 VAR_3 = FUNC_0(&VAR_1->wake_index);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct sbq_wait_state *VAR_4 = &VAR_1->ws[VAR_3];

  if (FUNC_3(&VAR_4->wait)) {
   if (VAR_3 != FUNC_0(&VAR_1->wake_index))
    FUNC_1(&VAR_1->wake_index, VAR_3);
   return VAR_4;
  }

  VAR_3 = FUNC_2(VAR_3);
 }

 return ((void*)0);
}
