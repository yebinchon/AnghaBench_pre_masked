
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct delay_data {scalar_t__ msg; int packet; } ;
struct TYPE_5__ {scalar_t__ size; } ;
struct TYPE_4__ {int delay_restart_refs; scalar_t__ active_delay_ns; TYPE_3__ delay_data; } ;
typedef TYPE_1__ obs_output_t ;
typedef int dd ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,struct delay_data*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(obs_output_t *VAR_1)
{
 struct delay_data VAR_2;

 while (VAR_1->delay_data.size) {
  FUNC_0(&VAR_1->delay_data, &VAR_2, sizeof(VAR_2));
  if (VAR_2.msg == VAR_0) {
   FUNC_1(&VAR_2.packet);
  }
 }

 VAR_1->active_delay_ns = 0;
 FUNC_2(&VAR_1->delay_restart_refs, 0);
}
