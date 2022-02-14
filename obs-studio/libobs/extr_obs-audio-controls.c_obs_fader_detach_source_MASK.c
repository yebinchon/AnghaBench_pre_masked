
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int signal_handler_t ;
typedef int obs_source_t ;
struct TYPE_4__ {int mutex; int * source; } ;
typedef TYPE_1__ obs_fader_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ,TYPE_1__*) ;

void FUNC_4(obs_fader_t *VAR_2)
{
 signal_handler_t *VAR_3;
 obs_source_t *VAR_4;

 if (!VAR_2)
  return;

 FUNC_1(&VAR_2->mutex);
 VAR_4 = VAR_2->source;
 VAR_2->source = ((void*)0);
 FUNC_2(&VAR_2->mutex);

 if (!VAR_4)
  return;

 VAR_3 = FUNC_0(VAR_4);
 FUNC_3(VAR_3, "volume", VAR_1,
      VAR_2);
 FUNC_3(VAR_3, "destroy", VAR_0, VAR_2);
}
