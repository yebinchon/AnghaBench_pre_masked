
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pool_workqueue {scalar_t__ nr_active; scalar_t__ max_active; int flush_color; TYPE_2__* wq; scalar_t__* nr_in_flight; int delayed_works; } ;
struct TYPE_4__ {TYPE_1__* first_flusher; int nr_pwqs_to_flush; } ;
struct TYPE_3__ {int done; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pool_workqueue*) ;
 int FUNC_5 (struct pool_workqueue*) ;

__attribute__((used)) static void FUNC_6(struct pool_workqueue *VAR_1, int VAR_2)
{

 if (VAR_2 == VAR_0)
  goto out_put;

 VAR_1->nr_in_flight[VAR_2]--;

 VAR_1->nr_active--;
 if (!FUNC_3(&VAR_1->delayed_works)) {

  if (VAR_1->nr_active < VAR_1->max_active)
   FUNC_5(VAR_1);
 }


 if (FUNC_2(VAR_1->flush_color != VAR_2))
  goto out_put;


 if (VAR_1->nr_in_flight[VAR_2])
  goto out_put;


 VAR_1->flush_color = -1;





 if (FUNC_0(&VAR_1->wq->nr_pwqs_to_flush))
  FUNC_1(&VAR_1->wq->first_flusher->done);
out_put:
 FUNC_4(VAR_1);
}
