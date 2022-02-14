
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct xdr_buf {int dummy; } ;
struct gss_ctx {TYPE_2__* mech_type; } ;
struct TYPE_4__ {TYPE_1__* gm_ops; } ;
struct TYPE_3__ {int (* gss_unwrap ) (struct gss_ctx*,int,struct xdr_buf*) ;} ;


 int FUNC_0 (struct gss_ctx*,int,struct xdr_buf*) ;

u32
FUNC_1(struct gss_ctx *VAR_0,
    int VAR_1,
    struct xdr_buf *VAR_2)
{
 return VAR_0->mech_type->gm_ops
  ->gss_unwrap(VAR_0, VAR_1, VAR_2);
}
