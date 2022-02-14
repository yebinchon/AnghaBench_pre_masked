
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct gss_api_mech {int gm_pf_num; TYPE_1__* gm_pfs; } ;
typedef int rpc_authflavor_t ;
struct TYPE_2__ {scalar_t__ qop; scalar_t__ service; int pseudoflavor; } ;


 int VAR_0 ;

rpc_authflavor_t FUNC_0(struct gss_api_mech *VAR_1, u32 VAR_2,
      u32 VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->gm_pf_num; VAR_4++) {
  if (VAR_1->gm_pfs[VAR_4].qop == VAR_2 &&
      VAR_1->gm_pfs[VAR_4].service == VAR_3) {
   return VAR_1->gm_pfs[VAR_4].pseudoflavor;
  }
 }
 return VAR_0;
}
