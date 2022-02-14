
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct q6core_svc_api_info {scalar_t__ api_branch_version; int api_version; } ;
struct avcs_svc_info {int service_id; int version; } ;
struct avcs_svc_api_info {int service_id; scalar_t__ api_branch_version; int api_version; } ;
struct TYPE_8__ {int is_version_requested; int lock; TYPE_2__* svc_version; scalar_t__ get_version_supported; TYPE_1__* fwk_version; scalar_t__ fwk_version_supported; } ;
struct TYPE_7__ {int num_services; struct avcs_svc_info* svc_api_info; } ;
struct TYPE_6__ {int num_services; struct avcs_svc_api_info* svc_api_info; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;

int FUNC_4(int VAR_2, struct q6core_svc_api_info *VAR_3)
{
 int VAR_4;
 int VAR_5 = -VAR_0;

 if (!VAR_1 || !VAR_3)
  return 0;

 FUNC_0(&VAR_1->lock);
 if (!VAR_1->is_version_requested) {
  if (FUNC_2(VAR_1) == -VAR_0)
   FUNC_3(VAR_1);
  VAR_1->is_version_requested = 1;
 }

 if (VAR_1->fwk_version_supported) {
  for (VAR_4 = 0; VAR_4 < VAR_1->fwk_version->num_services; VAR_4++) {
   struct avcs_svc_api_info *VAR_6;

   VAR_6 = &VAR_1->fwk_version->svc_api_info[VAR_4];
   if (VAR_2 != VAR_6->service_id)
    continue;

   VAR_3->api_version = VAR_6->api_version;
   VAR_3->api_branch_version = VAR_6->api_branch_version;
   VAR_5 = 0;
   break;
  }
 } else if (VAR_1->get_version_supported) {
  for (VAR_4 = 0; VAR_4 < VAR_1->svc_version->num_services; VAR_4++) {
   struct avcs_svc_info *VAR_7;

   VAR_7 = &VAR_1->svc_version->svc_api_info[VAR_4];
   if (VAR_2 != VAR_7->service_id)
    continue;

   VAR_3->api_version = VAR_7->version;
   VAR_3->api_branch_version = 0;
   VAR_5 = 0;
   break;
  }
 }

 FUNC_1(&VAR_1->lock);

 return VAR_5;
}
