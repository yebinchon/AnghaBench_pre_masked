
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int settings; scalar_t__ data; } ;
struct TYPE_6__ {int (* update ) (scalar_t__,int ) ;} ;
struct TYPE_8__ {TYPE_2__ context; TYPE_1__ info; } ;
typedef TYPE_3__ obs_encoder_t ;
typedef int obs_data_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (scalar_t__,int ) ;

void FUNC_3(obs_encoder_t *VAR_0, obs_data_t *VAR_1)
{
 if (!FUNC_1(VAR_0, "obs_encoder_update"))
  return;

 FUNC_0(VAR_0->context.settings, VAR_1);

 if (VAR_0->info.update && VAR_0->context.data)
  VAR_0->info.update(VAR_0->context.data,
         VAR_0->context.settings);
}
