
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct gss_api_mech {int gm_pf_num; TYPE_1__* gm_pfs; } ;
struct TYPE_2__ {scalar_t__ service; char* auth_domain_name; } ;



char *
FUNC_0(struct gss_api_mech *VAR_0, u32 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->gm_pf_num; VAR_2++) {
  if (VAR_0->gm_pfs[VAR_2].service == VAR_1)
   return VAR_0->gm_pfs[VAR_2].auth_domain_name;
 }
 return ((void*)0);
}
