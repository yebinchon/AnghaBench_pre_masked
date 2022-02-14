
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct obs_service_info {int (* create ) (int ,struct obs_service*) ;} ;
struct TYPE_8__ {int data; int settings; } ;
struct obs_service {TYPE_3__ context; TYPE_1__* control; struct obs_service_info info; } ;
typedef int obs_weak_service_t ;
typedef struct obs_service obs_service_t ;
typedef int obs_data_t ;
struct TYPE_7__ {int first_service; int services_mutex; } ;
struct TYPE_9__ {TYPE_2__ data; } ;
struct TYPE_6__ {struct obs_service* service; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct obs_service*) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 void* FUNC_2 (int) ;
 struct obs_service_info* FUNC_3 (char const*) ;
 TYPE_5__* VAR_3 ;
 int FUNC_4 (TYPE_3__*,int ,int *,char const*,int *,int) ;
 int FUNC_5 (TYPE_3__*,int *,int *) ;
 int FUNC_6 (int ,struct obs_service*) ;

__attribute__((used)) static obs_service_t *FUNC_7(const char *VAR_4,
        const char *VAR_5,
        obs_data_t *VAR_6,
        obs_data_t *VAR_7,
        bool VAR_8)
{
 const struct obs_service_info *VAR_9 = FUNC_3(VAR_4);
 struct obs_service *VAR_10;

 if (!VAR_9) {
  FUNC_1(VAR_1, "Service '%s' not found", VAR_4);
  return ((void*)0);
 }

 VAR_10 = FUNC_2(sizeof(struct obs_service));

 if (!FUNC_4(&VAR_10->context, VAR_2,
       VAR_6, VAR_5, VAR_7, VAR_8)) {
  FUNC_0(VAR_10);
  return ((void*)0);
 }

 VAR_10->info = *VAR_9;
 VAR_10->context.data =
  VAR_10->info.create(VAR_10->context.settings, VAR_10);
 if (!VAR_10->context.data)
  FUNC_1(VAR_1, "Failed to create service '%s'!", VAR_5);

 VAR_10->control = FUNC_2(sizeof(obs_weak_service_t));
 VAR_10->control->service = VAR_10;

 FUNC_5(&VAR_10->context, &VAR_3->data.services_mutex,
    &VAR_3->data.first_service);

 FUNC_1(VAR_0, "service '%s' (%s) created", VAR_5, VAR_4);
 return VAR_10;
}
