
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct delay_data {int ts; int msg; } ;
struct TYPE_4__ {int delay_mutex; int delay_data; } ;
typedef TYPE_1__ obs_output_t ;
typedef int dd ;


 int VAR_0 ;
 int FUNC_0 (int *,struct delay_data*,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(obs_output_t *VAR_1)
{
 struct delay_data VAR_2 = {
  .msg = VAR_0,
  .ts = FUNC_2(),
 };

 FUNC_3(&VAR_1->delay_mutex);
 FUNC_0(&VAR_1->delay_data, &VAR_2, sizeof(VAR_2));
 FUNC_4(&VAR_1->delay_mutex);

 FUNC_1(VAR_1, "stopping");
}
