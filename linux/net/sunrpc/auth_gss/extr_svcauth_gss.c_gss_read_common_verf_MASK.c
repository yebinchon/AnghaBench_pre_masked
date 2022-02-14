
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_netobj {int dummy; } ;
struct TYPE_2__ {scalar_t__ len; } ;
struct rpc_gss_wire_cred {scalar_t__ gc_proc; TYPE_1__ gc_ctx; } ;
struct kvec {int iov_len; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct xdr_netobj*,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct kvec*) ;

__attribute__((used)) static inline int
FUNC_2(struct rpc_gss_wire_cred *VAR_6,
       struct kvec *VAR_7, __be32 *VAR_8,
       struct xdr_netobj *VAR_9)
{

 *VAR_8 = VAR_5;
 if (VAR_7->iov_len < 2 * 4)
  return VAR_3;
 if (FUNC_1(VAR_7) != VAR_0)
  return VAR_3;
 if (FUNC_1(VAR_7) != 0)
  return VAR_3;

 *VAR_8 = VAR_4;
 if (VAR_6->gc_proc == VAR_1 && VAR_6->gc_ctx.len != 0)
  return VAR_3;
 if (FUNC_0(VAR_9, &VAR_6->gc_ctx))
  return VAR_2;
 *VAR_8 = VAR_5;

 return 0;
}
