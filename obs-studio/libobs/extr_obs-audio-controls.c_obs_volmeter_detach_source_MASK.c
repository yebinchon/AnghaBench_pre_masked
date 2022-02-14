
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int signal_handler_t ;
struct TYPE_5__ {int mutex; int * source; } ;
typedef TYPE_1__ obs_volmeter_t ;
typedef int obs_source_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_5(obs_volmeter_t *VAR_3)
{
 signal_handler_t *VAR_4;
 obs_source_t *VAR_5;

 if (!VAR_3)
  return;

 FUNC_2(&VAR_3->mutex);
 VAR_5 = VAR_3->source;
 VAR_3->source = ((void*)0);
 FUNC_3(&VAR_3->mutex);

 if (!VAR_5)
  return;

 VAR_4 = FUNC_0(VAR_5);
 FUNC_4(VAR_4, "volume", VAR_2,
      VAR_3);
 FUNC_4(VAR_4, "destroy", VAR_1,
      VAR_3);
 FUNC_1(
  VAR_5, VAR_0, VAR_3);
}
