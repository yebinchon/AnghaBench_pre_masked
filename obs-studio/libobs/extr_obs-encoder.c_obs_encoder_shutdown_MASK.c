
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * data; } ;
struct TYPE_5__ {int (* destroy ) (int *) ;} ;
struct TYPE_7__ {int first_received; int init_mutex; scalar_t__ start_ts; scalar_t__ offset_usec; int * paired_encoder; TYPE_2__ context; TYPE_1__ info; } ;
typedef TYPE_3__ obs_encoder_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(obs_encoder_t *VAR_0)
{
 FUNC_0(&VAR_0->init_mutex);
 if (VAR_0->context.data) {
  VAR_0->info.destroy(VAR_0->context.data);
  VAR_0->context.data = ((void*)0);
  VAR_0->paired_encoder = ((void*)0);
  VAR_0->first_received = 0;
  VAR_0->offset_usec = 0;
  VAR_0->start_ts = 0;
 }
 FUNC_1(&VAR_0->init_mutex);
}
