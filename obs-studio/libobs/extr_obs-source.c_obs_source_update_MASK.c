
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int settings; scalar_t__ data; } ;
struct TYPE_7__ {int output_flags; int (* update ) (scalar_t__,int ) ;} ;
struct TYPE_8__ {int defer_update; TYPE_1__ context; TYPE_2__ info; } ;
typedef TYPE_3__ obs_source_t ;
typedef int obs_data_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (scalar_t__,int ) ;

void FUNC_3(obs_source_t *VAR_1, obs_data_t *VAR_2)
{
 if (!FUNC_1(VAR_1, "obs_source_update"))
  return;

 if (VAR_2)
  FUNC_0(VAR_1->context.settings, VAR_2);

 if (VAR_1->info.output_flags & VAR_0) {
  VAR_1->defer_update = 1;
 } else if (VAR_1->context.data && VAR_1->info.update) {
  VAR_1->info.update(VAR_1->context.data,
        VAR_1->context.settings);
 }
}
