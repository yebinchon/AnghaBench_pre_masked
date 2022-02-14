
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct gss_cl_ctx* data; } ;
struct TYPE_3__ {struct gss_cl_ctx* data; } ;
struct gss_cl_ctx {TYPE_2__ gc_acceptor; TYPE_1__ gc_wire_ctx; int gc_gss_ctx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct gss_cl_ctx*) ;

__attribute__((used)) static void
FUNC_2(struct gss_cl_ctx *VAR_0)
{
 FUNC_0(&VAR_0->gc_gss_ctx);
 FUNC_1(VAR_0->gc_wire_ctx.data);
 FUNC_1(VAR_0->gc_acceptor.data);
 FUNC_1(VAR_0);
}
