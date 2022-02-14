
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long cr_flags; int cr_cred; } ;
struct gss_cred {int gc_ctx; int gc_principal; int gc_service; TYPE_1__ gc_base; } ;
struct gss_cl_ctx {int dummy; } ;
struct gss_auth {int kref; int rpc_auth; } ;
struct auth_cred {int cred; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct gss_cl_ctx*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 struct gss_cred* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,struct gss_cl_ctx*) ;
 struct gss_cl_ctx* FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_1__*,struct auth_cred*,int *,int *) ;

__attribute__((used)) static struct gss_cred *
FUNC_6(struct gss_auth *VAR_3, struct gss_cred *VAR_4)
{
 struct gss_cred *VAR_5;


 VAR_5 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (VAR_5) {
  struct auth_cred VAR_6 = {
   .cred = VAR_4->gc_base.cr_cred,
  };
  struct gss_cl_ctx *VAR_7 =
   FUNC_4(VAR_4->gc_ctx, 1);

  FUNC_5(&VAR_5->gc_base, &VAR_6,
    &VAR_3->rpc_auth,
    &VAR_2);
  VAR_5->gc_base.cr_flags = 1UL << VAR_1;
  VAR_5->gc_service = VAR_4->gc_service;
  VAR_5->gc_principal = VAR_4->gc_principal;
  FUNC_1(&VAR_3->kref);
  FUNC_3(VAR_5->gc_ctx, VAR_7);
  FUNC_0(VAR_7);
 }
 return VAR_5;
}
