
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int data; } ;
struct TYPE_6__ {int (* apply_encoder_settings ) (int ,int *,int *) ;} ;
struct TYPE_8__ {TYPE_2__ context; TYPE_1__ info; } ;
typedef TYPE_3__ obs_service_t ;
typedef int obs_data_t ;


 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (int ,int *,int *) ;

void FUNC_2(obs_service_t *VAR_0,
     obs_data_t *VAR_1,
     obs_data_t *VAR_2)
{
 if (!FUNC_0(VAR_0, "obs_service_apply_encoder_settings"))
  return;
 if (!VAR_0->info.apply_encoder_settings)
  return;

 if (VAR_1 || VAR_2)
  VAR_0->info.apply_encoder_settings(VAR_0->context.data,
           VAR_1,
           VAR_2);
}
