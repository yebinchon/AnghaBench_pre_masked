
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef scalar_t__ u32 ;
struct xdr_netobj {int dummy; } ;
struct TYPE_2__ {scalar_t__ page_len; struct kvec* head; } ;
struct svc_rqst {int rq_pages; TYPE_1__ rq_arg; } ;
struct rpc_gss_wire_cred {int dummy; } ;
struct kvec {scalar_t__ iov_len; scalar_t__ iov_base; } ;
struct gssp_in_token {int page_base; scalar_t__ page_len; int pages; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rpc_gss_wire_cred*,struct kvec*,int *,struct xdr_netobj*) ;
 scalar_t__ FUNC_1 (struct kvec*) ;

__attribute__((used)) static inline int
FUNC_2(struct svc_rqst *VAR_2,
      struct rpc_gss_wire_cred *VAR_3, __be32 *VAR_4,
      struct xdr_netobj *VAR_5,
      struct gssp_in_token *VAR_6)
{
 struct kvec *VAR_7 = &VAR_2->rq_arg.head[0];
 u32 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_3, VAR_7, VAR_4, VAR_5);
 if (VAR_9)
  return VAR_9;

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8 > (VAR_7->iov_len + VAR_2->rq_arg.page_len))
  return VAR_1;

 VAR_6->pages = VAR_2->rq_pages;
 VAR_6->page_base = (ulong)VAR_7->iov_base & ~VAR_0;
 VAR_6->page_len = VAR_8;

 return 0;
}
