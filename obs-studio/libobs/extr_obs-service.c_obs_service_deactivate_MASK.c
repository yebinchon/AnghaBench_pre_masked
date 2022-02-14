
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
struct TYPE_3__ {int (* deactivate ) (int ) ;} ;
struct obs_service {int active; int * output; scalar_t__ destroy; TYPE_2__ context; TYPE_1__ info; } ;


 int VAR_0 ;
 int FUNC_0 (struct obs_service*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct obs_service*) ;
 int FUNC_3 (struct obs_service*,char*) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct obs_service *VAR_1, bool VAR_2)
{
 if (!FUNC_3(VAR_1, "obs_service_deactivate"))
  return;
 if (!VAR_1->output) {
  FUNC_1(VAR_0,
       "obs_service_deactivate: service '%s' "
       "is not assigned to an output",
       FUNC_2(VAR_1));
  return;
 }

 if (!VAR_1->active)
  return;

 if (VAR_1->info.deactivate)
  VAR_1->info.deactivate(VAR_1->context.data);
 VAR_1->active = 0;

 if (VAR_1->destroy)
  FUNC_0(VAR_1);
 else if (VAR_2)
  VAR_1->output = ((void*)0);
}
