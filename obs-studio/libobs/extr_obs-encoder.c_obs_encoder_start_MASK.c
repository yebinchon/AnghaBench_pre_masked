
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int init_mutex; } ;
typedef TYPE_1__ obs_encoder_t ;


 int FUNC_0 (TYPE_1__*,void (*) (void*,struct encoder_packet*),void*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (void (*) (void*,struct encoder_packet*),char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(obs_encoder_t *VAR_0,
         void (*VAR_1)(void *VAR_2,
       struct encoder_packet *VAR_3),
         void *VAR_4)
{
 if (!FUNC_1(VAR_0, "obs_encoder_start"))
  return;
 if (!FUNC_2(VAR_1, "obs_encoder_start"))
  return;

 FUNC_3(&VAR_0->init_mutex);
 FUNC_0(VAR_0, VAR_1, VAR_4);
 FUNC_4(&VAR_0->init_mutex);
}
