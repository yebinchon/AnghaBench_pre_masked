
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int settings; int data; } ;
struct TYPE_3__ {int (* activate ) (int ,int ) ;} ;
struct obs_service {int active; TYPE_2__ context; TYPE_1__ info; int output; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct obs_service*) ;
 int FUNC_2 (struct obs_service*,char*) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct obs_service *VAR_1)
{
 if (!FUNC_2(VAR_1, "obs_service_activate"))
  return;
 if (!VAR_1->output) {
  FUNC_0(VAR_0,
       "obs_service_deactivate: service '%s' "
       "is not assigned to an output",
       FUNC_1(VAR_1));
  return;
 }
 if (VAR_1->active)
  return;

 if (VAR_1->info.activate)
  VAR_1->info.activate(VAR_1->context.data,
           VAR_1->context.settings);
 VAR_1->active = 1;
}
