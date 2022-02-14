
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; int data; } ;
struct rpcsec_gss_info {int service; int qop; TYPE_1__ oid; } ;
struct TYPE_5__ {int len; int data; } ;
struct gss_api_mech {int gm_pf_num; TYPE_3__* gm_pfs; TYPE_2__ gm_oid; } ;
typedef scalar_t__ rpc_authflavor_t ;
struct TYPE_6__ {scalar_t__ pseudoflavor; int service; int qop; } ;


 int VAR_0 ;
 struct gss_api_mech* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct gss_api_mech*) ;
 int FUNC_2 (int ,int ,int ) ;

int FUNC_3(rpc_authflavor_t VAR_1,
    struct rpcsec_gss_info *VAR_2)
{
 struct gss_api_mech *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3->gm_pf_num; VAR_4++) {
  if (VAR_3->gm_pfs[VAR_4].pseudoflavor == VAR_1) {
   FUNC_2(VAR_2->oid.data, VAR_3->gm_oid.data, VAR_3->gm_oid.len);
   VAR_2->oid.len = VAR_3->gm_oid.len;
   VAR_2->qop = VAR_3->gm_pfs[VAR_4].qop;
   VAR_2->service = VAR_3->gm_pfs[VAR_4].service;
   FUNC_1(VAR_3);
   return 0;
  }
 }

 FUNC_1(VAR_3);
 return -VAR_0;
}
